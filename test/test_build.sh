#!/bin/bash

# Test script to verify cross-platform build

set -e

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
TEST_BUILD_DIR="${PROJECT_ROOT}/build-test"

# Colors for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
NC='\033[0m' # No Color

# Test results
PASSED=0
FAILED=0

# Function to print test result
print_result() {
    local test_name=$1
    local result=$2
    
    if [[ $result -eq 0 ]]; then
        echo -e "${GREEN}✓${NC} ${test_name}"
        ((PASSED++))
    else
        echo -e "${RED}✗${NC} ${test_name}"
        ((FAILED++))
    fi
}

# Function to run test
run_test() {
    local test_name=$1
    local test_command=$2
    
    echo -n "Testing ${test_name}... "
    if eval "$test_command" &>/dev/null; then
        print_result "$test_name" 0
    else
        print_result "$test_name" 1
    fi
}

echo "Running Waifu2x-Extension-GUI Cross-Platform Build Tests"
echo "======================================================="
echo ""

# Test 1: Check Qt installation
echo "1. Checking Qt installation..."
run_test "qmake availability" "command -v qmake"
run_test "Qt version" "qmake -version"

# Test 2: Check build tools
echo ""
echo "2. Checking build tools..."
run_test "CMake availability" "command -v cmake"
run_test "Make availability" "command -v make"
run_test "C++ compiler" "command -v g++ || command -v clang++"

# Test 3: Check project structure
echo ""
echo "3. Checking project structure..."
run_test "Main project file" "test -f '${PROJECT_ROOT}/SRC_v3.41.01-beta/Waifu2x-Extension-QT/Waifu2x-Extension-QT.pro'"
run_test "Platform utils header" "test -f '${PROJECT_ROOT}/SRC_v3.41.01-beta/Waifu2x-Extension-QT/platform_utils.h'"
run_test "Binary finder header" "test -f '${PROJECT_ROOT}/SRC_v3.41.01-beta/Waifu2x-Extension-QT/binary_finder.h'"

# Test 4: Test build
echo ""
echo "4. Testing build process..."
mkdir -p "${TEST_BUILD_DIR}"
cd "${TEST_BUILD_DIR}"

if qmake "${PROJECT_ROOT}/SRC_v3.41.01-beta/Waifu2x-Extension-QT/Waifu2x-Extension-QT.pro" CONFIG+=release &>/dev/null; then
    print_result "qmake configuration" 0
    
    # Try to build (just run make with -n to check if it would work)
    if make -n &>/dev/null; then
        print_result "Makefile generation" 0
    else
        print_result "Makefile generation" 1
    fi
else
    print_result "qmake configuration" 1
fi

# Test 5: Check external tools
echo ""
echo "5. Checking external tools setup..."
run_test "Tools directory" "test -d '${PROJECT_ROOT}/tools'"
run_test "Install dependencies script" "test -x '${PROJECT_ROOT}/tools/install_dependencies.sh'"
run_test "ncnn-vulkan download script" "test -x '${PROJECT_ROOT}/tools/ncnn-vulkan-tools/download_ncnn_tools.sh'"
run_test "Anime4K/waifu2x build script" "test -x '${PROJECT_ROOT}/tools/build_anime4k_waifu2x.sh'"

# Test 6: Check packaging scripts
echo ""
echo "6. Checking packaging scripts..."
run_test "Install script" "test -x '${PROJECT_ROOT}/packaging/install.sh'"
run_test "AppImage script" "test -x '${PROJECT_ROOT}/packaging/create_appimage.sh'"
run_test "macOS bundle script" "test -x '${PROJECT_ROOT}/packaging/create_macos_bundle.sh'"

# Test 7: Platform-specific checks
echo ""
echo "7. Platform-specific checks..."
PLATFORM="Unknown"
if [[ "$OSTYPE" == "linux-gnu"* ]]; then
    PLATFORM="Linux"
    run_test "Linux platform detected" "true"
elif [[ "$OSTYPE" == "darwin"* ]]; then
    PLATFORM="macOS"
    run_test "macOS platform detected" "true"
else
    run_test "Supported platform" "false"
fi

# Clean up
cd "${PROJECT_ROOT}"
rm -rf "${TEST_BUILD_DIR}"

# Summary
echo ""
echo "======================================================="
echo "Test Summary:"
echo "Platform: ${PLATFORM}"
echo -e "Passed: ${GREEN}${PASSED}${NC}"
echo -e "Failed: ${RED}${FAILED}${NC}"

if [[ ${FAILED} -eq 0 ]]; then
    echo -e "${GREEN}All tests passed!${NC}"
    exit 0
else
    echo -e "${RED}Some tests failed!${NC}"
    exit 1
fi