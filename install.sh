#!/bin/bash

# Waifu2x-Extension-GUI Cross-Platform Installation Script
# This script will install dependencies and build the application

set -e

echo "================================================"
echo "Waifu2x-Extension-GUI Cross-Platform Installer"
echo "================================================"
echo ""

# Check if running with proper permissions
if [[ "$OSTYPE" == "linux-gnu"* ]] && [[ $EUID -ne 0 ]]; then
   echo "Note: This script may require sudo permissions to install system packages."
   echo ""
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

# Check if already built
if [ -f "build/Waifu2x-Extension-GUI.app/Contents/MacOS/Waifu2x-Extension-GUI" ]; then
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

# Step 5: Post-build setup
echo ""
echo "Step 5: Setting up application bundle..."
echo "----------------------------------------"

# Copy language files to app bundle
if [ -d "Waifu2x-Extension-GUI.app/Contents/MacOS" ]; then
    echo "Copying language files..."
    cp ../language_*.qm Waifu2x-Extension-GUI.app/Contents/MacOS/ || echo "Warning: Failed to copy language files"
fi

# Create tool directories in app bundle
if [ -d "Waifu2x-Extension-GUI.app/Contents/MacOS" ]; then
    echo "Creating tool directories..."
    mkdir -p Waifu2x-Extension-GUI.app/Contents/MacOS/waifu2x-ncnn-vulkan
    mkdir -p Waifu2x-Extension-GUI.app/Contents/MacOS/srmd-ncnn-vulkan
    mkdir -p Waifu2x-Extension-GUI.app/Contents/MacOS/realsr-ncnn-vulkan
    mkdir -p Waifu2x-Extension-GUI.app/Contents/MacOS/ffmpeg
fi

echo ""
echo "================================================"
echo "Installation completed successfully!"
echo "================================================"
echo ""
echo "Application location:"
echo "$(pwd)/Waifu2x-Extension-GUI.app"
echo ""
echo "To run the application, use the launcher script:"
echo "  ./run-waifu2x-gui.sh"
echo ""
echo "Or add this alias to your .zshrc/.bashrc:"
echo "  alias waifu2x-gui='$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )/run-waifu2x-gui.sh'"
echo ""