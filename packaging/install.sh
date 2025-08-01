#!/bin/bash

# Universal installation script for Waifu2x-Extension-GUI

set -e

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"

# Default installation prefix
PREFIX="/usr/local"
INSTALL_DESKTOP_FILE=true

# Parse command line arguments
while [[ $# -gt 0 ]]; do
    case $1 in
        --prefix)
            PREFIX="$2"
            shift 2
            ;;
        --no-desktop)
            INSTALL_DESKTOP_FILE=false
            shift
            ;;
        --help)
            echo "Usage: $0 [OPTIONS]"
            echo "Options:"
            echo "  --prefix PATH      Installation prefix (default: /usr/local)"
            echo "  --no-desktop       Don't install desktop file"
            echo "  --help             Show this help message"
            exit 0
            ;;
        *)
            echo "Unknown option: $1"
            exit 1
            ;;
    esac
done

echo "Installing Waifu2x-Extension-GUI..."
echo "Installation prefix: ${PREFIX}"

# Check for required tools
if ! command -v qmake &> /dev/null; then
    echo "Error: qmake not found. Please install Qt5 development tools."
    exit 1
fi

# Create build directory
BUILD_DIR="${PROJECT_ROOT}/build-install"
mkdir -p "${BUILD_DIR}"
cd "${BUILD_DIR}"

# Configure and build
echo "Configuring build..."
qmake "${PROJECT_ROOT}/SRC_v3.41.01-beta/Waifu2x-Extension-QT/Waifu2x-Extension-QT.pro" \
    CONFIG+=release \
    PREFIX="${PREFIX}"

echo "Building application..."
make -j$(nproc 2>/dev/null || sysctl -n hw.ncpu 2>/dev/null || echo 4)

# Install
echo "Installing..."
sudo make install

# Install external tools
echo "Installing external tools..."
TOOLS_DEST="${PREFIX}/share/waifu2x-extension-gui/tools"
sudo mkdir -p "${TOOLS_DEST}"

if [[ -d "${PROJECT_ROOT}/tools/bin" ]]; then
    sudo cp -r "${PROJECT_ROOT}/tools/bin" "${TOOLS_DEST}/"
fi

# Install desktop file (Linux only)
if [[ "$OSTYPE" == "linux-gnu"* ]] && [[ "${INSTALL_DESKTOP_FILE}" == true ]]; then
    echo "Installing desktop file..."
    DESKTOP_FILE="${PREFIX}/share/applications/waifu2x-extension-gui.desktop"
    sudo mkdir -p "$(dirname "${DESKTOP_FILE}")"
    
    sudo tee "${DESKTOP_FILE}" > /dev/null << EOF
[Desktop Entry]
Type=Application
Name=Waifu2x-Extension-GUI
Comment=Image, GIF and Video enlarger/upscaler(super-resolution)
Exec=${PREFIX}/bin/Waifu2x-Extension-QT
Icon=waifu2x-extension-gui
Categories=Graphics;ImageProcessing;
Terminal=false
EOF
    
    # Install icon
    if [[ -f "${PROJECT_ROOT}/SRC_v3.41.01-beta/Waifu2x-Extension-QT/icon/icon_main.png" ]]; then
        sudo mkdir -p "${PREFIX}/share/icons/hicolor/256x256/apps"
        sudo cp "${PROJECT_ROOT}/SRC_v3.41.01-beta/Waifu2x-Extension-QT/icon/icon_main.png" \
            "${PREFIX}/share/icons/hicolor/256x256/apps/waifu2x-extension-gui.png"
    fi
    
    # Update desktop database
    if command -v update-desktop-database &> /dev/null; then
        sudo update-desktop-database "${PREFIX}/share/applications" 2>/dev/null || true
    fi
fi

# Create uninstall script
echo "Creating uninstall script..."
UNINSTALL_SCRIPT="${PREFIX}/share/waifu2x-extension-gui/uninstall.sh"
sudo mkdir -p "$(dirname "${UNINSTALL_SCRIPT}")"

sudo tee "${UNINSTALL_SCRIPT}" > /dev/null << EOF
#!/bin/bash
# Uninstall script for Waifu2x-Extension-GUI

echo "Uninstalling Waifu2x-Extension-GUI..."

# Remove installed files
rm -f "${PREFIX}/bin/Waifu2x-Extension-QT"
rm -rf "${PREFIX}/share/waifu2x-extension-gui"
rm -f "${PREFIX}/share/applications/waifu2x-extension-gui.desktop"
rm -f "${PREFIX}/share/icons/hicolor/256x256/apps/waifu2x-extension-gui.png"

# Update desktop database
if command -v update-desktop-database &> /dev/null; then
    update-desktop-database "${PREFIX}/share/applications" 2>/dev/null || true
fi

echo "Uninstallation complete!"
EOF

sudo chmod +x "${UNINSTALL_SCRIPT}"

echo ""
echo "Installation complete!"
echo "Executable: ${PREFIX}/bin/Waifu2x-Extension-QT"
echo "To uninstall, run: sudo ${UNINSTALL_SCRIPT}"

# Clean up build directory
cd "${PROJECT_ROOT}"
rm -rf "${BUILD_DIR}"