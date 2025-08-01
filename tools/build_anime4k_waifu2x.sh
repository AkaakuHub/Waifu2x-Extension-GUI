#!/bin/bash

# Script to build Anime4KCPP and waifu2x-converter-cpp for Linux/macOS

set -e

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
BUILD_DIR="${SCRIPT_DIR}/build"
SOURCE_DIR="${SCRIPT_DIR}/source"
INSTALL_DIR="${SCRIPT_DIR}/bin"

# Create directories
mkdir -p "${BUILD_DIR}"
mkdir -p "${SOURCE_DIR}"
mkdir -p "${INSTALL_DIR}"

# Detect platform
PLATFORM=""
CMAKE_ARGS=""
if [[ "$OSTYPE" == "linux-gnu"* ]]; then
    PLATFORM="linux"
    JOBS=$(nproc)
elif [[ "$OSTYPE" == "darwin"* ]]; then
    PLATFORM="macos"
    JOBS=$(sysctl -n hw.ncpu)
    CMAKE_ARGS="-DCMAKE_OSX_ARCHITECTURES=x86_64;arm64"
else
    echo "Unsupported platform: $OSTYPE"
    exit 1
fi

echo "Platform: ${PLATFORM}"
echo "Parallel jobs: ${JOBS}"

# Function to check requirements
check_requirements() {
    echo "Checking build requirements..."
    
    local missing=()
    for tool in git cmake make g++ pkg-config; do
        if ! command -v $tool &> /dev/null; then
            missing+=($tool)
        fi
    done
    
    if [[ ${#missing[@]} -gt 0 ]]; then
        echo "Error: Missing required tools: ${missing[*]}"
        echo "Please run install_dependencies.sh first"
        exit 1
    fi
    
    echo "All requirements satisfied"
}

# Build Anime4KCPP
build_anime4kcpp() {
    echo "Building Anime4KCPP..."
    
    local src_dir="${SOURCE_DIR}/Anime4KCPP"
    local build_dir="${BUILD_DIR}/Anime4KCPP"
    local install_dir="${INSTALL_DIR}/Anime4KCPP"
    
    # Clone repository
    if [[ ! -d "$src_dir" ]]; then
        git clone --depth 1 https://github.com/TianZerL/Anime4KCPP.git "$src_dir"
    else
        echo "Updating existing source..."
        cd "$src_dir" && git pull
    fi
    
    # Build
    mkdir -p "$build_dir"
    cd "$build_dir"
    
    cmake "$src_dir" \
        -DCMAKE_BUILD_TYPE=Release \
        -DCMAKE_INSTALL_PREFIX="$install_dir" \
        -DBUILD_SHARED_LIBS=OFF \
        -DUSE_OPENCL=ON \
        -DUSE_CUDA=OFF \
        $CMAKE_ARGS
    
    make -j${JOBS}
    make install
    
    # Create convenience symlinks
    if [[ -f "$install_dir/bin/Anime4KCPP_CLI" ]]; then
        ln -sf "$install_dir/bin/Anime4KCPP_CLI" "${INSTALL_DIR}/Anime4KCPP"
        echo "Created symlink: ${INSTALL_DIR}/Anime4KCPP"
    fi
    
    echo "Anime4KCPP build completed"
}

# Build waifu2x-converter-cpp
build_waifu2x_converter() {
    echo "Building waifu2x-converter-cpp..."
    
    local src_dir="${SOURCE_DIR}/waifu2x-converter-cpp"
    local build_dir="${BUILD_DIR}/waifu2x-converter-cpp"
    local install_dir="${INSTALL_DIR}/waifu2x-converter-cpp"
    
    # Clone repository
    if [[ ! -d "$src_dir" ]]; then
        git clone --depth 1 https://github.com/DeadSix27/waifu2x-converter-cpp.git "$src_dir"
    else
        echo "Updating existing source..."
        cd "$src_dir" && git pull
    fi
    
    # Build
    mkdir -p "$build_dir"
    cd "$build_dir"
    
    cmake "$src_dir" \
        -DCMAKE_BUILD_TYPE=Release \
        -DCMAKE_INSTALL_PREFIX="$install_dir" \
        -DENABLE_OPENCL=ON \
        -DENABLE_CUDA=OFF \
        $CMAKE_ARGS
    
    make -j${JOBS}
    make install
    
    # Create convenience symlinks
    if [[ -f "$install_dir/bin/waifu2x-converter-cpp" ]]; then
        ln -sf "$install_dir/bin/waifu2x-converter-cpp" "${INSTALL_DIR}/waifu2x-converter-cpp"
        echo "Created symlink: ${INSTALL_DIR}/waifu2x-converter-cpp"
    fi
    
    echo "waifu2x-converter-cpp build completed"
}

# Create CMake configuration for Qt integration
create_cmake_config() {
    echo "Creating CMake configuration..."
    
    cat > "${INSTALL_DIR}/ExternalToolsConfig.cmake" << 'EOF'
# Configuration file for external tools
# This file helps Qt project find the built tools

set(EXTERNAL_TOOLS_DIR "${CMAKE_CURRENT_LIST_DIR}")

# Anime4KCPP
if(EXISTS "${EXTERNAL_TOOLS_DIR}/Anime4KCPP")
    set(ANIME4KCPP_EXECUTABLE "${EXTERNAL_TOOLS_DIR}/Anime4KCPP")
    message(STATUS "Found Anime4KCPP: ${ANIME4KCPP_EXECUTABLE}")
endif()

# waifu2x-converter-cpp
if(EXISTS "${EXTERNAL_TOOLS_DIR}/waifu2x-converter-cpp")
    set(WAIFU2X_CONVERTER_CPP_EXECUTABLE "${EXTERNAL_TOOLS_DIR}/waifu2x-converter-cpp")
    message(STATUS "Found waifu2x-converter-cpp: ${WAIFU2X_CONVERTER_CPP_EXECUTABLE}")
endif()

# ncnn-vulkan tools
foreach(tool IN ITEMS waifu2x-ncnn-vulkan srmd-ncnn-vulkan realsr-ncnn-vulkan 
                      realcugan-ncnn-vulkan rife-ncnn-vulkan cain-ncnn-vulkan 
                      dain-ncnn-vulkan)
    if(EXISTS "${EXTERNAL_TOOLS_DIR}/${tool}")
        string(TOUPPER ${tool} TOOL_UPPER)
        string(REPLACE "-" "_" TOOL_VAR ${TOOL_UPPER})
        set(${TOOL_VAR}_EXECUTABLE "${EXTERNAL_TOOLS_DIR}/${tool}")
        message(STATUS "Found ${tool}: ${${TOOL_VAR}_EXECUTABLE}")
    endif()
endforeach()
EOF
    
    echo "CMake configuration created"
}

# Main execution
main() {
    check_requirements
    
    echo "Starting build process..."
    
    # Build tools
    build_anime4kcpp
    build_waifu2x_converter
    
    # Create CMake config
    create_cmake_config
    
    echo ""
    echo "Build completed successfully!"
    echo "Binaries location: ${INSTALL_DIR}"
    echo ""
    echo "To use these tools in the Qt project, add the following to CMakeLists.txt:"
    echo "  include(${INSTALL_DIR}/ExternalToolsConfig.cmake)"
    echo ""
    
    # List all built executables
    echo "Built executables:"
    find "${INSTALL_DIR}" -maxdepth 1 -type l -o -type f -executable | grep -v "\.sh$" | grep -v "\.cmake$"
}

# Run main
main