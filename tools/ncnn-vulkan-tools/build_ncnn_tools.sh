#!/bin/bash

# Script to build ncnn-vulkan based tools from source
# This is an alternative to downloading pre-built binaries

TOOLS_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
BUILD_DIR="${TOOLS_DIR}/build"
SOURCE_DIR="${TOOLS_DIR}/source"
INSTALL_DIR="${TOOLS_DIR}/bin"

# Create directories
mkdir -p "${BUILD_DIR}"
mkdir -p "${SOURCE_DIR}"
mkdir -p "${INSTALL_DIR}"

# Check for required tools
check_requirements() {
    local missing_tools=()
    
    for tool in git cmake make; do
        if ! command -v $tool &> /dev/null; then
            missing_tools+=($tool)
        fi
    done
    
    if [[ ${#missing_tools[@]} -gt 0 ]]; then
        echo "Error: Missing required tools: ${missing_tools[*]}"
        echo "Please install them first."
        exit 1
    fi
    
    echo "All required tools found"
}

# Function to clone and build tool
build_tool() {
    local tool_name=$1
    local repo_url=$2
    local extra_cmake_args=$3
    
    echo "Building ${tool_name}..."
    
    # Clone repository
    local src_dir="${SOURCE_DIR}/${tool_name}"
    if [[ ! -d "$src_dir" ]]; then
        git clone --depth 1 "$repo_url" "$src_dir"
    else
        echo "Source already exists, pulling latest..."
        cd "$src_dir" && git pull
    fi
    
    # Update submodules
    cd "$src_dir"
    git submodule update --init --recursive
    
    # Build
    local build_dir="${BUILD_DIR}/${tool_name}"
    mkdir -p "$build_dir"
    cd "$build_dir"
    
    cmake "$src_dir" \
        -DCMAKE_BUILD_TYPE=Release \
        -DCMAKE_INSTALL_PREFIX="${INSTALL_DIR}/${tool_name}" \
        $extra_cmake_args
    
    make -j$(nproc 2>/dev/null || sysctl -n hw.ncpu 2>/dev/null || echo 4)
    make install
    
    # Create symlink in bin directory
    local executable="${INSTALL_DIR}/${tool_name}/bin/${tool_name}"
    if [[ -f "$executable" ]]; then
        ln -sf "$executable" "${INSTALL_DIR}/${tool_name}"
        echo "Created symlink: ${INSTALL_DIR}/${tool_name}"
    fi
    
    echo "${tool_name} built successfully"
    return 0
}

# Check requirements
check_requirements

# Platform-specific settings
CMAKE_ARGS=""
if [[ "$OSTYPE" == "darwin"* ]]; then
    # macOS specific settings
    CMAKE_ARGS="-DCMAKE_OSX_ARCHITECTURES=x86_64;arm64"
fi

echo "Starting builds..."

# Build ncnn first (dependency for other tools)
echo "Building ncnn library..."
NCNN_DIR="${SOURCE_DIR}/ncnn"
if [[ ! -d "$NCNN_DIR" ]]; then
    git clone --depth 1 https://github.com/Tencent/ncnn.git "$NCNN_DIR"
fi

cd "$NCNN_DIR"
git submodule update --init --recursive

NCNN_BUILD_DIR="${BUILD_DIR}/ncnn"
mkdir -p "$NCNN_BUILD_DIR"
cd "$NCNN_BUILD_DIR"

cmake "$NCNN_DIR" \
    -DCMAKE_BUILD_TYPE=Release \
    -DCMAKE_INSTALL_PREFIX="${INSTALL_DIR}/ncnn" \
    -DNCNN_VULKAN=ON \
    -DNCNN_BUILD_EXAMPLES=OFF \
    -DNCNN_BUILD_TOOLS=OFF \
    $CMAKE_ARGS

make -j$(nproc 2>/dev/null || sysctl -n hw.ncpu 2>/dev/null || echo 4)
make install

export ncnn_DIR="${INSTALL_DIR}/ncnn/lib/cmake/ncnn"

# Build tools
build_tool "waifu2x-ncnn-vulkan" "https://github.com/nihui/waifu2x-ncnn-vulkan" "-Dncnn_DIR=${ncnn_DIR}"
build_tool "srmd-ncnn-vulkan" "https://github.com/nihui/srmd-ncnn-vulkan" "-Dncnn_DIR=${ncnn_DIR}"
build_tool "realsr-ncnn-vulkan" "https://github.com/nihui/realsr-ncnn-vulkan" "-Dncnn_DIR=${ncnn_DIR}"
build_tool "realcugan-ncnn-vulkan" "https://github.com/nihui/realcugan-ncnn-vulkan" "-Dncnn_DIR=${ncnn_DIR}"
build_tool "rife-ncnn-vulkan" "https://github.com/nihui/rife-ncnn-vulkan" "-Dncnn_DIR=${ncnn_DIR}"
build_tool "cain-ncnn-vulkan" "https://github.com/nihui/cain-ncnn-vulkan" "-Dncnn_DIR=${ncnn_DIR}"
build_tool "dain-ncnn-vulkan" "https://github.com/nihui/dain-ncnn-vulkan" "-Dncnn_DIR=${ncnn_DIR}"

echo "All builds completed!"
echo "Binaries are located in: ${INSTALL_DIR}"