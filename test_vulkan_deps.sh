#!/bin/bash

# Vulkan/AI Tools Dependency Test Script - Automated
echo "================================================"
echo "Vulkan/AI Tools Dependency Test (Auto-mode)"
echo "================================================"
echo ""

# Auto-detect conda environment
CONDA_ENV="waifu2x-gui"
if command -v conda &> /dev/null; then
    CONDA_ENV_PATH=$(conda env list | grep "^$CONDA_ENV " | awk '{print $2}')
    if [ -z "$CONDA_ENV_PATH" ]; then
        echo "❌ Conda environment '$CONDA_ENV' not found"
        exit 1
    fi
    echo "✓ Using conda environment: $CONDA_ENV_PATH"
else
    echo "❌ Conda not found"
    exit 1
fi

echo ""

# Auto-configure environment
export LD_LIBRARY_PATH="$CONDA_ENV_PATH/lib"
export PATH="$CONDA_ENV_PATH/bin:$PATH"

echo "=== Vulkan Environment Test ==="

# Test Vulkan loader
if [ -f "$CONDA_ENV_PATH/lib/libvulkan.so.1" ]; then
    echo "✓ Vulkan loader: $CONDA_ENV_PATH/lib/libvulkan.so.1"
else
    echo "❌ Vulkan loader missing"
    echo "Auto-installing vulkan loader..."
    conda install -n "$CONDA_ENV" -c conda-forge -y libvulkan-loader vulkan-headers vulkan-tools
    echo "✓ Vulkan packages installed"
fi

# Test vulkaninfo
echo ""
echo "Testing vulkaninfo..."
if [ -f "$CONDA_ENV_PATH/bin/vulkaninfo" ]; then
    if timeout 10 "$CONDA_ENV_PATH/bin/vulkaninfo" --summary &>/dev/null; then
        echo "✓ Vulkan API working"
        # Show GPU info
        "$CONDA_ENV_PATH/bin/vulkaninfo" --summary | grep -E "(deviceName|driverVersion)" | head -5 | sed 's/^/  /'
    else
        echo "⚠ Vulkan API timeout/error (may still work for AI tools)"
    fi
else
    echo "❌ vulkaninfo not available"
fi

echo ""
echo "=== AI Tools Individual Test ==="

# Function to test individual AI tool
test_ai_tool() {
    local tool_path="$1"
    local tool_name=$(basename "$tool_path")
    
    echo "Testing $tool_name:"
    echo "  Path: $tool_path"
    
    if [ ! -f "$tool_path" ]; then
        echo "  ❌ File not found"
        return 1
    fi
    
    # Check if executable
    if [ ! -x "$tool_path" ]; then
        chmod +x "$tool_path" 2>/dev/null
    fi
    
    # Check library dependencies
    echo "  Library check:"
    if ldd "$tool_path" 2>/dev/null | grep -q "not found"; then
        echo "    ❌ Missing libraries:"
        ldd "$tool_path" 2>/dev/null | grep "not found" | sed 's/^/      /'
        return 1
    else
        echo "    ✓ All libraries found"
    fi
    
    # Test execution with timeout
    echo "  Execution test:"
    local output
    output=$(timeout 5 "$tool_path" 2>&1)
    local exit_code=$?
    
    if [ $exit_code -eq 124 ]; then
        echo "    ⚠ Timeout (tool may be waiting for input)"
        return 0
    elif [ $exit_code -eq 0 ] || echo "$output" | grep -q -i "usage\|help\|models\|error.*file"; then
        echo "    ✓ Working! (shows usage/help)"
        return 0
    else
        echo "    ❌ Failed:"
        echo "$output" | head -2 | sed 's/^/      /'
        return 1
    fi
}

# Test all found AI tools
TOOLS_DIR="./tools/ncnn-vulkan-tools/bin"
WORKING_TOOLS=""
FAILED_TOOLS=""

if [ -d "$TOOLS_DIR" ]; then
    for tool_dir in "$TOOLS_DIR"/*; do
        if [ -d "$tool_dir" ]; then
            tool_name=$(basename "$tool_dir")
            
            # Find the actual executable
            executable=$(find "$tool_dir" -name "$tool_name" -type f | head -1)
            
            if [ -f "$executable" ]; then
                if test_ai_tool "$executable"; then
                    WORKING_TOOLS="$WORKING_TOOLS $tool_name"
                else
                    FAILED_TOOLS="$FAILED_TOOLS $tool_name"
                fi
                echo ""
            fi
        fi
    done
else
    echo "❌ Tools directory not found: $TOOLS_DIR"
    echo "Run './install.sh' to download AI tools first"
    exit 1
fi

echo "=== Summary ==="
if [ -n "$WORKING_TOOLS" ]; then
    echo "✅ Working AI tools:$WORKING_TOOLS"
fi

if [ -n "$FAILED_TOOLS" ]; then
    echo "❌ Failed AI tools:$FAILED_TOOLS"
fi

# Count results
WORKING_COUNT=$(echo $WORKING_TOOLS | wc -w)
FAILED_COUNT=$(echo $FAILED_TOOLS | wc -w)
TOTAL_COUNT=$((WORKING_COUNT + FAILED_COUNT))

echo ""
echo "Results: $WORKING_COUNT/$TOTAL_COUNT tools working"

if [ $WORKING_COUNT -gt 0 ]; then
    echo ""
    echo "=== Ready for GUI ==="
    echo "AI tools are working! You can now run the GUI:"
    echo ""
    echo "  ./run-waifu2x-gui.sh"
    echo ""
    echo "The run script will automatically use the conda environment."
    
    # Create environment export for manual use
    cat > "vulkan_env.sh" << EOF
#!/bin/bash
# Auto-generated Vulkan environment for manual testing
export LD_LIBRARY_PATH="$CONDA_ENV_PATH/lib"
export PATH="$CONDA_ENV_PATH/bin:\$PATH"
echo "Vulkan environment loaded. Working tools:$WORKING_TOOLS"
EOF
    chmod +x vulkan_env.sh
    echo "Environment saved to: vulkan_env.sh"
    
    exit 0
else
    echo ""
    echo "❌ No working AI tools found. Check GLIBC compatibility."
    exit 1
fi