#!/bin/bash

# Waifu2x-Extension-GUI Launcher Script
# This script sets up necessary environment variables and paths

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

# Add system paths to PATH for tool detection
export PATH="/opt/homebrew/bin:/usr/local/bin:$PATH"

# Set OpenCL environment for macOS
export PATH="/opt/homebrew/opt/opencl-icd-loader/bin:$PATH"
export LDFLAGS="-L/opt/homebrew/opt/opencl-icd-loader/lib $LDFLAGS"
export PKG_CONFIG_PATH="/opt/homebrew/opt/opencl-icd-loader/lib/pkgconfig:$PKG_CONFIG_PATH"

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

# Check notification sound file
if [ ! -f "$APP_PATH/Contents/MacOS/NFSound_Waifu2xEX.mp3" ]; then
    echo "⚠ Warning: Notification sound file not found in app bundle"
    echo "  Copying sound file..."
    cp "$SCRIPT_DIR/SRC_v3.41.01-beta/NFSound_Waifu2xEX.mp3" "$APP_PATH/Contents/MacOS/" 2>/dev/null || true
fi

echo "Starting Waifu2x-Extension-GUI..."
echo "----------------------------------------"

# Change to app directory
APP_DIR="$(dirname "$APP_EXEC")"
cd "$APP_DIR"

# Create necessary directories
mkdir -p Compatibility_Test

# Copy compatibility test files if they exist
COMPAT_DIR="$SCRIPT_DIR/SRC_v3.41.01-beta/Waifu2x-Extension-QT/Compatibility_Test"
if [ -d "$COMPAT_DIR" ]; then
    echo "Setting up compatibility test files..."
    cp -R "$COMPAT_DIR"/* Compatibility_Test/ 2>/dev/null || true
fi

# Set up tool directories and symlinks for ncnn-vulkan tools
for tool in waifu2x-ncnn-vulkan srmd-ncnn-vulkan realsr-ncnn-vulkan realcugan-ncnn-vulkan rife-ncnn-vulkan cain-ncnn-vulkan dain-ncnn-vulkan; do
    if [ -d "$TOOLS_DIR/$tool" ] && [ ! -d "$tool" ]; then
        echo "Setting up $tool directory structure..."
        mkdir -p "$tool"
        
        # Find the actual executable and models
        tool_subdir=$(find "$TOOLS_DIR/$tool" -type d -name "*-macos" | head -1)
        if [ -d "$tool_subdir" ]; then
            # Create symlinks to executable and models
            if [ -f "$tool_subdir/$tool" ]; then
                ln -sf "$tool_subdir/$tool" "$tool/$tool" 2>/dev/null || true
            fi
            # Link model directories
            for models in "$tool_subdir"/models*; do
                if [ -d "$models" ]; then
                    model_name=$(basename "$models")
                    ln -sf "$models" "$tool/$model_name" 2>/dev/null || true
                fi
            done
        fi
    fi
done

# Special handling for waifu2x-ncnn-vulkan-old (use same binary as new version)
if [ -d "waifu2x-ncnn-vulkan" ] && [ ! -d "waifu2x-ncnn-vulkan-old" ]; then
    ln -sf waifu2x-ncnn-vulkan waifu2x-ncnn-vulkan-old 2>/dev/null || true
fi

echo "----------------------------------------"

# Set up signal handlers to ensure cleanup on exit
cleanup() {
    echo "Cleaning up processes..."
    # Try gentle termination first
    pkill -TERM -f "Waifu2x-Extension-GUI" 2>/dev/null || true
    sleep 1
    # Force kill if still running
    pkill -KILL -f "Waifu2x-Extension-GUI" 2>/dev/null || true
    # Also kill by process name
    pkill -KILL "Waifu2x-Extension-GUI" 2>/dev/null || true
    exit 0
}

trap cleanup EXIT INT TERM

# Run the application and wait for it to finish
"$APP_EXEC" &
APP_PID=$!

# Wait for the application to finish
wait $APP_PID
APP_EXIT_CODE=$?

# If wait fails, try to kill the specific PID
if [ $APP_EXIT_CODE -ne 0 ] || kill -0 $APP_PID 2>/dev/null; then
    echo "Killing application process $APP_PID"
    kill -TERM $APP_PID 2>/dev/null || true
    sleep 1
    kill -KILL $APP_PID 2>/dev/null || true
fi

# Clean up any remaining processes on exit
if [ $APP_EXIT_CODE -ne 0 ]; then
    echo "Application exited with code: $APP_EXIT_CODE"
fi

# Kill any remaining processes that might be hanging
echo "Final cleanup..."
pkill -TERM -f "Waifu2x-Extension-GUI" 2>/dev/null || true
sleep 1
pkill -KILL -f "Waifu2x-Extension-GUI" 2>/dev/null || true
pkill -KILL "Waifu2x-Extension-GUI" 2>/dev/null || true

# Force kill any Qt-related processes that might be hanging
pkill -f "libQt" 2>/dev/null || true

exit $APP_EXIT_CODE