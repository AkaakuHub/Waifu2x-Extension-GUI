#!/bin/bash

# Download GLIBC 2.31 compatible AI tools for Ubuntu 20.04
echo "Downloading GLIBC 2.31 compatible AI tools..."

TOOLS_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
BIN_DIR="${TOOLS_DIR}/bin"
DOWNLOAD_DIR="${TOOLS_DIR}/downloads_compatible"

mkdir -p "$DOWNLOAD_DIR" "$BIN_DIR"

# Function to download specific compatible version
download_compatible() {
    local tool_name=$1
    local download_url=$2
    local version_tag=$3
    
    echo "Downloading $tool_name ($version_tag)..."
    
    local filename=$(basename "$download_url")
    local filepath="$DOWNLOAD_DIR/${tool_name}_${version_tag}_${filename}"
    
    # Download if not exists
    if [ ! -f "$filepath" ]; then
        curl -L -H "User-Agent: Waifu2x-GUI" -o "$filepath" "$download_url"
    fi
    
    # Extract
    local extract_dir="$BIN_DIR/${tool_name}_compatible"
    rm -rf "$extract_dir"
    mkdir -p "$extract_dir"
    
    if [[ "$filename" == *.zip ]]; then
        unzip -q "$filepath" -d "$extract_dir"
    elif [[ "$filename" == *.tar.gz ]] || [[ "$filename" == *.tgz ]]; then
        tar -xzf "$filepath" -C "$extract_dir"
    fi
    
    # Find and symlink executable
    local executable=$(find "$extract_dir" -name "$tool_name" -type f | head -1)
    if [ -f "$executable" ]; then
        chmod +x "$executable"
        # Replace the incompatible version
        rm -rf "$BIN_DIR/$tool_name"
        ln -sf "$executable" "$BIN_DIR/$tool_name"
        echo "✓ $tool_name compatible version installed"
        return 0
    else
        echo "❌ $tool_name executable not found"
        return 1
    fi
}

# Download specific GLIBC 2.31 compatible versions based on web search results

# waifu2x-ncnn-vulkan: Use 20220728 release (LATEST COMPATIBLE - no 2023/2024 releases exist)
download_compatible "waifu2x-ncnn-vulkan" \
    "https://github.com/nihui/waifu2x-ncnn-vulkan/releases/download/20220728/waifu2x-ncnn-vulkan-20220728-ubuntu.zip" \
    "20220728"

# srmd-ncnn-vulkan: Use 20220728 release 
download_compatible "srmd-ncnn-vulkan" \
    "https://github.com/nihui/srmd-ncnn-vulkan/releases/download/20220728/srmd-ncnn-vulkan-20220728-ubuntu.zip" \
    "20220728"

# realsr-ncnn-vulkan: Use 20220728 release
download_compatible "realsr-ncnn-vulkan" \
    "https://github.com/nihui/realsr-ncnn-vulkan/releases/download/20220728/realsr-ncnn-vulkan-20220728-ubuntu.zip" \
    "20220728"

# realcugan-ncnn-vulkan: Use 20220728 release
download_compatible "realcugan-ncnn-vulkan" \
    "https://github.com/nihui/realcugan-ncnn-vulkan/releases/download/20220728/realcugan-ncnn-vulkan-20220728-ubuntu.zip" \
    "20220728"

# rife-ncnn-vulkan: Use 20221029 release (newer but should be compatible)
download_compatible "rife-ncnn-vulkan" \
    "https://github.com/nihui/rife-ncnn-vulkan/releases/download/20221029/rife-ncnn-vulkan-20221029-ubuntu.zip" \
    "20221029"

echo ""
echo "Testing compatibility..."

# Test all tools
WORKING_COUNT=0
TOTAL_COUNT=0

for tool in waifu2x-ncnn-vulkan srmd-ncnn-vulkan realsr-ncnn-vulkan realcugan-ncnn-vulkan rife-ncnn-vulkan; do
    TOTAL_COUNT=$((TOTAL_COUNT + 1))
    tool_path="$BIN_DIR/$tool"
    
    if [ -f "$tool_path" ]; then
        echo -n "Testing $tool: "
        if timeout 3 "$tool_path" 2>&1 | grep -q -i "usage\|help\|models"; then
            echo "✓ Working"
            WORKING_COUNT=$((WORKING_COUNT + 1))
        else
            echo "❌ Failed"
        fi
    else
        echo "$tool: ❌ Not found"
    fi
done

echo ""
echo "Results: $WORKING_COUNT/$TOTAL_COUNT tools working"

if [ $WORKING_COUNT -eq $TOTAL_COUNT ]; then
    echo "🎉 All AI tools are now compatible with GLIBC 2.31!"
elif [ $WORKING_COUNT -gt 0 ]; then
    echo "✓ Most AI tools are working. Ready to use!"
else
    echo "❌ No tools working. System may need upgrade."
fi