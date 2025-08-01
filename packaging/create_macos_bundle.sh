#!/bin/bash

# Script to create macOS application bundle

set -e

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
BUILD_DIR="${PROJECT_ROOT}/build-macos"
APP_NAME="Waifu2x-Extension-GUI"
APP_BUNDLE="${BUILD_DIR}/${APP_NAME}.app"

# Check if running on macOS
if [[ "$OSTYPE" != "darwin"* ]]; then
    echo "macOS bundle can only be created on macOS"
    exit 1
fi

echo "Creating macOS bundle for ${APP_NAME}..."

# Create build directory
mkdir -p "${BUILD_DIR}"
cd "${BUILD_DIR}"

# Build the application
echo "Building application..."
qmake "${PROJECT_ROOT}/SRC_v3.41.01-beta/Waifu2x-Extension-QT/Waifu2x-Extension-QT.pro" \
    CONFIG+=release \
    CONFIG+=x86_64 \
    CONFIG+=arm64

make -j$(sysctl -n hw.ncpu)

# The app bundle should be created by qmake/make
if [[ ! -d "${APP_BUNDLE}" ]]; then
    echo "Error: App bundle not created"
    exit 1
fi

# Copy external tools into the bundle
echo "Copying external tools..."
TOOLS_DIR="${APP_BUNDLE}/Contents/MacOS/tools"
mkdir -p "${TOOLS_DIR}"

if [[ -d "${PROJECT_ROOT}/tools/bin" ]]; then
    cp -r "${PROJECT_ROOT}/tools/bin"/* "${TOOLS_DIR}/"
fi

# Use macdeployqt to bundle Qt dependencies
echo "Running macdeployqt..."
macdeployqt "${APP_BUNDLE}" -dmg

# Sign the application (if certificates are available)
if security find-identity -p codesigning &>/dev/null; then
    echo "Signing application..."
    IDENTITY=$(security find-identity -p codesigning | grep "Developer ID Application" | head -1 | awk '{print $2}')
    if [[ -n "${IDENTITY}" ]]; then
        codesign --deep --force --verify --verbose --sign "${IDENTITY}" "${APP_BUNDLE}"
        echo "Application signed with identity: ${IDENTITY}"
    else
        echo "No Developer ID Application certificate found, skipping signing"
    fi
else
    echo "No code signing certificates found, skipping signing"
fi

# Create a DMG
echo "Creating DMG..."
DMG_NAME="${APP_NAME}-macOS.dmg"
hdiutil create -volname "${APP_NAME}" -srcfolder "${APP_BUNDLE}" -ov -format UDZO "${BUILD_DIR}/${DMG_NAME}"

echo "macOS bundle created: ${APP_BUNDLE}"
echo "DMG created: ${BUILD_DIR}/${DMG_NAME}"