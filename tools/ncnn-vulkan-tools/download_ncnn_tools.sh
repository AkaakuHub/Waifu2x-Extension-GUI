#!/bin/bash

# Script to download ncnn-vulkan based tools for Linux and macOS
# Tools include: waifu2x, srmd, realsr, realcugan, rife, cain, dain

TOOLS_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
DOWNLOAD_DIR="${TOOLS_DIR}/downloads"
BIN_DIR="${TOOLS_DIR}/bin"

# Create directories
mkdir -p "${DOWNLOAD_DIR}"
mkdir -p "${BIN_DIR}"

# Detect platform
PLATFORM=""
if [[ "$OSTYPE" == "linux-gnu"* ]]; then
    PLATFORM="linux"
elif [[ "$OSTYPE" == "darwin"* ]]; then
    PLATFORM="macos"
else
    echo "Unsupported platform: $OSTYPE"
    exit 1
fi

echo "Detected platform: ${PLATFORM}"

# Function to download and extract tool
download_tool() {
    local tool_name=$1
    local repo_url=$2
    local asset_pattern=$3
    
    echo "Downloading ${tool_name}..."
    
    # Get latest release info
    local api_url="${repo_url/github.com/api.github.com\/repos}/releases/latest"
    local release_info=$(curl -s "$api_url")
    
    # Extract download URL based on platform
    local download_url=""
    if [[ "$PLATFORM" == "linux" ]]; then
        download_url=$(echo "$release_info" | grep -oP "\"browser_download_url\": \"[^\"]*${asset_pattern}.*linux[^\"]*\"" | cut -d'"' -f4 | head -1)
    else
        download_url=$(echo "$release_info" | grep -oP "\"browser_download_url\": \"[^\"]*${asset_pattern}.*macos[^\"]*\"" | cut -d'"' -f4 | head -1)
    fi
    
    if [[ -z "$download_url" ]]; then
        echo "Warning: Could not find ${tool_name} release for ${PLATFORM}"
        return 1
    fi
    
    local filename=$(basename "$download_url")
    local filepath="${DOWNLOAD_DIR}/${filename}"
    
    # Download file
    curl -L -o "$filepath" "$download_url"
    
    # Extract based on file type
    if [[ "$filename" == *.zip ]]; then
        unzip -o "$filepath" -d "${BIN_DIR}/${tool_name}"
    elif [[ "$filename" == *.tar.gz ]] || [[ "$filename" == *.tgz ]]; then
        tar -xzf "$filepath" -C "${BIN_DIR}/${tool_name}"
    else
        echo "Unknown archive format: $filename"
        return 1
    fi
    
    # Make executables executable
    find "${BIN_DIR}/${tool_name}" -type f -name "${tool_name}*" -exec chmod +x {} \;
    
    echo "${tool_name} downloaded successfully"
    return 0
}

# Download tools
echo "Starting downloads..."

# waifu2x-ncnn-vulkan
download_tool "waifu2x-ncnn-vulkan" "https://github.com/nihui/waifu2x-ncnn-vulkan" "waifu2x-ncnn-vulkan"

# srmd-ncnn-vulkan  
download_tool "srmd-ncnn-vulkan" "https://github.com/nihui/srmd-ncnn-vulkan" "srmd-ncnn-vulkan"

# realsr-ncnn-vulkan
download_tool "realsr-ncnn-vulkan" "https://github.com/nihui/realsr-ncnn-vulkan" "realsr-ncnn-vulkan"

# realcugan-ncnn-vulkan
download_tool "realcugan-ncnn-vulkan" "https://github.com/nihui/realcugan-ncnn-vulkan" "realcugan-ncnn-vulkan"

# rife-ncnn-vulkan
download_tool "rife-ncnn-vulkan" "https://github.com/nihui/rife-ncnn-vulkan" "rife-ncnn-vulkan"

# cain-ncnn-vulkan
download_tool "cain-ncnn-vulkan" "https://github.com/nihui/cain-ncnn-vulkan" "cain-ncnn-vulkan"

# dain-ncnn-vulkan
download_tool "dain-ncnn-vulkan" "https://github.com/nihui/dain-ncnn-vulkan" "dain-ncnn-vulkan"

echo "All downloads completed!"
echo "Binaries are located in: ${BIN_DIR}"

# Create symlinks for easier access
echo "Creating symlinks..."
for tool_dir in "${BIN_DIR}"/*; do
    if [[ -d "$tool_dir" ]]; then
        tool_name=$(basename "$tool_dir")
        executable=$(find "$tool_dir" -type f -name "${tool_name}" | head -1)
        if [[ -n "$executable" && -f "$executable" ]]; then
            ln -sf "$executable" "${BIN_DIR}/${tool_name}"
            echo "Created symlink: ${BIN_DIR}/${tool_name}"
        fi
    fi
done

echo "Setup complete!"