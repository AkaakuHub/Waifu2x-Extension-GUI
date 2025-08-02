#!/bin/bash

# GLIBC Compatibility Fix Script
echo "================================================"
echo "GLIBC Compatibility Fix for AI Tools"
echo "================================================"
echo ""

CONDA_ENV="waifu2x-gui"
CONDA_ENV_PATH=$(conda env list | grep "^$CONDA_ENV " | awk '{print $2}')

if [ -z "$CONDA_ENV_PATH" ]; then
    echo "❌ Conda environment not found"
    exit 1
fi

echo "=== Installing Complete GLIBC Environment ==="

# Install comprehensive glibc environment
echo "Installing complete glibc runtime environment..."
conda install -n "$CONDA_ENV" -c conda-forge -y \
    sysroot_linux-64 \
    gxx_linux-64 \
    gcc_linux-64 \
    binutils_linux-64 \
    ld_impl_linux-64 \
    libgcc-ng \
    libstdcxx-ng \
    libgomp

echo "✓ GLIBC environment installed"

echo ""
echo "=== Downloading Compatible AI Tools ==="

# Function to download compatible AI tools for older GLIBC
download_compatible_tool() {
    local tool_name=$1
    local repo_url=$2
    
    echo "Downloading compatible $tool_name..."
    
    TOOLS_DIR="./tools/ncnn-vulkan-tools"
    DOWNLOAD_DIR="$TOOLS_DIR/downloads"
    BIN_DIR="$TOOLS_DIR/bin"
    
    mkdir -p "$DOWNLOAD_DIR" "$BIN_DIR"
    
    # Get all releases (not just latest) to find older compatible versions
    local api_url=$(echo "$repo_url" | sed 's|github.com|api.github.com/repos|')/releases
    
    echo "  Searching for GLIBC 2.31 compatible releases..."
    
    # Try multiple release pages to find older versions
    for page in 1 2 3; do
        local releases=$(curl -s -H "User-Agent: Waifu2x-GUI" "${api_url}?page=${page}&per_page=10")
        
        if [ -n "$releases" ] && [ "$releases" != "[]" ]; then
            # Look for ubuntu-20.04 or older releases
            local download_url=""
            
            if command -v jq &> /dev/null; then
                download_url=$(echo "$releases" | jq -r '.[] | select(.tag_name | test("20220728|20220419|20210521|20210210")) | .assets[] | select(.name | test("ubuntu-20.04|ubuntu-18.04|linux")) | .browser_download_url' | head -1)
            else
                # Fallback grep method for older releases
                download_url=$(echo "$releases" | grep -o '"browser_download_url": "[^"]*ubuntu-[12][0-9].04[^"]*"' | head -1 | sed 's/.*": "//' | sed 's/".*//')
                if [ -z "$download_url" ]; then
                    download_url=$(echo "$releases" | grep -o '"browser_download_url": "[^"]*linux[^"]*"' | head -1 | sed 's/.*": "//' | sed 's/".*//')
                fi
            fi
            
            if [ -n "$download_url" ]; then
                echo "  Found compatible release: $download_url"
                
                local filename=$(basename "$download_url")
                local filepath="$DOWNLOAD_DIR/${tool_name}_compatible_${filename}"
                
                # Download if not exists
                if [ ! -f "$filepath" ]; then
                    echo "  Downloading: $filename"
                    curl -L -H "User-Agent: Waifu2x-GUI" -o "$filepath" "$download_url"
                fi
                
                # Extract to separate directory
                local extract_dir="$BIN_DIR/${tool_name}_compatible"
                rm -rf "$extract_dir"
                mkdir -p "$extract_dir"
                
                if [[ "$filename" == *.zip ]]; then
                    unzip -q "$filepath" -d "$extract_dir"
                elif [[ "$filename" == *.tar.gz ]] || [[ "$filename" == *.tgz ]]; then
                    tar -xzf "$filepath" -C "$extract_dir"
                fi
                
                # Find and test the executable
                local executable=$(find "$extract_dir" -name "$tool_name" -type f | head -1)
                if [ -f "$executable" ]; then
                    chmod +x "$executable"
                    echo "  Testing compatibility..."
                    
                    # Test if it works with current GLIBC
                    if LD_LIBRARY_PATH="$CONDA_ENV_PATH/lib" "$executable" 2>&1 | grep -q "version.*not found"; then
                        echo "  ❌ Still incompatible, trying next release..."
                        continue
                    else
                        echo "  ✓ Compatible version found!"
                        # Create symlink in main bin directory
                        ln -sf "$executable" "$BIN_DIR/$tool_name"
                        return 0
                    fi
                fi
            fi
        fi
    done
    
    echo "  ❌ No compatible version found for $tool_name"
    return 1
}

# Download compatible versions
download_compatible_tool "waifu2x-ncnn-vulkan" "https://github.com/nihui/waifu2x-ncnn-vulkan"
download_compatible_tool "srmd-ncnn-vulkan" "https://github.com/nihui/srmd-ncnn-vulkan" 
download_compatible_tool "realsr-ncnn-vulkan" "https://github.com/nihui/realsr-ncnn-vulkan"

echo ""
echo "=== Testing Final Compatibility ==="

export LD_LIBRARY_PATH="$CONDA_ENV_PATH/lib:$LD_LIBRARY_PATH"
export PATH="$CONDA_ENV_PATH/bin:$PATH"

TOOLS_DIR="./tools/ncnn-vulkan-tools/bin"
for tool in waifu2x-ncnn-vulkan srmd-ncnn-vulkan realsr-ncnn-vulkan; do
    if [ -f "$TOOLS_DIR/$tool" ]; then
        echo "Testing $tool:"
        
        # Check GLIBC requirements
        echo "  Required GLIBC versions:"
        objdump -T "$TOOLS_DIR/$tool" 2>/dev/null | grep "GLIBC_" | awk '{print $5}' | sort -u | sed 's/^/    /' || echo "    Analysis failed"
        
        # Test execution
        echo "  Execution test:"
        if timeout 5 "$TOOLS_DIR/$tool" 2>&1 | head -2 | grep -q "usage\|Usage\|ncnn\|models"; then
            echo "    ✓ Working!"
        else
            echo "    ❌ Failed"
        fi
    else
        echo "❌ $tool not found"
    fi
    echo ""
done

echo "=== Fix Complete ==="
echo ""
echo "If tools still fail, run with conda environment:"
echo "  export LD_LIBRARY_PATH=\"$CONDA_ENV_PATH/lib:\$LD_LIBRARY_PATH\""
echo "  ./run-waifu2x-gui.sh"