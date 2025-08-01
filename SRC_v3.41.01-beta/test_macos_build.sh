#!/bin/bash
# macOS build test script for Waifu2x-Extension-GUI

echo "=== Waifu2x-Extension-GUI macOS Build Test ==="
echo "Testing cross-platform compatibility on macOS..."
echo

# Colors for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
NC='\033[0m' # No Color

# Check if we're on macOS
if [[ "$OSTYPE" != "darwin"* ]]; then
    echo -e "${YELLOW}Warning: This script is designed for macOS but running on $OSTYPE${NC}"
fi

# Check Qt installation
echo "1. Checking Qt installation..."
if command -v qmake &> /dev/null; then
    echo -e "${GREEN}✓ qmake found: $(qmake -v | grep 'Using Qt')${NC}"
else
    echo -e "${RED}✗ qmake not found. Please install Qt.${NC}"
    echo "   Install via Homebrew: brew install qt5"
    echo "   Or download from: https://www.qt.io/download"
    exit 1
fi

# Create build directory
BUILD_DIR="build-macos"
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
if make -j$(sysctl -n hw.ncpu); then
    echo -e "${GREEN}✓ Build completed successfully${NC}"
else
    echo -e "${RED}✗ Build failed${NC}"
    exit 1
fi

# Check if app bundle was created
echo
echo "5. Checking build output..."
APP_NAME="Waifu2x-Extension-QT.app"
if [ -d "$APP_NAME" ]; then
    echo -e "${GREEN}✓ App bundle created successfully${NC}"
    echo "   Size: $(du -sh $APP_NAME | cut -f1)"
    echo "   Contents:"
    ls -la $APP_NAME/Contents/
    
    # Check executable
    if [ -f "$APP_NAME/Contents/MacOS/Waifu2x-Extension-QT" ]; then
        echo -e "${GREEN}✓ Executable found in app bundle${NC}"
    else
        echo -e "${RED}✗ Executable not found in app bundle${NC}"
    fi
else
    echo -e "${YELLOW}! App bundle not created, checking for standalone executable${NC}"
    if [ -f "Waifu2x-Extension-QT" ]; then
        echo -e "${GREEN}✓ Standalone executable created${NC}"
        echo "   Size: $(du -h Waifu2x-Extension-QT | cut -f1)"
    else
        echo -e "${RED}✗ No executable found${NC}"
        exit 1
    fi
fi

# Deploy Qt frameworks (if macdeployqt is available)
echo
echo "6. Deploying Qt frameworks..."
if command -v macdeployqt &> /dev/null; then
    if [ -d "$APP_NAME" ]; then
        macdeployqt $APP_NAME
        echo -e "${GREEN}✓ Qt frameworks deployed${NC}"
    else
        echo -e "${YELLOW}! No app bundle to deploy frameworks to${NC}"
    fi
else
    echo -e "${YELLOW}! macdeployqt not found. Frameworks not deployed.${NC}"
    echo "   App may not run on other machines without Qt installed."
fi

# Basic runtime test
echo
echo "7. Basic runtime test..."
if [ -d "$APP_NAME" ]; then
    EXECUTABLE="$APP_NAME/Contents/MacOS/Waifu2x-Extension-QT"
else
    EXECUTABLE="./Waifu2x-Extension-QT"
fi

if [ -f "$EXECUTABLE" ]; then
    echo "   Testing executable: $EXECUTABLE"
    # Note: --version flag might not be implemented
    echo -e "${YELLOW}! Runtime test skipped (GUI application)${NC}"
else
    echo -e "${RED}✗ Executable not accessible${NC}"
fi

echo
echo "=== macOS Build Test Summary ==="
echo -e "${GREEN}✓ Build tests completed!${NC}"
echo
echo "To run the application:"
echo "  cd $BUILD_DIR"
if [ -d "$APP_NAME" ]; then
    echo "  open $APP_NAME"
else
    echo "  ./Waifu2x-Extension-QT"
fi
echo
echo "Note: The application requires:"
echo "  - External tools (ffmpeg, etc.) for full functionality"
echo "  - Proper code signing for distribution"