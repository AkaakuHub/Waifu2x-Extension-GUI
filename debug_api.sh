#!/bin/bash

# Debug script for GitHub API and dependency testing
echo "================================================"
echo "Waifu2x-Extension-GUI Dependency Debug Tool"
echo "================================================"
echo ""

# Test conda environment
echo "=== Conda Environment Test ==="
if command -v conda &> /dev/null; then
    echo "✓ Conda found: $(which conda)"
    conda --version
    if conda env list | grep -q "waifu2x-gui"; then
        echo "✓ waifu2x-gui environment exists"
        CONDA_ENV_PATH=$(conda env list | grep "waifu2x-gui" | awk '{print $2}')
        echo "  Path: $CONDA_ENV_PATH"
    else
        echo "❌ waifu2x-gui environment not found"
    fi
else
    echo "❌ Conda not found"
fi
echo ""

# Test conda packages
if [ -n "$CONDA_ENV_PATH" ]; then
    echo "=== Conda Package Test ==="
    for pkg in ffmpeg imagemagick jq wget; do
        if [ -f "$CONDA_ENV_PATH/bin/$pkg" ]; then
            echo "✓ $pkg: $CONDA_ENV_PATH/bin/$pkg"
            "$CONDA_ENV_PATH/bin/$pkg" --version 2>/dev/null | head -1 || echo "  (version check failed)"
        else
            echo "❌ $pkg: Not found in conda environment"
        fi
    done
    echo ""
fi

# Test GitHub API access
echo "=== GitHub API Test ==="
echo "Testing GitHub API access..."

API_URL="https://api.github.com/repos/nihui/waifu2x-ncnn-vulkan/releases/latest"
echo "URL: $API_URL"

# Test with curl
echo "Curl test:"
RESPONSE=$(curl -s -w "HTTP_CODE:%{http_code}" -H "User-Agent: Waifu2x-Extension-GUI-Debug" "$API_URL")
HTTP_CODE=$(echo "$RESPONSE" | grep -o "HTTP_CODE:[0-9]*" | cut -d: -f2)
CONTENT=$(echo "$RESPONSE" | sed 's/HTTP_CODE:[0-9]*$//')

echo "  HTTP Code: $HTTP_CODE"

if [ "$HTTP_CODE" = "200" ]; then
    echo "✓ API access successful"
    
    # Test jq parsing
    if echo "$CONTENT" | jq -r '.tag_name' &> /dev/null; then
        TAG_NAME=$(echo "$CONTENT" | jq -r '.tag_name')
        echo "✓ JSON parsing successful"
        echo "  Latest tag: $TAG_NAME"
        
        # Test asset filtering
        ASSETS_COUNT=$(echo "$CONTENT" | jq -r '.assets | length')
        echo "  Assets found: $ASSETS_COUNT"
        
        if [ "$ASSETS_COUNT" -gt 0 ]; then
            echo "  Asset names:"
            echo "$CONTENT" | jq -r '.assets[].name' | head -5 | sed 's/^/    /'
            
            # Look for linux-specific assets
            LINUX_ASSETS=$(echo "$CONTENT" | jq -r '.assets[] | select(.name | test("ubuntu|linux")) | .name')
            if [ -n "$LINUX_ASSETS" ]; then
                echo "  Linux assets found:"
                echo "$LINUX_ASSETS" | sed 's/^/    /'
            else
                echo "  ❌ No Linux assets found"
            fi
        fi
    else
        echo "❌ JSON parsing failed"
        echo "Response content (first 200 chars):"
        echo "$CONTENT" | head -c 200
    fi
elif [ "$HTTP_CODE" = "403" ]; then
    echo "❌ API rate limit exceeded (HTTP 403)"
    echo "Response:"
    echo "$CONTENT" | head -c 200
elif [ "$HTTP_CODE" = "000" ]; then
    echo "❌ Network error (no connection)"
else
    echo "❌ HTTP error: $HTTP_CODE"
    echo "Response:"
    echo "$CONTENT" | head -c 200
fi
echo ""

# Test system tools
echo "=== System Tools Test ==="
for tool in curl wget jq; do
    if command -v $tool &> /dev/null; then
        echo "✓ $tool: $(which $tool)"
        $tool --version 2>/dev/null | head -1 || echo "  (version check failed)"
    else
        echo "❌ $tool: Not found"
    fi
done
echo ""

# Test network connectivity
echo "=== Network Test ==="
if ping -c 1 github.com &> /dev/null; then
    echo "✓ GitHub connectivity: OK"
else
    echo "❌ GitHub connectivity: Failed"
fi

if ping -c 1 api.github.com &> /dev/null; then
    echo "✓ GitHub API connectivity: OK"
else
    echo "❌ GitHub API connectivity: Failed"
fi
echo ""

echo "=== Debug Complete ==="
echo "Please share this output to help debug the installation issues."