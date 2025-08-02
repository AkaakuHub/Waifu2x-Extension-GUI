#!/bin/bash

echo "=== conda環境のOpenGLを強制使用してビルド ==="

# conda環境をアクティベート
eval "$(conda shell.bash hook)"
conda activate waifu2x-gui

echo "現在のconda環境: $CONDA_PREFIX"

# 現在のディレクトリを確認
if [ ! -f "Makefile" ]; then
    echo "Makefileが見つかりません。正しいディレクトリで実行してください。"
    echo "実行場所: SRC_v3.41.01-beta/Waifu2x-Extension-QT/build"
    exit 1
fi

# 環境変数を設定
export LD_LIBRARY_PATH="$CONDA_PREFIX/lib:$LD_LIBRARY_PATH"
export LIBRARY_PATH="$CONDA_PREFIX/lib:$LIBRARY_PATH"

# makeを実行するが、LDFLAGSを追加してcondaのlibGLを強制使用
echo "conda環境のlibGLを強制使用してビルド中..."
make -j$(nproc) LDFLAGS="-L$CONDA_PREFIX/lib -lGL -lGLU"

if [ $? -eq 0 ]; then
    echo "✓ ビルド成功！"
    ls -la Waifu2x-Extension-GUI
    echo ""
    echo "実行方法:"
    echo "  cd ../../../"
    echo "  ./run-waifu2x-gui.sh"
else
    echo "❌ ビルド失敗"
    echo ""
    echo "手動でリンカーフラグを追加してリトライ中..."
    
    # Makefileの最後のリンク行を見つけて、正しいライブラリパスを追加
    LAST_LINK_LINE=$(grep -n "Waifu2x-Extension-GUI.*-lGL" Makefile | tail -1)
    echo "最後のリンク行: $LAST_LINK_LINE"
    
    # 手動でg++コマンドを実行
    echo "手動リンク試行中..."
    g++ -Wl,-O1 -Wl,-rpath,$CONDA_PREFIX/lib -o Waifu2x-Extension-GUI \
        *.o \
        $CONDA_PREFIX/lib/libQt5Multimedia.so \
        $CONDA_PREFIX/lib/libQt5Widgets.so \
        $CONDA_PREFIX/lib/libQt5Gui.so \
        $CONDA_PREFIX/lib/libQt5Concurrent.so \
        $CONDA_PREFIX/lib/libQt5Network.so \
        $CONDA_PREFIX/lib/libQt5Core.so \
        -L$CONDA_PREFIX/lib -lGL -lpthread
    
    if [ $? -eq 0 ]; then
        echo "✓ 手動リンク成功！"
        ls -la Waifu2x-Extension-GUI
    else
        echo "❌ 手動リンクも失敗"
    fi
fi