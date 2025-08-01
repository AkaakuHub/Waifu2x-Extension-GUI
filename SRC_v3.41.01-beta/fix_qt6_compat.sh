#!/bin/bash
# Script to fix Qt6 compatibility issues

echo "=== Fixing Qt6 Compatibility Issues ==="
echo

# Directory to work in
WORK_DIR="Waifu2x-Extension-QT"
cd "$WORK_DIR" || exit 1

# List of files that need qt_compat.h include
FILES_NEED_COMPAT=(
    "mainwindow.cpp"
    "settings.cpp"
    "checkupdate.cpp"
    "video.cpp"
    "Frame_Interpolation.cpp"
    "waifu2x_ncnn_vulkan.cpp"
    "waifu2x_caffe.cpp"
    "waifu2x_converter.cpp"
    "realsr_ncnn_vulkan.cpp"
    "srmd_ncnn_vulkan.cpp"
    "srmd-cuda.cpp"
    "Anime4K.cpp"
)

echo "1. Adding qt_compat.h includes..."
for file in "${FILES_NEED_COMPAT[@]}"; do
    if [ -f "$file" ]; then
        # Check if qt_compat.h is already included
        if ! grep -q "qt_compat.h" "$file"; then
            # Add include after platform_utils.h if present, otherwise after mainwindow.h
            if grep -q "platform_utils.h" "$file"; then
                sed -i.bak '/#include "platform_utils.h"/a\
#include "qt_compat.h"' "$file"
            else
                sed -i.bak '/#include "mainwindow.h"/a\
#include "qt_compat.h"' "$file"
            fi
            echo "  ✓ Added qt_compat.h to $file"
        else
            echo "  - qt_compat.h already included in $file"
        fi
    fi
done

echo
echo "2. Replacing QTextCodec usage..."

# Replace all occurrences of setIniCodec
find . -name "*.cpp" -type f -exec grep -l "setIniCodec(QTextCodec::codecForName" {} \; | while read file; do
    # Create backup
    cp "$file" "$file.qt6bak"
    
    # Replace the pattern
    sed -i '' 's/configIniRead->setIniCodec(QTextCodec::codecForName("UTF-8"));/setSettingsCodec(configIniRead);/g' "$file"
    sed -i '' 's/configIniWrite->setIniCodec(QTextCodec::codecForName("UTF-8"));/setSettingsCodec(configIniWrite);/g' "$file"
    sed -i '' 's/configIniRead_ver->setIniCodec(QTextCodec::codecForName("UTF-8"));/setSettingsCodec(configIniRead_ver);/g' "$file"
    sed -i '' 's/configIniRead_new->setIniCodec(QTextCodec::codecForName("UTF-8"));/setSettingsCodec(configIniRead_new);/g' "$file"
    sed -i '' 's/configIniRead_old->setIniCodec(QTextCodec::codecForName("UTF-8"));/setSettingsCodec(configIniRead_old);/g' "$file"
    
    echo "  ✓ Fixed QTextCodec usage in $file"
done

echo
echo "3. Cleaning up backup files..."
find . -name "*.bak" -type f -delete
find . -name "*.qt6bak" -type f -delete

echo
echo "=== Qt6 Compatibility Fixes Complete ==="
echo
echo "Note: The project should now compile with both Qt5 and Qt6."
echo "Qt6 handles UTF-8 by default for QSettings."