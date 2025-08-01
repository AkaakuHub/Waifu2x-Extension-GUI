#!/bin/bash

# Code format and quality check script

set -e

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
SRC_DIR="${PROJECT_ROOT}/SRC_v3.41.01-beta/Waifu2x-Extension-QT"

# Colors
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
NC='\033[0m'

echo "Code Format and Quality Check"
echo "============================"
echo ""

# Check 1: Consistent line endings
echo "1. Checking line endings..."
CRLF_FILES=$(find "$SRC_DIR" \( -name "*.cpp" -o -name "*.h" \) -exec file {} \; | grep -c "CRLF" || true)
if [[ $CRLF_FILES -eq 0 ]]; then
    echo -e "${GREEN}✓${NC} All files use Unix line endings"
else
    echo -e "${YELLOW}⚠${NC} Found $CRLF_FILES files with Windows line endings"
fi

# Check 2: Tab vs spaces consistency
echo ""
echo "2. Checking indentation consistency..."
TAB_FILES=$(find "$SRC_DIR" \( -name "*.cpp" -o -name "*.h" \) -exec grep -l $'\t' {} \; | wc -l || true)
SPACE_FILES=$(find "$SRC_DIR" \( -name "*.cpp" -o -name "*.h" \) -exec grep -l '^    ' {} \; | wc -l || true)
echo "Files using tabs: $TAB_FILES"
echo "Files using spaces: $SPACE_FILES"
if [[ $TAB_FILES -gt 0 ]] && [[ $SPACE_FILES -gt 0 ]]; then
    echo -e "${YELLOW}⚠${NC} Mixed indentation detected"
fi

# Check 3: Trailing whitespace
echo ""
echo "3. Checking for trailing whitespace..."
TRAILING_WS=$(find "$SRC_DIR" \( -name "*.cpp" -o -name "*.h" \) -exec grep -l '[[:space:]]$' {} \; | wc -l || true)
if [[ $TRAILING_WS -eq 0 ]]; then
    echo -e "${GREEN}✓${NC} No trailing whitespace found"
else
    echo -e "${YELLOW}⚠${NC} Found trailing whitespace in $TRAILING_WS files"
fi

# Check 4: Include guard consistency
echo ""
echo "4. Checking include guards..."
HEADERS=$(find "$SRC_DIR" -name "*.h" | wc -l)
GUARDS=$(find "$SRC_DIR" -name "*.h" -exec grep -l "^#ifndef.*_H$" {} \; | wc -l || true)
echo "Header files: $HEADERS"
echo "Files with include guards: $GUARDS"
if [[ $HEADERS -ne $GUARDS ]]; then
    echo -e "${YELLOW}⚠${NC} Some headers may be missing include guards"
fi

# Check 5: Platform-specific code usage
echo ""
echo "5. Checking platform-specific code..."
echo "Files using Q_OS_* macros:"
grep -r "Q_OS_" "$SRC_DIR" --include="*.cpp" --include="*.h" | cut -d: -f1 | sort -u | wc -l || true

echo "Files using platform_utils.h:"
grep -r "platform_utils\.h" "$SRC_DIR" --include="*.cpp" --include="*.h" | wc -l || true

# Check 6: Hardcoded .exe references
echo ""
echo "6. Checking for remaining .exe hardcoding..."
EXE_REFS=$(grep -r "\.exe\"" "$SRC_DIR" --include="*.cpp" --include="*.h" | grep -v "platform_utils.h" | wc -l || true)
if [[ $EXE_REFS -eq 0 ]]; then
    echo -e "${GREEN}✓${NC} No hardcoded .exe references found"
else
    echo -e "${YELLOW}⚠${NC} Found $EXE_REFS potential .exe references"
    grep -r "\.exe\"" "$SRC_DIR" --include="*.cpp" --include="*.h" | grep -v "platform_utils.h" | head -5
fi

# Check 7: Windows-only API usage
echo ""
echo "7. Checking for Windows-only APIs..."
WIN_API=$(grep -r "ShellExecute\|taskkill\|nircmd" "$SRC_DIR" --include="*.cpp" --include="*.h" | wc -l || true)
if [[ $WIN_API -eq 0 ]]; then
    echo -e "${GREEN}✓${NC} No Windows-only APIs found"
else
    echo -e "${YELLOW}⚠${NC} Found $WIN_API Windows-only API calls"
fi

echo ""
echo "============================"
echo "Check complete!"