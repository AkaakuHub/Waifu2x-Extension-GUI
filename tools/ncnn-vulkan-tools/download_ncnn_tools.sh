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

# Check if tools are already downloaded
if [ -d "${BIN_DIR}" ] && [ "$(find "${BIN_DIR}" -name "waifu2x-ncnn-vulkan" -o -name "srmd-ncnn-vulkan" -o -name "realsr-ncnn-vulkan" | wc -l)" -gt 0 ]; then
    echo "Some tools already exist. Checking individual tools..."
else
    echo "Tools directory empty or missing, proceeding with downloads..."
fi

# Function to download and extract tool
download_tool() {
    local tool_name=$1
    local repo_url=$2
    local asset_pattern=$3
    
    # Check if tool binaries already exist
    local tool_bin="${BIN_DIR}/${tool_name}"
    if [ -d "$tool_bin" ] && [ "$(ls -A "$tool_bin" 2>/dev/null)" ]; then
        echo "  ${tool_name} binaries already exist in ${tool_bin}, skipping download"
        return 0
    fi
    
    echo "Downloading ${tool_name}..."
    
    # Get latest release info
    local api_url=$(echo "$repo_url" | sed 's|github.com|api.github.com/repos|')/releases/latest
    echo "  Fetching from: $api_url"
    local release_info
    release_info=$(curl -s -H "User-Agent: Waifu2x-Extension-GUI" "$api_url")
    
    # Check if we got a response
    if [[ -z "$release_info" ]] || [[ "$release_info" == "{}" ]]; then
        echo "  Error: Failed to fetch release info from GitHub API"
        return 1
    fi
    
    # Debug: Show first 200 chars of API response
    echo "  API Response (first 200 chars): $(echo "$release_info" | head -c 200)"
    
    # Debug: Check if API response contains error
    if echo "$release_info" | grep -q "rate limit\|API rate limit"; then
        echo "  Error: GitHub API rate limit exceeded"
        echo "  Waiting 60 seconds before retry..."
        sleep 60
        release_info=$(curl -s -H "User-Agent: Waifu2x-Extension-GUI" "$api_url")
    fi
    
    # Extract download URL based on platform
    local download_url=""
    
    # Use conda jq if available, otherwise system jq
    local JQ_CMD="jq"
    if [ -n "$CONDA_ENV_PATH" ] && [ -f "$CONDA_ENV_PATH/bin/jq" ]; then
        JQ_CMD="$CONDA_ENV_PATH/bin/jq"
        echo "  Using conda jq: $JQ_CMD"
    fi
    
    if command -v "$JQ_CMD" &> /dev/null; then
        # Test jq first with simple command
        if echo "$release_info" | "$JQ_CMD" '.tag_name' &> /dev/null; then
            # Use jq for more reliable parsing
            if [[ "$PLATFORM" == "linux" ]]; then
                download_url=$(echo "$release_info" | "$JQ_CMD" -r '.assets[] | select(.name | test("ubuntu|linux")) | .browser_download_url' | head -1)
            else
                download_url=$(echo "$release_info" | "$JQ_CMD" -r '.assets[] | select(.name | test("macos")) | .browser_download_url' | head -1)
            fi
        else
            echo "  jq test failed, falling back to grep/sed"
            JQ_CMD=""  # Force fallback
        fi
    else
        # Fallback to grep/sed
        if [[ "$PLATFORM" == "linux" ]]; then
            download_url=$(echo "$release_info" | grep "browser_download_url" | grep -E "(ubuntu|linux)" | sed 's/.*"browser_download_url": "\([^"]*\)".*/\1/' | head -1)
        else
            download_url=$(echo "$release_info" | grep "browser_download_url" | grep "macos" | sed 's/.*"browser_download_url": "\([^"]*\)".*/\1/' | head -1)
        fi
    fi
    
    if [[ -z "$download_url" ]]; then
        echo "  Warning: Could not find ${tool_name} release for ${PLATFORM}"
        echo "  Debug: API URL was: $api_url"
        return 1
    fi
    
    echo "  Found: $download_url"
    
    local filename=$(basename "$download_url")
    local filepath="${DOWNLOAD_DIR}/${filename}"
    
    # Download file if not already present
    if [[ -f "$filepath" ]]; then
        echo "  Already downloaded: $filename"
    else
        echo "  Downloading: $filename"
        curl -L -H "User-Agent: Waifu2x-Extension-GUI" -o "$filepath" "$download_url"
    fi
    
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