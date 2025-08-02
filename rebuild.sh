#!/bin/bash

echo "Rebuilding with OpenGL fix..."

# Activate conda environment
source "$(conda info --base)/etc/profile.d/conda.sh"
conda activate waifu2x-gui

# Go to build directory
cd SRC_v3.41.01-beta/Waifu2x-Extension-QT

# Clean and rebuild
if [ -d "build" ]; then
    rm -rf build
fi

mkdir -p build
cd build

# Set library paths
export LD_LIBRARY_PATH="$CONDA_PREFIX/lib:$LD_LIBRARY_PATH"
export LIBRARY_PATH="$CONDA_PREFIX/lib:$LIBRARY_PATH"

# Try qmake with system GL libraries
echo "Trying qmake with system OpenGL..."
qmake ../Waifu2x-Extension-QT.pro CONFIG+=link_pkgconfig PKGCONFIG+=gl

if [ $? -eq 0 ]; then
    echo "Building..."
    make -j$(nproc)
else
    echo "qmake failed, trying without OpenGL..."
    qmake ../Waifu2x-Extension-QT.pro
    make -j$(nproc)
fi

echo "Build attempt completed."