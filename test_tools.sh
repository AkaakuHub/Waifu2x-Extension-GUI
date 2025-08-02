#!/bin/bash

# Test AI tools with proper conda environment
echo "================================================"
echo "AI Tools Functionality Test"
echo "================================================"
echo ""

CONDA_ENV="waifu2x-gui"
CONDA_ENV_PATH=$(conda env list | grep "^$CONDA_ENV " | awk '{print $2}')

if [ -z "$CONDA_ENV_PATH" ]; then
    echo "❌ Conda environment not found"
    exit 1
fi

# Set conda environment
export LD_LIBRARY_PATH="$CONDA_ENV_PATH/lib:$LD_LIBRARY_PATH"
export PATH="$CONDA_ENV_PATH/bin:$PATH"

echo "Using conda environment: $CONDA_ENV_PATH"
echo ""

# Test all downloaded tools
TOOLS_DIR="./tools/ncnn-vulkan-tools/bin"

echo "=== Available AI Tools ==="
for tool_dir in "$TOOLS_DIR"/*; do
    if [ -d "$tool_dir" ]; then
        tool_name=$(basename "$tool_dir")
        echo "Found: $tool_name"
        
        # Find executable
        executable=$(find "$tool_dir" -name "$tool_name" -type f | head -1)
        if [ -f "$executable" ]; then
            echo "  Executable: $executable"
            
            # Test execution with conda environment
            echo "  Testing..."
            if timeout 5 LD_LIBRARY_PATH="$CONDA_ENV_PATH/lib" "$executable" 2>&1 | grep -q "Usage\|usage\|models\|help"; then
                echo "  ✅ WORKING!"
            else
                echo "  ❌ Failed or no response"
                echo "  Error output:"
                timeout 3 LD_LIBRARY_PATH="$CONDA_ENV_PATH/lib" "$executable" 2>&1 | head -2 | sed 's/^/    /'
            fi
        else
            echo "  ❌ Executable not found"
        fi
        echo ""
    fi
done

echo "=== Testing with GUI Application ==="
echo "Setting up environment for GUI..."

# Export environment for GUI
cat > gui_env.sh << 'EOF'
#!/bin/bash
export LD_LIBRARY_PATH="/export/data/m2311202/conda_envs/waifu2x-gui/lib:$LD_LIBRARY_PATH"
export PATH="/export/data/m2311202/conda_envs/waifu2x-gui/bin:$PATH"
export CONDA_ENV_PATH="/export/data/m2311202/conda_envs/waifu2x-gui"
EOF

chmod +x gui_env.sh

echo "✅ Environment setup complete!"
echo ""
echo "To run the GUI with proper environment:"
echo "  source gui_env.sh"
echo "  ./run-waifu2x-gui.sh"
echo ""
echo "Or in one command:"
echo "  LD_LIBRARY_PATH=\"$CONDA_ENV_PATH/lib:\$LD_LIBRARY_PATH\" ./run-waifu2x-gui.sh"