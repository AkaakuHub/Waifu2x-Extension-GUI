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
    conda create -n "$CONDA_ENV" python=3.9 -y
fi

# Activate environment
echo "Activating conda environment: $CONDA_ENV"
source "$(conda info --base)/etc/profile.d/conda.sh"
conda activate "$CONDA_ENV"

# Install packages via conda-forge
echo "Installing packages from conda-forge..."
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
if ! command -v convert &> /dev/null; then
    echo "Installing ImageMagick AppImage..."
    cd /tmp
    wget -q https://github.com/ImageMagick/ImageMagick/releases/download/7.1.1-15/ImageMagick-7.1.1-15-x86_64.AppImage || echo "ImageMagick download failed"
    if [ -f ImageMagick-7.1.1-15-x86_64.AppImage ]; then
        chmod +x ImageMagick-7.1.1-15-x86_64.AppImage
        mv ImageMagick-7.1.1-15-x86_64.AppImage "$HOME/.local/bin/magick"
        ln -sf "$HOME/.local/bin/magick" "$HOME/.local/bin/convert"
    fi
fi

# Install gifsicle from source
if ! command -v gifsicle &> /dev/null; then
    echo "Building gifsicle from source..."
    cd /tmp
    wget -q https://www.lcdf.org/gifsicle/gifsicle-1.94.tar.gz || echo "gifsicle download failed"
    if [ -f gifsicle-1.94.tar.gz ]; then
        tar -xzf gifsicle-1.94.tar.gz
        cd gifsicle-1.94
        ./configure --prefix="$HOME/.local" && make && make install || echo "gifsicle build failed"
    fi
fi

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

# Configure with cmake
cmake .. \
    -DCMAKE_BUILD_TYPE=Release \
    -DCMAKE_PREFIX_PATH="$CONDA_PREFIX" \
    -DQt5_DIR="$CONDA_PREFIX/lib/cmake/Qt5"

# Build
make -j$(nproc)

echo "======================================================================"
echo "Installation completed!"
echo ""
echo "To run the application:"
echo "  ./run-waifu2x-gui.sh"
echo ""
echo "The conda environment '$CONDA_ENV' has been created with all dependencies."
echo "======================================================================"