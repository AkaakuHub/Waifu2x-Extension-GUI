#!/bin/bash

# Script to create AppImage for Linux distribution

set -e

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
BUILD_DIR="${PROJECT_ROOT}/build-appimage"
APPDIR="${BUILD_DIR}/AppDir"

# Check if running on Linux
if [[ "$OSTYPE" != "linux-gnu"* ]]; then
    echo "AppImage can only be created on Linux"
    exit 1
fi

echo "Creating AppImage for Waifu2x-Extension-GUI..."

# Create build directory
mkdir -p "${BUILD_DIR}"
cd "${BUILD_DIR}"

# Build the application
echo "Building application..."
qmake "${PROJECT_ROOT}/SRC_v3.41.01-beta/Waifu2x-Extension-QT/Waifu2x-Extension-QT.pro" \
    CONFIG+=release \
    PREFIX=/usr

make -j$(nproc)

# Create AppDir structure
echo "Creating AppDir structure..."
make install INSTALL_ROOT="${APPDIR}"

# Copy dependencies
echo "Copying dependencies..."
mkdir -p "${APPDIR}/usr/bin"
mkdir -p "${APPDIR}/usr/lib"
mkdir -p "${APPDIR}/usr/share/applications"
mkdir -p "${APPDIR}/usr/share/icons"

# Copy the main executable
cp "${BUILD_DIR}/Waifu2x-Extension-QT" "${APPDIR}/usr/bin/"

# Copy external tools
echo "Copying external tools..."
if [[ -d "${PROJECT_ROOT}/tools/bin" ]]; then
    cp -r "${PROJECT_ROOT}/tools/bin" "${APPDIR}/usr/"
fi

# Create desktop file
cat > "${APPDIR}/usr/share/applications/waifu2x-extension-gui.desktop" << EOF
[Desktop Entry]
Type=Application
Name=Waifu2x-Extension-GUI
Comment=Image, GIF and Video enlarger/upscaler(super-resolution)
Exec=Waifu2x-Extension-QT
Icon=waifu2x-extension-gui
Categories=Graphics;ImageProcessing;
Terminal=false
EOF

# Copy icon
if [[ -f "${PROJECT_ROOT}/SRC_v3.41.01-beta/Waifu2x-Extension-QT/icon/icon_main.png" ]]; then
    cp "${PROJECT_ROOT}/SRC_v3.41.01-beta/Waifu2x-Extension-QT/icon/icon_main.png" \
       "${APPDIR}/usr/share/icons/waifu2x-extension-gui.png"
fi

# Create AppRun script
cat > "${APPDIR}/AppRun" << 'EOF'
#!/bin/bash
HERE="$(dirname "$(readlink -f "${0}")")"
export LD_LIBRARY_PATH="${HERE}/usr/lib:${LD_LIBRARY_PATH}"
export PATH="${HERE}/usr/bin:${PATH}"
exec "${HERE}/usr/bin/Waifu2x-Extension-QT" "$@"
EOF

chmod +x "${APPDIR}/AppRun"

# Download appimagetool if not present
if [[ ! -f "${BUILD_DIR}/appimagetool-x86_64.AppImage" ]]; then
    echo "Downloading appimagetool..."
    wget -q https://github.com/AppImage/AppImageKit/releases/download/continuous/appimagetool-x86_64.AppImage
    chmod +x appimagetool-x86_64.AppImage
fi

# Use linuxdeployqt to bundle Qt dependencies
if ! command -v linuxdeployqt &> /dev/null; then
    echo "Downloading linuxdeployqt..."
    wget -q https://github.com/probonopd/linuxdeployqt/releases/download/continuous/linuxdeployqt-continuous-x86_64.AppImage
    chmod +x linuxdeployqt-continuous-x86_64.AppImage
    ./linuxdeployqt-continuous-x86_64.AppImage "${APPDIR}/usr/share/applications/waifu2x-extension-gui.desktop" \
        -appimage -bundle-non-qt-libs -extra-plugins=imageformats,platforms
else
    linuxdeployqt "${APPDIR}/usr/share/applications/waifu2x-extension-gui.desktop" \
        -appimage -bundle-non-qt-libs -extra-plugins=imageformats,platforms
fi

# Create AppImage
echo "Creating AppImage..."
./appimagetool-x86_64.AppImage "${APPDIR}" "Waifu2x-Extension-GUI-x86_64.AppImage"

echo "AppImage created: ${BUILD_DIR}/Waifu2x-Extension-GUI-x86_64.AppImage"