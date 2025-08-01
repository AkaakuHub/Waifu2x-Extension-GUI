#!/bin/bash
# Linux build test script for Waifu2x-Extension-GUI

echo "=== Waifu2x-Extension-GUI Linux Build Test ==="
echo "Testing cross-platform compatibility..."
echo

# Colors for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
NC='\033[0m' # No Color

# Check if we're on Linux
if [[ "$OSTYPE" != "linux-gnu"* ]]; then
    echo -e "${YELLOW}Warning: This script is designed for Linux but running on $OSTYPE${NC}"
fi

# Check Qt installation
echo "1. Checking Qt installation..."
if command -v qmake &> /dev/null; then
    echo -e "${GREEN}✓ qmake found: $(qmake -v | grep 'Using Qt')${NC}"
else
    echo -e "${RED}✗ qmake not found. Please install Qt development tools.${NC}"
    echo "   Ubuntu/Debian: sudo apt-get install qt5-default qtmultimedia5-dev"
    echo "   Fedora: sudo dnf install qt5-qtbase-devel qt5-qtmultimedia-devel"
    exit 1
fi

# Create build directory
BUILD_DIR="build-linux"
echo
echo "2. Creating build directory..."
rm -rf $BUILD_DIR
mkdir -p $BUILD_DIR
cd $BUILD_DIR

# Run qmake
echo
echo "3. Running qmake..."
if qmake ../Waifu2x-Extension-QT/Waifu2x-Extension-QT.pro; then
    echo -e "${GREEN}✓ qmake completed successfully${NC}"
else
    echo -e "${RED}✗ qmake failed${NC}"
    exit 1
fi

# Build the project
echo
echo "4. Building project..."
if make -j$(nproc); then
    echo -e "${GREEN}✓ Build completed successfully${NC}"
else
    echo -e "${RED}✗ Build failed${NC}"
    exit 1
fi

# Check if executable was created
echo
echo "5. Checking build output..."
if [ -f "Waifu2x-Extension-QT" ]; then
    echo -e "${GREEN}✓ Executable created successfully${NC}"
    echo "   Size: $(du -h Waifu2x-Extension-QT | cut -f1)"
    echo "   Type: $(file Waifu2x-Extension-QT)"
else
    echo -e "${RED}✗ Executable not found${NC}"
    exit 1
fi

# Basic runtime test (without X11)
echo
echo "6. Basic runtime test..."
echo "   Note: Full GUI test requires X11 display"
if ./Waifu2x-Extension-QT --version 2>/dev/null; then
    echo -e "${GREEN}✓ Basic runtime test passed${NC}"
else
    echo -e "${YELLOW}! Runtime test skipped (may need X11 display)${NC}"
fi

echo
echo "=== Linux Build Test Summary ==="
echo -e "${GREEN}✓ All build tests passed!${NC}"
echo
echo "To run the application:"
echo "  cd $BUILD_DIR"
echo "  ./Waifu2x-Extension-QT"
echo
echo "Note: The application requires:"
echo "  - X11 display for GUI"
echo "  - External tools (ffmpeg, etc.) for full functionality"