#!/bin/bash

# Waifu2x-Extension-GUI Linux installer (no sudo required)
# Uses conda for all dependencies

set -e

SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
CONDA_ENV="waifu2x-gui"

echo "======================================================================"
echo "Waifu2x-Extension-GUI Linux Installer (No Sudo Required)"
echo "======================================================================"

# Check if conda is available
if ! command -v conda &> /dev/null; then
    echo "ERROR: conda not found!"
    echo "Please install conda/miniconda first:"
    echo "  ./tools/install_conda.sh"
    echo "  source ~/.bashrc"
    exit 1
fi

echo "✓ conda found"

# Create conda environment
echo "Creating conda environment: $CONDA_ENV"
if ! conda env list | grep -q "^$CONDA_ENV "; then
    echo "Creating new conda environment..."
    conda create -n "$CONDA_ENV" python=3.9 -y
else
    echo "✓ Conda environment already exists, skipping creation"
fi

# Activate environment
echo "Activating conda environment: $CONDA_ENV"
source "$(conda info --base)/etc/profile.d/conda.sh"
conda activate "$CONDA_ENV"

# Install packages via conda-forge
echo "Installing packages from conda-forge..."
# Check if key packages are already installed
if conda list | grep -q "cmake.*conda-forge" && conda list | grep -q "qt.*6\."; then
    echo "✓ Main packages already installed, skipping conda install"
else
    echo "Installing missing packages..."
    conda install -c conda-forge -y \
        cmake \
        git \
        make \
        gcc_linux-64 \
        gxx_linux-64 \
        qt \
        opencv \
        ffmpeg \
        python \
        pip \
        numpy \
        jq \
        wget || echo "Some conda packages failed, continuing..."
fi

# Install additional Python packages
echo "Installing additional packages via pip..."
pip install --no-warn-script-location \
    opencv-python \
    numpy || echo "Some pip packages failed, continuing..."

# Set up user bin directory
echo "Setting up user-space tools..."
mkdir -p "$HOME/.local/bin"
export PATH="$HOME/.local/bin:$PATH"

# Install ImageMagick (AppImage)
if ! command -v convert &> /dev/null && ! [ -f "$HOME/.local/bin/convert" ]; then
    echo "Installing ImageMagick AppImage..."
    cd /tmp
    wget -q https://github.com/ImageMagick/ImageMagick/releases/download/7.1.1-15/ImageMagick-7.1.1-15-x86_64.AppImage || echo "ImageMagick download failed"
    if [ -f ImageMagick-7.1.1-15-x86_64.AppImage ]; then
        chmod +x ImageMagick-7.1.1-15-x86_64.AppImage
        mv ImageMagick-7.1.1-15-x86_64.AppImage "$HOME/.local/bin/magick"
        ln -sf "$HOME/.local/bin/magick" "$HOME/.local/bin/convert"
    fi
else
    echo "✓ ImageMagick already available"
fi

# Install gifsicle from source
if ! command -v gifsicle &> /dev/null && ! [ -f "$HOME/.local/bin/gifsicle" ]; then
    echo "Building gifsicle from source..."
    cd /tmp
    wget -q https://www.lcdf.org/gifsicle/gifsicle-1.94.tar.gz || echo "gifsicle download failed"
    if [ -f gifsicle-1.94.tar.gz ]; then
        tar -xzf gifsicle-1.94.tar.gz
        cd gifsicle-1.94
        ./configure --prefix="$HOME/.local" && make && make install || echo "gifsicle build failed"
    fi
else
    echo "✓ gifsicle already available"
fi

# Download ncnn-vulkan tools
echo "Downloading ncnn-vulkan tools..."
cd "$SCRIPT_DIR"
if [ -d "tools/ncnn-vulkan-tools/bin" ] && [ "$(ls -A tools/ncnn-vulkan-tools/bin 2>/dev/null)" ]; then
    echo "✓ ncnn-vulkan tools already downloaded"
else
    ./tools/ncnn-vulkan-tools/download_ncnn_tools.sh
fi

# Build the application
echo "Building Waifu2x-Extension-GUI..."
cd "$SCRIPT_DIR/SRC_v3.41.01-beta/Waifu2x-Extension-QT"

# Check if already built
if [ -f "build/Waifu2x-Extension-GUI" ]; then
    echo "✓ Application already built, skipping build step"
    echo "  To rebuild, delete the build directory: rm -rf build"
else
    echo "Building application..."
    
    # Clean previous build
    if [ -d "build" ]; then
        rm -rf build
    fi

    mkdir -p build
    cd build

    # Configure with qmake (not cmake)
    qmake ../Waifu2x-Extension-QT.pro

    # Build
    make -j$(nproc)
fi

echo "======================================================================"
echo "Installation completed!"
echo ""
echo "To run the application:"
echo "  ./run-waifu2x-gui.sh"
echo ""
echo "The conda environment '$CONDA_ENV' has been created with all dependencies."
echo "======================================================================"