#!/bin/bash

# Final validation script for cross-platform functionality

set -e

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
SRC_DIR="${PROJECT_ROOT}/SRC_v3.41.01-beta/Waifu2x-Extension-QT"

# Colors
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m'

echo "Final Cross-Platform Validation"
echo "=============================="
echo ""

# Test results
PASSED=0
FAILED=0

# Function to run test
run_test() {
    local test_name=$1
    local test_command=$2
    
    echo -n "Testing ${test_name}... "
    if eval "$test_command" &>/dev/null; then
        echo -e "${GREEN}✓${NC}"
        ((PASSED++))
    else
        echo -e "${RED}✗${NC}"
        ((FAILED++))
    fi
}

# 1. Platform Utils Integration
echo -e "${BLUE}1. Platform Utils Integration${NC}"
echo "==============================="

run_test "platform_utils.h exists" "test -f '${SRC_DIR}/platform_utils.h'"
run_test "binary_finder.h exists" "test -f '${SRC_DIR}/binary_finder.h'"

# Count files using platform utils
PLATFORM_UTILS_USAGE=$(grep -r "platform_utils.h" "$SRC_DIR" --include="*.cpp" | wc -l || true)
echo "Files using platform_utils.h: $PLATFORM_UTILS_USAGE"

# 2. Executable Name Macros
echo ""
echo -e "${BLUE}2. Executable Name Macros${NC}"
echo "========================="

# Check macro usage
MACROS=(
    "FFMPEG_NAME"
    "WAIFU2X_NCNN_VULKAN_NAME"
    "WAIFU2X_CAFFE_NAME"
    "WAIFU2X_CONVERTER_NAME"
    "ANIME4K_NAME"
    "REALSR_NCNN_VULKAN_NAME"
)

for macro in "${MACROS[@]}"; do
    count=$(grep -r "$macro" "$SRC_DIR" --include="*.cpp" | wc -l || true)
    if [[ $count -gt 0 ]]; then
        echo -e "${GREEN}✓${NC} $macro used $count times"
    else
        echo -e "${YELLOW}⚠${NC} $macro not used"
    fi
done

# 3. Platform-Specific Code Guards
echo ""
echo -e "${BLUE}3. Platform-Specific Code Guards${NC}"
echo "================================"

# Check for Q_OS_* usage
Q_OS_WIN=$(grep -r "Q_OS_WIN" "$SRC_DIR" --include="*.cpp" --include="*.h" | wc -l || true)
Q_OS_MAC=$(grep -r "Q_OS_MAC" "$SRC_DIR" --include="*.cpp" --include="*.h" | wc -l || true)
Q_OS_LINUX=$(grep -r "Q_OS_LINUX" "$SRC_DIR" --include="*.cpp" --include="*.h" | wc -l || true)

echo "Q_OS_WIN guards: $Q_OS_WIN"
echo "Q_OS_MAC guards: $Q_OS_MAC"
echo "Q_OS_LINUX guards: $Q_OS_LINUX"

# 4. Cross-Platform Functions
echo ""
echo -e "${BLUE}4. Cross-Platform Functions${NC}"
echo "==========================="

# Check usage of platform functions
FUNCTIONS=(
    "PlatformUtils::killProcess"
    "PlatformUtils::openFolder"
    "PlatformUtils::systemSleep"
    "PlatformUtils::monitorOff"
    "PlatformUtils::getExecutableName"
)

for func in "${FUNCTIONS[@]}"; do
    count=$(grep -r "$func" "$SRC_DIR" --include="*.cpp" | wc -l || true)
    if [[ $count -gt 0 ]]; then
        echo -e "${GREEN}✓${NC} $func used $count times"
    else
        echo -e "${YELLOW}⚠${NC} $func not used"
    fi
done

# 5. Windows-Specific API Check
echo ""
echo -e "${BLUE}5. Windows-Specific API Check${NC}"
echo "============================="

# Check for direct Windows API calls
WIN_APIS=(
    "ShellExecute"
    "taskkill"
    "nircmd"
    "explorer.exe"
)

FOUND_WIN_API=0
for api in "${WIN_APIS[@]}"; do
    count=$(grep -r "$api" "$SRC_DIR" --include="*.cpp" | grep -v "platform_utils" | wc -l || true)
    if [[ $count -gt 0 ]]; then
        echo -e "${RED}✗${NC} Found $count instances of $api"
        ((FOUND_WIN_API++))
    fi
done

if [[ $FOUND_WIN_API -eq 0 ]]; then
    echo -e "${GREEN}✓${NC} No direct Windows API calls found"
fi

# 6. Build System Configuration
echo ""
echo -e "${BLUE}6. Build System Configuration${NC}"
echo "============================="

run_test ".pro file exists" "test -f '${PROJECT_ROOT}/SRC_v3.41.01-beta/Waifu2x-Extension-QT/Waifu2x-Extension-QT.pro'"
run_test "Platform icons configured" "grep -q 'Q_OS_' '${PROJECT_ROOT}/SRC_v3.41.01-beta/Waifu2x-Extension-QT/Waifu2x-Extension-QT.pro'"

# 7. External Tools Configuration
echo ""
echo -e "${BLUE}7. External Tools Configuration${NC}"
echo "==============================="

run_test "Tools directory exists" "test -d '${PROJECT_ROOT}/tools'"
run_test "Install dependencies script" "test -x '${PROJECT_ROOT}/tools/install_dependencies.sh'"
run_test "Binary setup script" "test -x '${PROJECT_ROOT}/tools/setup_binary_links.sh'"

# 8. Testing Infrastructure
echo ""
echo -e "${BLUE}8. Testing Infrastructure${NC}"
echo "========================="

run_test "Build test script" "test -x '${PROJECT_ROOT}/test/test_build.sh'"
run_test "Tools test script" "test -x '${PROJECT_ROOT}/test/test_tools.sh'"

# 9. Packaging Scripts
echo ""
echo -e "${BLUE}9. Packaging Scripts${NC}"
echo "==================="

run_test "AppImage script" "test -x '${PROJECT_ROOT}/packaging/create_appimage.sh'"
run_test "macOS bundle script" "test -x '${PROJECT_ROOT}/packaging/create_macos_bundle.sh'"
run_test "Install script" "test -x '${PROJECT_ROOT}/packaging/install.sh'"

# Summary
echo ""
echo "=============================="
echo -e "${BLUE}Validation Summary${NC}"
echo "=============================="
echo -e "Tests Passed: ${GREEN}$PASSED${NC}"
echo -e "Tests Failed: ${RED}$FAILED${NC}"
echo ""

if [[ $FAILED -eq 0 ]]; then
    echo -e "${GREEN}✓ All validation tests passed!${NC}"
    echo ""
    echo "The project is ready for cross-platform compilation."
else
    echo -e "${YELLOW}⚠ Some validation tests failed.${NC}"
    echo ""
    echo "Please review the failed tests above."
fi

# Recommendations
echo ""
echo -e "${BLUE}Next Steps:${NC}"
echo "1. Run ./tools/install_dependencies.sh on target platform"
echo "2. Download/build external tools with scripts in tools/"
echo "3. Run qmake && make to build the application"
echo "4. Test with sample files in Samples/"
echo "5. Create platform-specific packages with packaging scripts"