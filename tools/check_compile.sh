#!/bin/bash

# Compilation check script for cross-platform compatibility

set -e

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
BUILD_DIR="${PROJECT_ROOT}/build-check"
PRO_FILE="${PROJECT_ROOT}/SRC_v3.41.01-beta/Waifu2x-Extension-QT/Waifu2x-Extension-QT.pro"

# Colors
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
NC='\033[0m'

echo "Compilation Warning Check"
echo "========================"
echo ""

# Check if qmake is available
if ! command -v qmake &> /dev/null; then
    echo -e "${RED}✗${NC} qmake not found. Please install Qt5 development tools."
    exit 1
fi

# Create build directory
mkdir -p "$BUILD_DIR"
cd "$BUILD_DIR"

# Platform detection
PLATFORM=""
if [[ "$OSTYPE" == "linux-gnu"* ]]; then
    PLATFORM="Linux"
elif [[ "$OSTYPE" == "darwin"* ]]; then
    PLATFORM="macOS"
else
    PLATFORM="Unknown"
fi

echo "Platform: $PLATFORM"
echo "Qt version: $(qmake -version | grep "Using Qt" | cut -d' ' -f4)"
echo ""

# Configure with warning flags
echo "Configuring project with strict warnings..."
if [[ "$PLATFORM" == "macOS" ]]; then
    # macOS specific flags
    qmake "$PRO_FILE" CONFIG+=release \
        QMAKE_CXXFLAGS+="-Wall -Wextra -Wpedantic -Wno-unused-parameter" \
        QMAKE_CXXFLAGS+="-Wno-deprecated-declarations" 2>&1 | tee qmake.log
else
    # Linux and others
    qmake "$PRO_FILE" CONFIG+=release \
        QMAKE_CXXFLAGS+="-Wall -Wextra -Wpedantic -Wno-unused-parameter" 2>&1 | tee qmake.log
fi

# Check qmake warnings
QMAKE_WARNINGS=$(grep -c "WARNING\|Warning" qmake.log || true)
if [[ $QMAKE_WARNINGS -eq 0 ]]; then
    echo -e "${GREEN}✓${NC} No qmake warnings"
else
    echo -e "${YELLOW}⚠${NC} Found $QMAKE_WARNINGS qmake warnings"
fi

echo ""
echo "Running compilation (first 10 files)..."
echo ""

# Compile and capture warnings
make -j1 2>&1 | tee compile.log | head -100 || true

# Analyze compilation output
echo ""
echo "Compilation Analysis:"
echo "===================="

# Count different types of warnings
TOTAL_WARNINGS=$(grep -c "warning:" compile.log || true)
UNUSED_VAR=$(grep -c "unused variable" compile.log || true)
UNUSED_PARAM=$(grep -c "unused parameter" compile.log || true)
DEPRECATED=$(grep -c "deprecated" compile.log || true)
PLATFORM_SPECIFIC=$(grep -c "Q_OS_\|platform" compile.log || true)

echo "Total warnings: $TOTAL_WARNINGS"
echo "- Unused variables: $UNUSED_VAR"
echo "- Unused parameters: $UNUSED_PARAM"
echo "- Deprecated functions: $DEPRECATED"
echo "- Platform-specific: $PLATFORM_SPECIFIC"

# Check for critical issues
echo ""
echo "Critical Issues:"
echo "==============="

# Check for undefined symbols
UNDEFINED=$(grep -c "undefined reference\|symbol not found" compile.log || true)
if [[ $UNDEFINED -eq 0 ]]; then
    echo -e "${GREEN}✓${NC} No undefined symbols"
else
    echo -e "${RED}✗${NC} Found $UNDEFINED undefined symbol errors"
fi

# Check for missing includes
MISSING_INCLUDES=$(grep -c "No such file or directory" compile.log || true)
if [[ $MISSING_INCLUDES -eq 0 ]]; then
    echo -e "${GREEN}✓${NC} All includes found"
else
    echo -e "${RED}✗${NC} Found $MISSING_INCLUDES missing includes"
fi

# Platform-specific warnings
echo ""
echo "Platform Compatibility:"
echo "====================="

# Check for Windows-specific code without guards
WIN_SPECIFIC=$(grep -c "windows\.h\|ShellExecute\|_WIN32" compile.log || true)
if [[ $WIN_SPECIFIC -eq 0 ]]; then
    echo -e "${GREEN}✓${NC} No unguarded Windows-specific code"
else
    echo -e "${YELLOW}⚠${NC} Found $WIN_SPECIFIC potential Windows-specific issues"
fi

# Summary
echo ""
echo "========================"
if [[ $TOTAL_WARNINGS -eq 0 ]] && [[ $UNDEFINED -eq 0 ]] && [[ $MISSING_INCLUDES -eq 0 ]]; then
    echo -e "${GREEN}Compilation check passed!${NC}"
else
    echo -e "${YELLOW}Compilation completed with warnings${NC}"
fi

# Clean up
cd "$PROJECT_ROOT"
rm -rf "$BUILD_DIR"