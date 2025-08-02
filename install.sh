#!/bin/bash

# Waifu2x-Extension-GUI Cross-Platform Installation Script
# This script will install dependencies and build the application

set -e

echo "================================================"
echo "Waifu2x-Extension-GUI Cross-Platform Installer"
echo "================================================"
echo ""

# Linux-specific installation with sudo/conda choice
if [[ "$OSTYPE" == "linux-gnu"* ]]; then
    echo "Linux installation options:"
    echo "1. With sudo (system packages)"
    echo "2. Without sudo (conda environment)"
    echo ""
    
    # Auto-detect and suggest
    if sudo -n true 2>/dev/null; then
        echo "✓ sudo access detected"
        echo "Recommendation: Use option 1 (system packages)"
        DEFAULT="1"
    elif command -v conda &> /dev/null; then
        echo "⚠ No sudo access, but conda found"
        echo "Recommendation: Use option 2 (conda)"
        DEFAULT="2"
    else
        echo "⚠ No sudo access, no conda found"
        echo "Installing miniconda automatically..."
        
        # Auto-install conda
        echo "Downloading and installing Miniconda..."
        cd /tmp
        wget -q https://repo.anaconda.com/miniconda/Miniconda3-latest-Linux-x86_64.sh
        bash Miniconda3-latest-Linux-x86_64.sh -b -p "$HOME/miniconda3"
        "$HOME/miniconda3/bin/conda" init bash
        export PATH="$HOME/miniconda3/bin:$PATH"
        echo "✓ Miniconda installed"
        DEFAULT="2"
    fi
    
    echo ""
    read -p "Choose installation method [1/2] (default: $DEFAULT): " CHOICE
    CHOICE=${CHOICE:-$DEFAULT}
    
    if [ "$CHOICE" = "2" ]; then
        echo "Using conda-based installation..."
        
        # Conda environment setup
        CONDA_ENV="waifu2x-gui"
        
        # Clean environment variables to prevent git conflicts
        unset CONDA_DEFAULT_ENV
        unset CONDA_PREFIX
        unset CONDA_SHLVL
        for var in $(env | grep ^CONDA_BACKUP_ | cut -d= -f1 2>/dev/null); do
            unset $var
        done
        
        # Backup original LD_LIBRARY_PATH to prevent git breakage
        export ORIG_LD_LIBRARY_PATH="$LD_LIBRARY_PATH"
        
        # Setup conda
        if [ -f "$HOME/miniconda3/bin/conda" ]; then
            export PATH="$HOME/miniconda3/bin:$PATH"
            CONDA_CMD="$HOME/miniconda3/bin/conda"
        elif [ -f "/usr/local/anaconda3/bin/conda" ]; then
            export PATH="/usr/local/anaconda3/bin:$PATH"
            CONDA_CMD="/usr/local/anaconda3/bin/conda"
        else
            CONDA_CMD="conda"
        fi
        
        echo "Creating conda environment: $CONDA_ENV"
        if ! $CONDA_CMD env list | grep -q "^$CONDA_ENV "; then
            $CONDA_CMD create -n "$CONDA_ENV" python=3.9 -y
        else
            echo "✓ Environment already exists"
        fi
        
        # Check if packages are already installed (one batch call)
        echo "Checking installed packages..."
        INSTALLED_PACKAGES=$($CONDA_CMD list -n "$CONDA_ENV" --export | cut -d'=' -f1)
        
        PACKAGES_NEEDED=""
        PACKAGES_FOUND=""
        for pkg in pyqt qt cmake make gcc_linux-64 gxx_linux-64 opencv ffmpeg imagemagick mesalib libgl libglu numpy jq wget libstdcxx-ng libgcc-ng libvulkan-loader vulkan-headers vulkan-tools libgomp; do
            pkg_name=${pkg%=*}
            if echo "$INSTALLED_PACKAGES" | grep -q "^$pkg_name$"; then
                PACKAGES_FOUND="$PACKAGES_FOUND ✓$pkg"
            else
                PACKAGES_NEEDED="$PACKAGES_NEEDED $pkg"
            fi
        done
        
        # Display results all at once
        if [ -n "$PACKAGES_FOUND" ]; then
            echo "Already installed:$PACKAGES_FOUND"
        fi
        
        if [ -n "$PACKAGES_NEEDED" ]; then
            echo "Installing missing packages:$PACKAGES_NEEDED"
            $CONDA_CMD install -n "$CONDA_ENV" -c conda-forge -y $PACKAGES_NEEDED
        else
            echo "✓ All packages already installed"
        fi
        
        # Set environment paths
        CONDA_ENV_PATH=$($CONDA_CMD env list | grep "$CONDA_ENV" | awk '{print $2}')
        export CONDA_ENV_PATH="$CONDA_ENV_PATH"
        export LD_LIBRARY_PATH="$CONDA_ENV_PATH/lib:$LD_LIBRARY_PATH"
        export PATH="$CONDA_ENV_PATH/bin:$PATH"
        
        # Create libGL symlinks if needed
        if [ -f "$CONDA_ENV_PATH/lib/libGL.so.1.7.0" ] && [ ! -f "$CONDA_ENV_PATH/lib/libGL.so" ]; then
            cd "$CONDA_ENV_PATH/lib"
            ln -sf libGL.so.1.7.0 libGL.so.1
            ln -sf libGL.so.1 libGL.so
        fi
        
        echo "✓ Conda environment ready"
        
        # Save environment info for run script
        SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
        cat > "$SCRIPT_DIR/conda_env_info.sh" << EOF
#!/bin/bash
# Auto-generated conda environment information
export CONDA_ENV_NAME="$CONDA_ENV"
export CONDA_ENV_PATH="$CONDA_ENV_PATH"
# Backup original environment to prevent git conflicts
export ORIG_LD_LIBRARY_PATH="\$LD_LIBRARY_PATH"
export ORIG_PATH="\$PATH"
# Set conda environment (only when running waifu2x)
export LD_LIBRARY_PATH="$CONDA_ENV_PATH/lib:\$ORIG_LD_LIBRARY_PATH"
export PATH="$CONDA_ENV_PATH/bin:\$ORIG_PATH"
EOF
        echo "✓ Environment info saved for run script"
        
    elif [ "$CHOICE" = "1" ]; then
        echo "Using system packages installation..."
        
        # Install system dependencies
        echo "Installing system dependencies..."
        bash tools/install_dependencies.sh
        
    else
        echo "Invalid choice. Exiting."
        exit 1
    fi
    
fi

# macOS installation
if [[ "$OSTYPE" == "darwin"* ]]; then
    echo "Installing macOS dependencies..."
    bash tools/install_dependencies.sh
fi

# Setup Qt5 paths for macOS
if [[ "$OSTYPE" == "darwin"* ]]; then
    echo ""
    echo "Setting up Qt5 paths for macOS..."
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

# Download/Build external tools
echo ""
echo "Setting up external tools..."
echo "----------------------------------------"
bash tools/ncnn-vulkan-tools/download_ncnn_tools.sh

# Download GLIBC 2.31 compatible versions for problematic tools
if [[ "$OSTYPE" == "linux-gnu"* ]]; then
    echo ""
    echo "Installing GLIBC 2.31 compatible AI tools..."
    echo "----------------------------------------"
    if [ -f "./tools/ncnn-vulkan-tools/download_compatible_tools.sh" ]; then
        bash tools/ncnn-vulkan-tools/download_compatible_tools.sh
    else
        echo "⚠ Compatible tools script not found, using available versions"
    fi
fi

# Test AI tools compatibility after download
echo ""
echo "Testing AI tools compatibility..."
echo "----------------------------------------"
if [ -f "./test_vulkan_deps.sh" ]; then
    chmod +x test_vulkan_deps.sh
    if ./test_vulkan_deps.sh | tail -1 | grep -q "6/7\|[5-9]/[5-9]"; then
        echo "✓ AI tools compatibility verified - most tools working!"
    else
        echo "⚠ Some AI tools may have compatibility issues"
        echo "  The application will still work with available tools"
    fi
else
    echo "⚠ Compatibility test script not found"
fi

# Build the application
echo ""
echo "Building Waifu2x-Extension-GUI..."
echo "----------------------------------------"
cd SRC_v3.41.01-beta/Waifu2x-Extension-QT

# Check if already built based on OS
if [[ "$OSTYPE" == "darwin"* ]]; then
    BUILD_CHECK="build/Waifu2x-Extension-GUI.app/Contents/MacOS/Waifu2x-Extension-GUI"
elif [[ "$OSTYPE" == "linux-gnu"* ]]; then
    BUILD_CHECK="build/Waifu2x-Extension-GUI"
fi

# Force rebuild for conda environment to ensure Qt5 compatibility
if [ -f "$BUILD_CHECK" ] && [[ "$OSTYPE" == "linux-gnu"* ]] && [ -n "$CONDA_ENV_PATH" ]; then
    echo "Existing build found, but rebuilding for conda Qt5 environment..."
    rm -rf build
    mkdir build
    cd build
    
    # Configure and build with conda Qt5
    echo "Configuring with conda qmake..."
    "$CONDA_ENV_PATH/bin/qmake" ../Waifu2x-Extension-QT.pro
    echo "Building with conda toolchain..."
    make -j$(nproc 2>/dev/null || sysctl -n hw.ncpu 2>/dev/null || echo 1)
    
elif [ -f "$BUILD_CHECK" ]; then
    echo "Application already built. Skipping build step."
    echo "To rebuild, delete the build directory first: rm -rf SRC_v3.41.01-beta/Waifu2x-Extension-QT/build"
    cd build
else
    # Clean previous build
    rm -rf build
    mkdir build
    cd build

    # Configure with qmake (conda environment should be active for Linux)
    if [[ "$OSTYPE" == "linux-gnu"* ]] && [ -n "$CONDA_ENV_PATH" ]; then
        # Use qmake from conda environment
        "$CONDA_ENV_PATH/bin/qmake" ../Waifu2x-Extension-QT.pro
    else
        qmake ../Waifu2x-Extension-QT.pro
    fi

    # Build
    make -j$(nproc 2>/dev/null || sysctl -n hw.ncpu 2>/dev/null || echo 1)
fi

# Copy latest binary with fixes (macOS only)
if [[ "$OSTYPE" == "darwin"* ]]; then
    echo ""
    echo "Copying latest binary with compatibility test fixes..."
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

# Post-build setup
echo ""
echo "Setting up application..."
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