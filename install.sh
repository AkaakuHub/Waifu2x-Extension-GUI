#!/bin/bash

# Waifu2x-Extension-GUI Cross-Platform Installation Script
# This script will install dependencies and build the application

set -e

echo "================================================"
echo "Waifu2x-Extension-GUI Cross-Platform Installer"
echo "================================================"
echo ""

# Linux: Choose sudo or no-sudo installation
if [[ "$OSTYPE" == "linux-gnu"* ]]; then
    echo "Linux installation options:"
    echo "1. With sudo (recommended if available)"
    echo "2. Without sudo (uses conda)"
    echo ""
    
    # Auto-detect and suggest
    if sudo -n true 2>/dev/null; then
        echo "✓ sudo access detected"
        echo "Recommendation: Use option 1 (with sudo)"
        DEFAULT="1"
    elif command -v conda &> /dev/null; then
        echo "⚠ No sudo access, but conda found"
        echo "Recommendation: Use option 2 (conda)"
        DEFAULT="2"
    else
        echo "⚠ No sudo access, no conda found"
        echo "You need to install conda first: ./tools/install_conda.sh"
        echo "Recommendation: Install conda, then use option 2"
        DEFAULT="2"
    fi
    
    echo ""
    read -p "Choose installation method [1/2] (default: $DEFAULT): " CHOICE
    CHOICE=${CHOICE:-$DEFAULT}
    
    case $CHOICE in
        1)
            echo "Using sudo-based installation..."
            exec ./install_linux_sudo.sh
            ;;
        2)
            echo "Using conda-based installation..."
            exec ./install_linux_no_sudo.sh
            ;;
        *)
            echo "Invalid choice. Exiting."
            exit 1
            ;;
    esac
fi

# Step 1: Install system dependencies
echo "Step 1: Installing system dependencies..."
echo "----------------------------------------"
bash tools/install_dependencies.sh

# Step 2: Setup Qt5 paths for macOS
if [[ "$OSTYPE" == "darwin"* ]]; then
    echo ""
    echo "Step 2: Setting up Qt5 paths for macOS..."
    echo "----------------------------------------"
    # Check if Qt5 is installed via Homebrew
    if [ -d "/opt/homebrew/opt/qt@5" ]; then
        export PATH="/opt/homebrew/opt/qt@5/bin:$PATH"
        export LDFLAGS="-L/opt/homebrew/opt/qt@5/lib"
        export CPPFLAGS="-I/opt/homebrew/opt/qt@5/include"
        export PKG_CONFIG_PATH="/opt/homebrew/opt/qt@5/lib/pkgconfig"
        echo "Qt5 paths configured successfully!"
    elif [ -d "/usr/local/opt/qt@5" ]; then
        # Intel Mac path
        export PATH="/usr/local/opt/qt@5/bin:$PATH"
        export LDFLAGS="-L/usr/local/opt/qt@5/lib"
        export CPPFLAGS="-I/usr/local/opt/qt@5/include"
        export PKG_CONFIG_PATH="/usr/local/opt/qt@5/lib/pkgconfig"
        echo "Qt5 paths configured successfully!"
    else
        echo "WARNING: Qt5 not found. Please install it via Homebrew: brew install qt@5"
    fi
fi

# Step 3: Download/Build external tools
echo ""
echo "Step 3: Setting up external tools..."
echo "----------------------------------------"
bash tools/ncnn-vulkan-tools/download_ncnn_tools.sh

# Step 4: Build the application
echo ""
echo "Step 4: Building Waifu2x-Extension-GUI..."
echo "----------------------------------------"
cd SRC_v3.41.01-beta/Waifu2x-Extension-QT

# Check if already built based on OS
if [[ "$OSTYPE" == "darwin"* ]]; then
    BUILD_CHECK="build/Waifu2x-Extension-GUI.app/Contents/MacOS/Waifu2x-Extension-GUI"
elif [[ "$OSTYPE" == "linux-gnu"* ]]; then
    BUILD_CHECK="build/Waifu2x-Extension-GUI"
fi

if [ -f "$BUILD_CHECK" ]; then
    echo "Application already built. Skipping build step."
    echo "To rebuild, delete the build directory first: rm -rf SRC_v3.41.01-beta/Waifu2x-Extension-QT/build"
    cd build
else
    # Clean previous build
    rm -rf build
    mkdir build
    cd build

    # Configure with qmake
    qmake ../Waifu2x-Extension-QT.pro

    # Build
    make -j$(nproc 2>/dev/null || sysctl -n hw.ncpu 2>/dev/null || echo 1)
fi

# Step 5: Copy latest binary with fixes (macOS only)
if [[ "$OSTYPE" == "darwin"* ]]; then
    echo ""
    echo "Step 5: Copying latest binary with compatibility test fixes..."
    echo "----------------------------------------"

    # Copy the latest built binary to ensure we have the compatibility test fixes
    if [ -f "../Waifu2x-Extension-GUI.app/Contents/MacOS/Waifu2x-Extension-GUI" ]; then
        echo "Copying latest binary with fixes..."
        cp ../Waifu2x-Extension-GUI.app/Contents/MacOS/Waifu2x-Extension-GUI Waifu2x-Extension-GUI.app/Contents/MacOS/
        echo "Latest binary copied successfully!"
    elif [ -f "../../Waifu2x-Extension-GUI.app/Contents/MacOS/Waifu2x-Extension-GUI" ]; then
        echo "Copying latest binary with fixes (from parent directory)..."
        cp ../../Waifu2x-Extension-GUI.app/Contents/MacOS/Waifu2x-Extension-GUI Waifu2x-Extension-GUI.app/Contents/MacOS/
        echo "Latest binary copied successfully!"
    else
        echo "Warning: Latest binary not found at ../Waifu2x-Extension-GUI.app or ../../Waifu2x-Extension-GUI.app"
        echo "Current directory: $(pwd)"
        echo "Looking for binary in neighboring directories..."
        find .. -name "Waifu2x-Extension-GUI" -type f 2>/dev/null | head -3
    fi
fi

# Step 6: Post-build setup
echo ""
echo "Step 6: Setting up application..."
echo "----------------------------------------"

# Copy language files and create directories based on OS
if [[ "$OSTYPE" == "darwin"* ]]; then
    # macOS app bundle setup
    if [ -d "Waifu2x-Extension-GUI.app/Contents/MacOS" ]; then
        echo "Copying language files to app bundle..."
        cp ../language_*.qm Waifu2x-Extension-GUI.app/Contents/MacOS/ || echo "Warning: Failed to copy language files"
        
        echo "Creating tool directories in app bundle..."
        mkdir -p Waifu2x-Extension-GUI.app/Contents/MacOS/waifu2x-ncnn-vulkan
        mkdir -p Waifu2x-Extension-GUI.app/Contents/MacOS/srmd-ncnn-vulkan
        mkdir -p Waifu2x-Extension-GUI.app/Contents/MacOS/realsr-ncnn-vulkan
        mkdir -p Waifu2x-Extension-GUI.app/Contents/MacOS/ffmpeg
    fi
elif [[ "$OSTYPE" == "linux-gnu"* ]]; then
    # Linux binary setup
    if [ -f "Waifu2x-Extension-GUI" ]; then
        echo "Copying language files..."
        cp ../language_*.qm . || echo "Warning: Failed to copy language files"
        
        echo "Creating tool directories..."
        mkdir -p waifu2x-ncnn-vulkan
        mkdir -p srmd-ncnn-vulkan
        mkdir -p realsr-ncnn-vulkan
        mkdir -p ffmpeg
        mkdir -p Compatibility_Test
    fi
fi

echo ""
echo "================================================"
echo "Installation completed successfully!"
echo "================================================"
echo ""
echo "Application location:"
if [[ "$OSTYPE" == "darwin"* ]]; then
    echo "$(pwd)/Waifu2x-Extension-GUI.app"
elif [[ "$OSTYPE" == "linux-gnu"* ]]; then
    echo "$(pwd)/Waifu2x-Extension-GUI"
fi
echo ""
echo "To run the application, use the launcher script:"
echo "  ./run-waifu2x-gui.sh"
echo ""
echo "Or add this alias to your .bashrc/.zshrc:"
echo "  alias waifu2x-gui='$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )/run-waifu2x-gui.sh'"
echo ""