#!/bin/bash

echo "Fixing OpenGL libraries for conda environment..."

# Activate conda environment
source "$(conda info --base)/etc/profile.d/conda.sh"
conda activate waifu2x-gui

echo "Installing OpenGL packages..."
conda install -c conda-forge -y \
    mesalib \
    libgl \
    libglu \
    freeglut \
    xorg-libx11 \
    xorg-libxext \
    xorg-libxrender

# Alternative: try different OpenGL packages
if [ $? -ne 0 ]; then
    echo "Trying alternative OpenGL packages..."
    conda install -c conda-forge -y \
        mesa-libgl-cos6-x86_64 \
        mesa-libgl-devel-cos6-x86_64 \
        mesa-dri-drivers-cos6-x86_64
fi

echo "Checking for libGL..."
find $CONDA_PREFIX -name "*libGL*" -type f

echo "Setting up library paths..."
export LD_LIBRARY_PATH="$CONDA_PREFIX/lib:$LD_LIBRARY_PATH"

echo "Done! Try building again with:"
echo "  cd SRC_v3.41.01-beta/Waifu2x-Extension-QT/build"
echo "  make -j\$(nproc)"