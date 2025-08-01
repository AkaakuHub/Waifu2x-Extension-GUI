#!/bin/bash

# Test script to verify external tools functionality

set -e

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
TOOLS_BIN="${PROJECT_ROOT}/tools/bin"
TEST_IMAGE="${PROJECT_ROOT}/Samples/image/1_Original.jpg"

# Colors for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
NC='\033[0m' # No Color

# Test results
PASSED=0
FAILED=0
WARNINGS=0

# Function to print test result
print_result() {
    local test_name=$1
    local result=$2
    local is_warning=${3:-0}
    
    if [[ $result -eq 0 ]]; then
        echo -e "${GREEN}✓${NC} ${test_name}"
        ((PASSED++))
    elif [[ $is_warning -eq 1 ]]; then
        echo -e "${YELLOW}⚠${NC} ${test_name} (optional)"
        ((WARNINGS++))
    else
        echo -e "${RED}✗${NC} ${test_name}"
        ((FAILED++))
    fi
}

# Function to test tool availability
test_tool() {
    local tool_name=$1
    local is_optional=${2:-0}
    
    echo -n "Testing ${tool_name}... "
    
    # Check in tools/bin first
    if [[ -x "${TOOLS_BIN}/${tool_name}" ]]; then
        print_result "${tool_name} found in tools/bin" 0
        return 0
    fi
    
    # Check system path
    if command -v "$tool_name" &>/dev/null; then
        print_result "${tool_name} found in system" 0
        return 0
    fi
    
    # Not found
    print_result "${tool_name} not found" 1 $is_optional
    return 1
}

# Function to test tool functionality
test_tool_functionality() {
    local tool_path=$1
    local tool_name=$2
    local test_args=$3
    
    echo -n "Testing ${tool_name} functionality... "
    
    if [[ ! -f "$tool_path" ]]; then
        print_result "${tool_name} executable not found" 1
        return 1
    fi
    
    # Try to run with test arguments
    if "$tool_path" $test_args &>/dev/null; then
        print_result "${tool_name} runs successfully" 0
        return 0
    else
        # Some tools exit with non-zero even on help
        local exit_code=$?
        if [[ $exit_code -eq 1 ]] || [[ $exit_code -eq 2 ]]; then
            print_result "${tool_name} runs (exit code $exit_code)" 0
            return 0
        else
            print_result "${tool_name} failed (exit code $exit_code)" 1
            return 1
        fi
    fi
}

echo "Testing Waifu2x-Extension-GUI External Tools"
echo "============================================"
echo ""

# Test 1: Check tools directory structure
echo "1. Checking tools directory structure..."
if [[ -d "${PROJECT_ROOT}/tools" ]]; then
    print_result "Tools directory exists" 0
else
    print_result "Tools directory exists" 1
fi

if [[ -d "${TOOLS_BIN}" ]]; then
    print_result "Tools bin directory exists" 0
else
    print_result "Tools bin directory exists" 1
    echo -e "${YELLOW}Note: Run download/build scripts first${NC}"
fi

# Test 2: Check ncnn-vulkan tools
echo ""
echo "2. Checking ncnn-vulkan tools..."
NCNN_TOOLS=("waifu2x-ncnn-vulkan" "srmd-ncnn-vulkan" "realsr-ncnn-vulkan" 
            "realcugan-ncnn-vulkan" "rife-ncnn-vulkan" "cain-ncnn-vulkan" 
            "dain-ncnn-vulkan")

for tool in "${NCNN_TOOLS[@]}"; do
    test_tool "$tool" 1  # Mark as optional
done

# Test 3: Check other upscaling tools
echo ""
echo "3. Checking other upscaling tools..."
test_tool "Anime4KCPP" 1
test_tool "waifu2x-converter-cpp" 1

# Test 4: Check system tools
echo ""
echo "4. Checking required system tools..."
test_tool "ffmpeg" 0
test_tool "ffprobe" 0

# Test 5: Test tool functionality (if available)
echo ""
echo "5. Testing tool functionality..."

# Test waifu2x-ncnn-vulkan if available
if [[ -x "${TOOLS_BIN}/waifu2x-ncnn-vulkan" ]] || command -v waifu2x-ncnn-vulkan &>/dev/null; then
    WAIFU2X_PATH="${TOOLS_BIN}/waifu2x-ncnn-vulkan"
    if [[ ! -x "$WAIFU2X_PATH" ]]; then
        WAIFU2X_PATH=$(command -v waifu2x-ncnn-vulkan)
    fi
    test_tool_functionality "$WAIFU2X_PATH" "waifu2x-ncnn-vulkan" "-h"
fi

# Test ffmpeg
if command -v ffmpeg &>/dev/null; then
    test_tool_functionality "$(command -v ffmpeg)" "ffmpeg" "-version"
fi

# Test 6: Check for test image
echo ""
echo "6. Checking test resources..."
if [[ -f "$TEST_IMAGE" ]]; then
    print_result "Test image available" 0
else
    print_result "Test image available" 1
fi

# Test 7: Environment check
echo ""
echo "7. Checking environment..."

# Check Vulkan
if command -v vulkaninfo &>/dev/null; then
    if vulkaninfo &>/dev/null; then
        print_result "Vulkan runtime" 0
    else
        print_result "Vulkan runtime" 1 1
    fi
else
    print_result "Vulkan runtime (vulkaninfo not found)" 1 1
fi

# Check OpenCL
if command -v clinfo &>/dev/null; then
    if clinfo &>/dev/null; then
        print_result "OpenCL runtime" 0
    else
        print_result "OpenCL runtime" 1 1
    fi
else
    print_result "OpenCL runtime (clinfo not found)" 1 1
fi

# Summary
echo ""
echo "============================================"
echo "Test Summary:"
echo -e "Passed: ${GREEN}${PASSED}${NC}"
echo -e "Failed: ${RED}${FAILED}${NC}"
echo -e "Warnings: ${YELLOW}${WARNINGS}${NC}"

echo ""
echo "Notes:"
echo "- Optional tools can be installed later"
echo "- Run tools/install_dependencies.sh for system packages"
echo "- Run tools/ncnn-vulkan-tools/download_ncnn_tools.sh for ncnn tools"
echo "- Run tools/build_anime4k_waifu2x.sh to build from source"

if [[ ${FAILED} -eq 0 ]]; then
    echo -e "${GREEN}Core functionality tests passed!${NC}"
    exit 0
else
    echo -e "${YELLOW}Some required components are missing${NC}"
    exit 1
fi