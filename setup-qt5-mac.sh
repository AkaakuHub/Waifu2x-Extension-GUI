#!/bin/bash

# Script to permanently setup Qt5 paths on macOS

echo "Setting up Qt5 paths for macOS..."

# Detect shell
if [ -n "$ZSH_VERSION" ]; then
    SHELL_RC="$HOME/.zshrc"
    echo "Detected zsh shell"
elif [ -n "$BASH_VERSION" ]; then
    SHELL_RC="$HOME/.bash_profile"
    echo "Detected bash shell"
else
    echo "Unknown shell. Please manually add Qt5 paths to your shell configuration."
    exit 1
fi

# Check Qt5 installation path
if [ -d "/opt/homebrew/opt/qt@5" ]; then
    QT5_PATH="/opt/homebrew/opt/qt@5"
    echo "Found Qt5 at: $QT5_PATH (Apple Silicon)"
elif [ -d "/usr/local/opt/qt@5" ]; then
    QT5_PATH="/usr/local/opt/qt@5"
    echo "Found Qt5 at: $QT5_PATH (Intel Mac)"
else
    echo "Qt5 not found! Please install it first:"
    echo "brew install qt@5"
    exit 1
fi

# Check if paths are already added
if grep -q "qt@5/bin" "$SHELL_RC" 2>/dev/null; then
    echo "Qt5 paths already configured in $SHELL_RC"
    echo "To apply changes, run: source $SHELL_RC"
    exit 0
fi

# Add Qt5 paths to shell configuration
echo "" >> "$SHELL_RC"
echo "# Qt5 configuration for Waifu2x-Extension-GUI" >> "$SHELL_RC"
echo "export PATH=\"$QT5_PATH/bin:\$PATH\"" >> "$SHELL_RC"
echo "export LDFLAGS=\"-L$QT5_PATH/lib\"" >> "$SHELL_RC"
echo "export CPPFLAGS=\"-I$QT5_PATH/include\"" >> "$SHELL_RC"
echo "export PKG_CONFIG_PATH=\"$QT5_PATH/lib/pkgconfig\"" >> "$SHELL_RC"

echo ""
echo "Qt5 paths have been added to $SHELL_RC"
echo ""
echo "To apply the changes, run:"
echo "  source $SHELL_RC"
echo ""
echo "Or restart your terminal."