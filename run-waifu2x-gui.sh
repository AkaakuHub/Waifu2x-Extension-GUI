#!/bin/bash

# Waifu2x-Extension-GUI Launcher Script
# This script sets up all necessary environment variables and paths

set -e

# Get script directory
SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

# Set up paths
APP_PATH="$SCRIPT_DIR/SRC_v3.41.01-beta/Waifu2x-Extension-QT/build/Waifu2x-Extension-GUI.app"
TOOLS_DIR="$SCRIPT_DIR/tools/ncnn-vulkan-tools/bin"
APP_EXEC="$APP_PATH/Contents/MacOS/Waifu2x-Extension-GUI"

# Check if application exists
if [ ! -f "$APP_EXEC" ]; then
    echo "Error: Application not found!"
    echo "Please run ./install.sh first to build and install the application."
    exit 1
fi

# Set up Qt5 paths for macOS
if [[ "$OSTYPE" == "darwin"* ]]; then
    if [ -d "/opt/homebrew/opt/qt@5" ]; then
        export PATH="/opt/homebrew/opt/qt@5/bin:$PATH"
        export LDFLAGS="-L/opt/homebrew/opt/qt@5/lib"
        export CPPFLAGS="-I/opt/homebrew/opt/qt@5/include"
        export PKG_CONFIG_PATH="/opt/homebrew/opt/qt@5/lib/pkgconfig"
        export DYLD_LIBRARY_PATH="/opt/homebrew/opt/qt@5/lib:$DYLD_LIBRARY_PATH"
    elif [ -d "/usr/local/opt/qt@5" ]; then
        export PATH="/usr/local/opt/qt@5/bin:$PATH"
        export LDFLAGS="-L/usr/local/opt/qt@5/lib"
        export CPPFLAGS="-I/usr/local/opt/qt@5/include"
        export PKG_CONFIG_PATH="/usr/local/opt/qt@5/lib/pkgconfig"
        export DYLD_LIBRARY_PATH="/usr/local/opt/qt@5/lib:$DYLD_LIBRARY_PATH"
    fi
fi

# Add external tools to PATH
export PATH="$TOOLS_DIR:$PATH"

# Set tool paths as environment variables (in case the app checks these)
export WAIFU2X_NCNN_VULKAN_PATH="$TOOLS_DIR/waifu2x-ncnn-vulkan"
export SRMD_NCNN_VULKAN_PATH="$TOOLS_DIR/srmd-ncnn-vulkan"
export REALSR_NCNN_VULKAN_PATH="$TOOLS_DIR/realsr-ncnn-vulkan"
export FFMPEG_PATH="$(which ffmpeg 2>/dev/null || echo '')"
export FFPROBE_PATH="$(which ffprobe 2>/dev/null || echo '')"

# Check if external tools exist
if [ -d "$TOOLS_DIR" ]; then
    echo "✓ External tools found at: $TOOLS_DIR"
else
    echo "⚠ Warning: External tools not found at $TOOLS_DIR"
    echo "  Some features may not work. Run './tools/ncnn-vulkan-tools/download_ncnn_tools.sh' to download them."
fi

# Check language files
LANG_FILES_COUNT=$(ls "$APP_PATH/Contents/MacOS"/language_*.qm 2>/dev/null | wc -l)
if [ "$LANG_FILES_COUNT" -eq 0 ]; then
    echo "⚠ Warning: Language files not found in app bundle"
    echo "  Copying language files..."
    cp "$SCRIPT_DIR/SRC_v3.41.01-beta/Waifu2x-Extension-QT"/language_*.qm "$APP_PATH/Contents/MacOS/" 2>/dev/null || true
fi

echo "Starting Waifu2x-Extension-GUI..."
echo "----------------------------------------"

# Run the application
cd "$(dirname "$APP_EXEC")"
exec "$APP_EXEC"