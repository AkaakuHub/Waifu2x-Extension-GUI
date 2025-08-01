#!/bin/bash

# Script to install dependencies via system package managers

set -e

# Detect distribution/OS
detect_system() {
    if [[ "$OSTYPE" == "linux-gnu"* ]]; then
        if [ -f /etc/os-release ]; then
            . /etc/os-release
            OS=$NAME
            VER=$VERSION_ID
            DISTRO=$ID
        elif [ -f /etc/redhat-release ]; then
            OS="Red Hat"
            DISTRO="rhel"
        elif [ -f /etc/debian_version ]; then
            OS="Debian"
            DISTRO="debian"
        fi
    elif [[ "$OSTYPE" == "darwin"* ]]; then
        OS="macOS"
        DISTRO="macos"
    else
        echo "Unsupported OS: $OSTYPE"
        exit 1
    fi
}

# Install dependencies for Ubuntu/Debian
install_debian() {
    echo "Installing dependencies for Debian/Ubuntu..."
    sudo apt-get update
    sudo apt-get install -y \
        build-essential \
        cmake \
        git \
        libvulkan-dev \
        vulkan-utils \
        libopencv-dev \
        ffmpeg \
        libavcodec-dev \
        libavformat-dev \
        libavutil-dev \
        libswscale-dev \
        python3 \
        python3-pip \
        qt5-default \
        qttools5-dev-tools \
        libqt5svg5-dev \
        libqt5opengl5-dev \
        opencl-headers \
        ocl-icd-opencl-dev \
        gifsicle \
        imagemagick \
        sox \
        wget \
        jq
}

# Install dependencies for Fedora/RHEL/CentOS
install_redhat() {
    echo "Installing dependencies for Fedora/RHEL/CentOS..."
    sudo dnf install -y \
        gcc \
        gcc-c++ \
        cmake \
        git \
        vulkan-devel \
        vulkan-tools \
        opencv-devel \
        ffmpeg \
        ffmpeg-devel \
        python3 \
        python3-pip \
        qt5-qtbase-devel \
        qt5-qttools-devel \
        qt5-qtsvg-devel \
        opencl-headers \
        ocl-icd-devel \
        gifsicle \
        ImageMagick \
        sox \
        wget \
        jq
}

# Install dependencies for Arch Linux
install_arch() {
    echo "Installing dependencies for Arch Linux..."
    sudo pacman -Syu --noconfirm
    sudo pacman -S --noconfirm \
        base-devel \
        cmake \
        git \
        vulkan-icd-loader \
        vulkan-headers \
        vulkan-tools \
        opencv \
        ffmpeg \
        python \
        python-pip \
        qt5-base \
        qt5-tools \
        qt5-svg \
        opencl-headers \
        ocl-icd \
        gifsicle \
        imagemagick \
        sox \
        wget \
        jq
}

# Install dependencies for openSUSE
install_opensuse() {
    echo "Installing dependencies for openSUSE..."
    sudo zypper refresh
    sudo zypper install -y \
        gcc \
        gcc-c++ \
        cmake \
        git \
        vulkan-devel \
        vulkan-tools \
        opencv-devel \
        ffmpeg \
        ffmpeg-devel \
        python3 \
        python3-pip \
        libqt5-qtbase-devel \
        libqt5-qttools-devel \
        libqt5-qtsvg-devel
}

# Install dependencies for macOS
install_macos() {
    echo "Installing dependencies for macOS..."
    
    # Check if Homebrew is installed
    if ! command -v brew &> /dev/null; then
        echo "ERROR: Homebrew is not installed!"
        echo "Please install Homebrew manually first:"
        echo "Visit: https://brew.sh"
        echo "Or run: /bin/bash -c \"\$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)\""
        exit 1
    fi
    
    echo "Installing packages via Homebrew..."
    brew update
    brew install \
        cmake \
        git \
        vulkan-headers \
        vulkan-loader \
        vulkan-tools \
        opencv \
        ffmpeg \
        python3 \
        qt@5 \
        jq \
        wget \
        opencl-headers \
        opencl-icd-loader \
        gifsicle
    
    # Link Qt5 (handle conflicts with Qt6)
    if brew list qt >/dev/null 2>&1; then
        echo "Qt6 is installed. Unlinking Qt6 to use Qt5..."
        brew unlink qt || true
    fi
    brew link qt@5 --force --overwrite || echo "Warning: Qt5 linking had issues, but continuing..."
}

# Main installation logic
main() {
    echo "Detecting system..."
    detect_system
    echo "Detected: $OS ($DISTRO)"
    
    case $DISTRO in
        ubuntu|debian|linuxmint|pop)
            install_debian
            ;;
        fedora|rhel|centos)
            install_redhat
            ;;
        arch|manjaro)
            install_arch
            ;;
        opensuse*)
            install_opensuse
            ;;
        macos)
            install_macos
            ;;
        *)
            echo "Unsupported distribution: $DISTRO"
            echo "Please install dependencies manually:"
            echo "- cmake"
            echo "- git"
            echo "- Vulkan SDK"
            echo "- OpenCV"
            echo "- FFmpeg"
            echo "- Python 3"
            echo "- Qt5"
            exit 1
            ;;
    esac
    
    echo "Dependencies installation completed!"
    
    # Install Python packages
    echo "Installing Python packages..."
    # Try to install via brew first (preferred on macOS)
    if [[ "$PLATFORM" == "macos" ]]; then
        brew install numpy || true
        brew install opencv || true
    else
        # On Linux, use pip with --user flag or --break-system-packages if needed
        pip3 install --user numpy opencv-python || \
        pip3 install --user --break-system-packages numpy opencv-python || \
        echo "Warning: Python packages installation failed, but continuing..."
    fi
    
    echo "All dependencies installed successfully!"
}

# Run main function
main