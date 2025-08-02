#!/bin/bash

# Waifu2x-Extension-GUI Launcher Script
# This script sets up necessary environment variables and paths

set -e

# Get script directory
SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

# Set up paths based on OS
TOOLS_DIR="$SCRIPT_DIR/tools/ncnn-vulkan-tools/bin"

if [[ "$OSTYPE" == "darwin"* ]]; then
    # macOS app bundle
    APP_PATH="$SCRIPT_DIR/SRC_v3.41.01-beta/Waifu2x-Extension-QT/build/Waifu2x-Extension-GUI.app"
    APP_EXEC="$APP_PATH/Contents/MacOS/Waifu2x-Extension-GUI"
elif [[ "$OSTYPE" == "linux-gnu"* ]]; then
    # Linux binary
    APP_PATH="$SCRIPT_DIR/SRC_v3.41.01-beta/Waifu2x-Extension-QT/build"
    APP_EXEC="$APP_PATH/Waifu2x-Extension-GUI"
fi

# Check if application exists
if [ ! -f "$APP_EXEC" ]; then
    echo "Error: Application not found at: $APP_EXEC"
    echo "Please run ./install.sh first to build and install the application."
    exit 1
fi

# Set up environment to avoid home directory space limitations on Linux
if [[ "$OSTYPE" == "linux-gnu"* ]]; then
    # Override home directory references to use export data directory
    export HOME="$SCRIPT_DIR"
    export XDG_CONFIG_HOME="$SCRIPT_DIR/.config"
    export XDG_DATA_HOME="$SCRIPT_DIR/.local/share"
    export XDG_CACHE_HOME="$SCRIPT_DIR/.cache"
    
    # Create necessary directories
    mkdir -p "$XDG_CONFIG_HOME" "$XDG_DATA_HOME" "$XDG_CACHE_HOME"
    
    # Limit inotify usage to prevent home directory monitoring
    ulimit -n 256
    
    echo "✓ Home directory overrides configured"
    echo "  HOME: $HOME"
    echo "  XDG_CONFIG_HOME: $XDG_CONFIG_HOME"
fi

# Set up conda environment for Linux no-sudo installations
if [[ "$OSTYPE" == "linux-gnu"* ]]; then
    CONDA_ENV="waifu2x-gui"
    CONDA_ENV_PATH=""
    
    # Try to find conda command in multiple locations
    CONDA_CMD=""
    for conda_path in "$HOME/miniconda3/bin/conda" "$HOME/anaconda3/bin/conda" "/usr/local/anaconda3/bin/conda" "/opt/conda/bin/conda" "/export/data/m2311202/miniconda3/bin/conda" "/export/data/m2311202/anaconda3/bin/conda"; do
        if [ -f "$conda_path" ]; then
            CONDA_CMD="$conda_path"
            break
        fi
    done
    
    # Fallback to system conda if available
    if [ -z "$CONDA_CMD" ] && command -v conda &> /dev/null; then
        CONDA_CMD="conda"
    fi
    
    if [ -n "$CONDA_CMD" ]; then
        echo "Found conda at: $CONDA_CMD"
        
        # First priority: Check the expected path directly
        EXPECTED_PATH="/export/data/m2311202/conda_envs/waifu2x-gui"
        if [ -d "$EXPECTED_PATH" ] && [ -f "$EXPECTED_PATH/bin/python" ]; then
            echo "✓ Found conda environment at expected location: $EXPECTED_PATH"
            CONDA_ENV_PATH="$EXPECTED_PATH"
        else
            # Second priority: Try conda env list command
            if $CONDA_CMD env list | grep -q "^$CONDA_ENV "; then
                echo "Loading conda environment configuration from conda env list..."
                CONDA_ENV_PATH=$($CONDA_CMD env list | grep "^$CONDA_ENV " | awk '{print $2}')
                
                if [ -n "$CONDA_ENV_PATH" ] && [ -d "$CONDA_ENV_PATH" ]; then
                    echo "✓ Found conda environment via conda env list: $CONDA_ENV_PATH"
                else
                    CONDA_ENV_PATH=""
                fi
            fi
            
            # Third priority: Search common conda environment paths
            if [ -z "$CONDA_ENV_PATH" ]; then
                echo "Searching for conda environment in common locations..."
                for potential_path in "/export/data/m2311202/conda_envs/waifu2x-gui" "/export/data/m2311202/miniconda3/envs/waifu2x-gui" "/export/data/m2311202/anaconda3/envs/waifu2x-gui" "$HOME/conda_envs/waifu2x-gui" "$HOME/miniconda3/envs/waifu2x-gui" "$HOME/anaconda3/envs/waifu2x-gui" "/opt/conda/envs/waifu2x-gui"; do
                    if [ -d "$potential_path" ] && [ -f "$potential_path/bin/python" ]; then
                        echo "✓ Found conda environment at: $potential_path"
                        CONDA_ENV_PATH="$potential_path"
                        break
                    fi
                done
            fi
        fi
        
        # If conda environment was found, configure it
        if [ -n "$CONDA_ENV_PATH" ] && [ -d "$CONDA_ENV_PATH" ]; then
            echo "Configuring conda environment at: $CONDA_ENV_PATH"
                
                # Clean existing conda environment variables to prevent conflicts
                for var in $(env | grep ^CONDA_BACKUP_ | cut -d= -f1 2>/dev/null); do
                    unset $var
                done
                
                # Clear system library paths completely to avoid conflicts
                unset LD_LIBRARY_PATH
                unset LD_PRELOAD
                unset QT_PLUGIN_PATH
                unset QML2_IMPORT_PATH
                unset QTDIR
                
                # Set conda environment paths EXCLUSIVELY (no system paths)
                export CONDA_PREFIX="$CONDA_ENV_PATH"
                export PATH="$CONDA_ENV_PATH/bin"
                export LD_LIBRARY_PATH="$CONDA_ENV_PATH/lib"
                export PKG_CONFIG_PATH="$CONDA_ENV_PATH/lib/pkgconfig"
                
                # Force Qt5 from conda environment ONLY
                export QT_PLUGIN_PATH="$CONDA_ENV_PATH/plugins"
                export QML2_IMPORT_PATH="$CONDA_ENV_PATH/qml"
                export QTDIR="$CONDA_ENV_PATH"
                export QT_SELECT="qt5"
                
                # Critical: Ensure GCC/libstdc++ compatibility
                if [ -f "$CONDA_ENV_PATH/lib/libstdc++.so.6" ]; then
                    export LD_LIBRARY_PATH="$CONDA_ENV_PATH/lib:$LD_LIBRARY_PATH"
                fi
                
                # Prevent Qt from searching system paths
                export QT_QPA_PLATFORM_PLUGIN_PATH="$CONDA_ENV_PATH/plugins/platforms"
                export QT_QPA_GENERIC_PLUGINS="$CONDA_ENV_PATH/plugins/generic"
                
                echo "✓ Conda environment configured (EXCLUSIVE mode)"
                echo "  CONDA_ENV_PATH: $CONDA_ENV_PATH"
                echo "  LD_LIBRARY_PATH: $LD_LIBRARY_PATH"
                echo "  PATH: $PATH"
                
                # Validate Qt5 libraries
                if [ -f "$CONDA_ENV_PATH/lib/libQt5Core.so.5" ]; then
                    QT_VERSION=$(strings "$CONDA_ENV_PATH/lib/libQt5Core.so.5" | grep -E "Qt_5\.[0-9]+" | head -1)
                    echo "  ✓ Found Qt5 libraries: $QT_VERSION"
                else
                    echo "  ⚠ Warning: Qt5 libraries not found in conda environment"
                fi
                
                # Quick AI tools compatibility check
                if [ -f "./test_vulkan_deps.sh" ]; then
                    WORKING_TOOLS=$(./test_vulkan_deps.sh 2>/dev/null | grep "Working AI tools:" | cut -d: -f2 | wc -w)
                    if [ "$WORKING_TOOLS" -gt 5 ]; then
                        echo "  ✓ AI tools ready ($WORKING_TOOLS tools available)"
                    else
                        echo "  ⚠ Limited AI tools available ($WORKING_TOOLS tools)"
                    fi
                fi
        else
            echo "  ⚠ Warning: Could not locate conda environment directory"
            echo "  Expected path: /export/data/m2311202/conda_envs/waifu2x-gui"
            echo "  Run ./debug-conda-env.sh for detailed diagnosis"
        fi
    else
        echo "  ⚠ Warning: Conda not found in PATH"
        echo "  Run ./debug-conda-env.sh to check conda installation"
    fi
fi

# Setup Qt5 paths for macOS and Linux
if [[ "$OSTYPE" == "darwin"* ]]; then
    # macOS Qt5 via Homebrew
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
elif [[ "$OSTYPE" == "linux-gnu"* ]]; then
    # Linux Qt5 setup - ONLY if conda environment is not configured
    if [ -z "$CONDA_ENV_PATH" ]; then
        export QT_SELECT=qt5
        
        # Check if we have conda env activated
        if [ -n "$CONDA_PREFIX" ]; then
            # Use conda Qt5 if available
            if [ -d "$CONDA_PREFIX/bin" ]; then
                export PATH="$CONDA_PREFIX/bin:$PATH"
            fi
            if [ -d "$CONDA_PREFIX/lib" ]; then
                export LD_LIBRARY_PATH="$CONDA_PREFIX/lib:$LD_LIBRARY_PATH"
            fi
        fi
        
        # Add common system Qt5 paths if they exist (fallback only)
        [ -d "/usr/lib/qt5/bin" ] && export PATH="/usr/lib/qt5/bin:$PATH"
        [ -d "/usr/lib/x86_64-linux-gnu/qt5/bin" ] && export PATH="/usr/lib/x86_64-linux-gnu/qt5/bin:$PATH"
    else
        echo "Skipping system Qt5 setup - using conda environment exclusively"
    fi
fi

# Add system paths to PATH for tool detection (only if not using conda exclusively)
if [[ "$OSTYPE" == "darwin"* ]]; then
    export PATH="/opt/homebrew/bin:/usr/local/bin:$PATH"
elif [[ "$OSTYPE" == "linux-gnu"* ]] && [ -z "$CONDA_ENV_PATH" ]; then
    # Only add system paths if conda environment is not configured
    export PATH="/usr/local/bin:/usr/bin:/bin:$PATH"
elif [[ "$OSTYPE" == "linux-gnu"* ]] && [ -n "$CONDA_ENV_PATH" ]; then
    # For conda environment, only add minimal essential system paths at the end
    export PATH="$PATH:/usr/bin:/bin"
    echo "Using minimal system PATH with conda priority"
fi

# Set OpenCL environment for macOS and Linux
if [[ "$OSTYPE" == "darwin"* ]]; then
    # macOS OpenCL via Homebrew
    export PATH="/opt/homebrew/opt/opencl-icd-loader/bin:$PATH"
    export LDFLAGS="-L/opt/homebrew/opt/opencl-icd-loader/lib $LDFLAGS"
    export PKG_CONFIG_PATH="/opt/homebrew/opt/opencl-icd-loader/lib/pkgconfig:$PKG_CONFIG_PATH"
elif [[ "$OSTYPE" == "linux-gnu"* ]]; then
    # Linux OpenCL environment - only if not using conda exclusively
    if [ -z "$CONDA_ENV_PATH" ]; then
        export LD_LIBRARY_PATH="/usr/lib/x86_64-linux-gnu:$LD_LIBRARY_PATH"
        # Add Mesa and NVIDIA OpenCL paths if they exist
        [ -d "/usr/lib/x86_64-linux-gnu/mesa" ] && export LD_LIBRARY_PATH="/usr/lib/x86_64-linux-gnu/mesa:$LD_LIBRARY_PATH"
        [ -d "/usr/lib/nvidia-opencl-icd" ] && export LD_LIBRARY_PATH="/usr/lib/nvidia-opencl-icd:$LD_LIBRARY_PATH"
    else
        echo "Skipping system OpenCL setup - using conda environment exclusively"
        # Only add OpenCL paths that don't conflict with conda Qt libraries
        [ -d "/usr/lib/nvidia-opencl-icd" ] && export LD_LIBRARY_PATH="$LD_LIBRARY_PATH:/usr/lib/nvidia-opencl-icd"
    fi
fi

# Check if external tools exist
if [ -d "$TOOLS_DIR" ]; then
    echo "✓ External tools found at: $TOOLS_DIR"
else
    echo "⚠ Warning: External tools not found at $TOOLS_DIR"
    echo "  Some features may not work. Run './tools/ncnn-vulkan-tools/download_ncnn_tools.sh' to download them."
fi

# Check language files based on OS
if [[ "$OSTYPE" == "darwin"* ]]; then
    # macOS app bundle
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
elif [[ "$OSTYPE" == "linux-gnu"* ]]; then
    # Linux binary
    LANG_FILES_COUNT=$(ls "$APP_PATH"/language_*.qm 2>/dev/null | wc -l)
    if [ "$LANG_FILES_COUNT" -eq 0 ]; then
        echo "⚠ Warning: Language files not found"
        echo "  Copying language files..."
        cp "$SCRIPT_DIR/SRC_v3.41.01-beta/Waifu2x-Extension-QT"/language_*.qm "$APP_PATH/" 2>/dev/null || true
    fi
    
    # Check notification sound file
    if [ ! -f "$APP_PATH/NFSound_Waifu2xEX.mp3" ]; then
        echo "⚠ Warning: Notification sound file not found"
        echo "  Copying sound file..."
        cp "$SCRIPT_DIR/SRC_v3.41.01-beta/NFSound_Waifu2xEX.mp3" "$APP_PATH/" 2>/dev/null || true
    fi
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

# Run the application with clean conda environment
if [[ "$OSTYPE" == "linux-gnu"* ]] && [ -n "$CONDA_ENV_PATH" ]; then
    # Final environment validation and cleanup before launch
    unset LD_PRELOAD
    
    # Ensure conda libraries are used exclusively
    export LD_LIBRARY_PATH="$CONDA_ENV_PATH/lib"
    export QT_PLUGIN_PATH="$CONDA_ENV_PATH/plugins"
    export PATH="$CONDA_ENV_PATH/bin"
    
    # Additional Qt environment isolation
    export QT_QPA_PLATFORM_PLUGIN_PATH="$CONDA_ENV_PATH/plugins/platforms"
    export QT_LOGGING_RULES="*.debug=false"
    
    # Prevent fallback to system Qt
    export QT_ASSUME_STDERR_HAS_CONSOLE=1
    export QT_AUTO_SCREEN_SCALE_FACTOR=0
    
    echo "Running with pure conda environment (final validation)"
    echo "LD_LIBRARY_PATH: $LD_LIBRARY_PATH"
    echo "QT_PLUGIN_PATH: $QT_PLUGIN_PATH"
    echo "PATH: $PATH"
    
    # Verify Qt5 availability one more time
    if command -v qmake &> /dev/null; then
        QT_QMAKE_VERSION=$(qmake -version 2>/dev/null | grep "Qt version" | cut -d' ' -f4)
        echo "Using Qt version: $QT_QMAKE_VERSION"
    fi
fi

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