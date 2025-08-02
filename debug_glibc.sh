#!/bin/bash

# GLIBC/GLIBCXX Compatibility Debug Script
echo "================================================"
echo "GLIBC/GLIBCXX Compatibility Debug Tool"
echo "================================================"
echo ""

# Get conda environment path
CONDA_ENV="waifu2x-gui"
if command -v conda &> /dev/null; then
    CONDA_ENV_PATH=$(conda env list | grep "^$CONDA_ENV " | awk '{print $2}')
    if [ -z "$CONDA_ENV_PATH" ]; then
        echo "❌ Conda environment '$CONDA_ENV' not found"
        exit 1
    fi
    echo "✓ Conda environment: $CONDA_ENV_PATH"
else
    echo "❌ Conda not found"
    exit 1
fi

echo ""

# Auto-install missing packages if needed
echo "=== Auto-Installing Missing Packages ==="
MISSING_PACKAGES=""

# Check and collect missing packages
for pkg in libvulkan-loader vulkan-headers vulkan-tools; do
    if ! conda list -n "$CONDA_ENV" | grep -q "^$pkg "; then
        MISSING_PACKAGES="$MISSING_PACKAGES $pkg"
    fi
done

if [ -n "$MISSING_PACKAGES" ]; then
    echo "Installing missing packages:$MISSING_PACKAGES"
    conda install -n "$CONDA_ENV" -c conda-forge -y $MISSING_PACKAGES
    echo "✓ Packages installed"
else
    echo "✓ All packages already installed"
fi

echo ""

# Set conda environment
export LD_LIBRARY_PATH="$CONDA_ENV_PATH/lib:$LD_LIBRARY_PATH"
export PATH="$CONDA_ENV_PATH/bin:$PATH"

echo "=== System GLIBC/GLIBCXX Analysis ==="

# Check system GLIBC versions
echo "System GLIBC versions:"
if [ -f /lib/x86_64-linux-gnu/libc.so.6 ]; then
    /lib/x86_64-linux-gnu/libc.so.6 2>&1 | grep "GNU C Library" || echo "  GLIBC version check failed"
    echo "  Available GLIBC versions:"
    strings /lib/x86_64-linux-gnu/libc.so.6 | grep "GLIBC_" | sort -V | tail -10 | sed 's/^/    /'
else
    echo "  System GLIBC not found at standard location"
fi

echo ""

# Check system GLIBCXX versions
echo "System GLIBCXX versions:"
if [ -f /usr/lib/x86_64-linux-gnu/libstdc++.so.6 ]; then
    echo "  Available GLIBCXX versions:"
    strings /usr/lib/x86_64-linux-gnu/libstdc++.so.6 | grep "GLIBCXX_" | sort -V | tail -10 | sed 's/^/    /'
else
    echo "  System GLIBCXX not found at standard location"
fi

echo ""

echo "=== Conda Environment GLIBC/GLIBCXX Analysis ==="

# Check conda GLIBC
if [ -f "$CONDA_ENV_PATH/lib/libc.so.6" ]; then
    echo "Conda GLIBC found:"
    "$CONDA_ENV_PATH/lib/libc.so.6" 2>&1 | grep "GNU C Library" || echo "  Version check failed"
    echo "  Available GLIBC versions in conda:"
    strings "$CONDA_ENV_PATH/lib/libc.so.6" | grep "GLIBC_" | sort -V | tail -10 | sed 's/^/    /'
else
    echo "❌ Conda GLIBC not found - need to install glibc package"
    echo "Installing glibc in conda environment..."
    conda install -n "$CONDA_ENV" -c conda-forge -y sysroot_linux-64
    if [ -f "$CONDA_ENV_PATH/lib/libc.so.6" ]; then
        echo "✓ GLIBC installed successfully"
        strings "$CONDA_ENV_PATH/lib/libc.so.6" | grep "GLIBC_" | sort -V | tail -5 | sed 's/^/    /'
    else
        echo "❌ GLIBC installation failed"
    fi
fi

echo ""

# Check conda GLIBCXX
if [ -f "$CONDA_ENV_PATH/lib/libstdc++.so.6" ]; then
    echo "Conda GLIBCXX found:"
    echo "  Available GLIBCXX versions in conda:"
    strings "$CONDA_ENV_PATH/lib/libstdc++.so.6" | grep "GLIBCXX_" | sort -V | tail -10 | sed 's/^/    /'
else
    echo "❌ Conda GLIBCXX not found - this is unusual"
fi

echo ""

echo "=== AI Tools Compatibility Test ==="

# Test downloaded AI tools
TOOLS_DIR="./tools/ncnn-vulkan-tools/bin"
if [ -d "$TOOLS_DIR" ]; then
    for tool in waifu2x-ncnn-vulkan srmd-ncnn-vulkan realsr-ncnn-vulkan; do
        tool_path=$(find "$TOOLS_DIR" -name "$tool" -type f | head -1)
        if [ -f "$tool_path" ]; then
            echo "Testing $tool:"
            echo "  Path: $tool_path"
            
            # Check required libraries
            echo "  Required libraries:"
            ldd "$tool_path" 2>/dev/null | grep -E "(libc|libstdc|libgomp|libvulkan)" | sed 's/^/    /' || echo "    ldd failed"
            
            # Test with conda environment
            echo "  Testing with conda environment:"
            LD_LIBRARY_PATH="$CONDA_ENV_PATH/lib" "$tool_path" 2>&1 | head -3 | sed 's/^/    /' || echo "    Execution failed"
            
        else
            echo "❌ $tool not found"
        fi
        echo ""
    done
else
    echo "❌ Tools directory not found: $TOOLS_DIR"
fi

echo "=== Vulkan Environment Test ==="

# Test Vulkan setup
echo "Vulkan loader test:"
if [ -f "$CONDA_ENV_PATH/lib/libvulkan.so.1" ]; then
    echo "✓ Vulkan loader found in conda: $CONDA_ENV_PATH/lib/libvulkan.so.1"
else
    echo "❌ Vulkan loader missing in conda"
fi

# Test vulkan tools
if [ -f "$CONDA_ENV_PATH/bin/vulkaninfo" ]; then
    echo "Testing vulkaninfo:"
    LD_LIBRARY_PATH="$CONDA_ENV_PATH/lib" "$CONDA_ENV_PATH/bin/vulkaninfo" --summary 2>/dev/null | head -10 | sed 's/^/  /' || echo "  vulkaninfo failed"
else
    echo "❌ vulkaninfo not found in conda"
fi

echo ""

echo "=== GPU Information ==="
if command -v nvidia-smi &> /dev/null; then
    echo "NVIDIA GPU detected:"
    nvidia-smi --query-gpu=name,driver_version,cuda_version --format=csv,noheader | sed 's/^/  /'
else
    echo "❌ nvidia-smi not found"
fi

echo ""

echo "=== Recommendations ==="
echo "If AI tools still fail with GLIBC errors:"
echo "1. Use conda's GLIBC: export LD_LIBRARY_PATH=\"$CONDA_ENV_PATH/lib:\$LD_LIBRARY_PATH\""
echo "2. Run tools with: LD_LIBRARY_PATH=\"$CONDA_ENV_PATH/lib\" ./tool_name"
echo "3. Or use conda's updated runtime: conda install -c conda-forge glibc libstdcxx-ng"

echo ""
echo "=== Debug Complete ==="