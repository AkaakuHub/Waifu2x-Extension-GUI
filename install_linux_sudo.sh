#!/bin/bash

# Waifu2x-Extension-GUI Linux installer (requires sudo)
# Uses system package managers for dependencies

set -e

SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

echo "======================================================================"
echo "Waifu2x-Extension-GUI Linux Installer (Requires Sudo)"
echo "======================================================================"

# Check sudo access
if ! sudo -n true 2>/dev/null; then
    echo "ERROR: This script requires sudo access!"
    echo "If you don't have sudo, use: ./install_linux_no_sudo.sh"
    exit 1
fi

echo "✓ sudo access confirmed"

# Install system dependencies
echo "Installing system dependencies..."
"$SCRIPT_DIR/tools/install_dependencies.sh"

# Download ncnn-vulkan tools
echo "Downloading ncnn-vulkan tools..."
cd "$SCRIPT_DIR"
./tools/ncnn-vulkan-tools/download_ncnn_tools.sh

# Build the application
echo "Building Waifu2x-Extension-GUI..."
cd "$SCRIPT_DIR/SRC_v3.41.01-beta/Waifu2x-Extension-QT"

# Clean previous build
if [ -d "build" ]; then
    rm -rf build
fi

mkdir -p build
cd build

# Configure with cmake - handle Qt5 package name differences
if dpkg -l | grep -q qtbase5-dev 2>/dev/null; then
    # Ubuntu 22.04+ style
    cmake .. -DCMAKE_BUILD_TYPE=Release
elif dpkg -l | grep -q qt5-default 2>/dev/null; then
    # Older Ubuntu style
    cmake .. -DCMAKE_BUILD_TYPE=Release
elif rpm -qa | grep -q qt5-qtbase-devel 2>/dev/null; then
    # Fedora/RHEL style
    cmake .. -DCMAKE_BUILD_TYPE=Release -DCMAKE_PREFIX_PATH=/usr/lib64/cmake/Qt5
elif pacman -Qs qt5-base >/dev/null 2>&1; then
    # Arch style
    cmake .. -DCMAKE_BUILD_TYPE=Release
else
    # Generic fallback
    cmake .. -DCMAKE_BUILD_TYPE=Release
fi

# Build
make -j$(nproc)

echo "======================================================================"
echo "Installation completed!"
echo ""
echo "To run the application:"
echo "  ./run-waifu2x-gui.sh"
echo ""
echo "All system dependencies have been installed."
echo "======================================================================"