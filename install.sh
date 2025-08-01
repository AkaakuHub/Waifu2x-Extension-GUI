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

# Step 2: Download/Build external tools
echo ""
echo "Step 2: Setting up external tools..."
echo "----------------------------------------"
bash tools/ncnn-vulkan-tools/download_ncnn_tools.sh

# Step 3: Build the application
echo ""
echo "Step 3: Building Waifu2x-Extension-GUI..."
echo "----------------------------------------"
cd SRC_v3.41.01-beta/Waifu2x-Extension-QT

# Clean previous build
rm -rf build
mkdir build
cd build

# Configure with qmake
qmake ../Waifu2x-Extension-QT.pro

# Build
make -j$(nproc 2>/dev/null || sysctl -n hw.ncpu 2>/dev/null || echo 1)

echo ""
echo "================================================"
echo "Build completed successfully!"
echo "================================================"
echo ""
echo "The application is located at:"
echo "$(pwd)/Waifu2x-Extension-QT"
echo ""
echo "To run the application:"
echo "./Waifu2x-Extension-QT"
echo ""