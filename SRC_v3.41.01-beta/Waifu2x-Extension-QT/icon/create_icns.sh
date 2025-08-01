#!/bin/bash
# Create macOS icon file from PNG

if [ -f "icon_main.png" ]; then
    echo "Creating icon_main.icns from icon_main.png..."
    
    # Create iconset directory
    mkdir -p icon_main.iconset
    
    # Create different sized icons
    sips -z 16 16     icon_main.png --out icon_main.iconset/icon_16x16.png
    sips -z 32 32     icon_main.png --out icon_main.iconset/icon_16x16@2x.png
    sips -z 32 32     icon_main.png --out icon_main.iconset/icon_32x32.png
    sips -z 64 64     icon_main.png --out icon_main.iconset/icon_32x32@2x.png
    sips -z 128 128   icon_main.png --out icon_main.iconset/icon_128x128.png
    sips -z 256 256   icon_main.png --out icon_main.iconset/icon_128x128@2x.png
    sips -z 256 256   icon_main.png --out icon_main.iconset/icon_256x256.png
    sips -z 512 512   icon_main.png --out icon_main.iconset/icon_256x256@2x.png
    sips -z 512 512   icon_main.png --out icon_main.iconset/icon_512x512.png
    sips -z 1024 1024 icon_main.png --out icon_main.iconset/icon_512x512@2x.png
    
    # Create icns file
    iconutil -c icns icon_main.iconset
    
    # Clean up
    rm -rf icon_main.iconset
    
    echo "icon_main.icns created successfully!"
else
    echo "Error: icon_main.png not found!"
    exit 1
fi