#!/bin/bash

echo "======================================================================="
echo "Waifu2x-Extension-GUI シンプルビルド"
echo "======================================================================="

SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

# Step 1: 環境変数を完全にクリア
echo "Step 1: 環境クリーンアップ..."
unset CONDA_DEFAULT_ENV
unset CONDA_PREFIX
unset CONDA_SHLVL
for var in $(env | grep ^CONDA_BACKUP_ | cut -d= -f1); do
    unset $var
done

export PATH="/usr/local/anaconda3/bin:/home1/y2023/m2311202/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin"

echo "✓ 環境クリーンアップ完了"

# Step 2: conda環境パスを直接指定
CONDA_ENV_PATH="/export/data/m2311202/conda_envs/waifu2x-gui"

if [ ! -d "$CONDA_ENV_PATH" ]; then
    echo "❌ conda環境が見つかりません: $CONDA_ENV_PATH"
    echo "まず ./install_linux_no_sudo.sh を実行してください"
    exit 1
fi

echo "✓ conda環境確認: $CONDA_ENV_PATH"

# Step 3: 必要なパスを設定
QT_LIB_PATH="$CONDA_ENV_PATH/lib"
QMAKE_PATH="$CONDA_ENV_PATH/bin/qmake"

echo "ライブラリパス: $QT_LIB_PATH"
echo "qmakeパス: $QMAKE_PATH"

# libGLシンボリックリンクを確保
if [ -f "$QT_LIB_PATH/libGL.so.1.7.0" ] && [ ! -f "$QT_LIB_PATH/libGL.so" ]; then
    echo "libGLシンボリックリンク作成中..."
    cd "$QT_LIB_PATH"
    ln -sf libGL.so.1.7.0 libGL.so.1
    ln -sf libGL.so.1 libGL.so
    echo "✓ シンボリックリンク作成完了"
fi

# Step 4: ビルドディレクトリ準備
echo "Step 4: ビルド準備..."
cd "$SCRIPT_DIR/SRC_v3.41.01-beta/Waifu2x-Extension-QT"
rm -rf build
mkdir build
cd build

# Step 5: 環境変数設定（最小限）
export LD_LIBRARY_PATH="$QT_LIB_PATH"
export LIBRARY_PATH="$QT_LIB_PATH"
export PKG_CONFIG_PATH="$QT_LIB_PATH/pkgconfig"

echo "✓ 環境変数設定完了"

# Step 6: qmake実行
echo "Step 6: qmake実行..."
"$QMAKE_PATH" ../Waifu2x-Extension-QT.pro

if [ $? -ne 0 ]; then
    echo "❌ qmake失敗"
    exit 1
fi

echo "✓ qmake成功"

# Step 7: make実行
echo "Step 7: make実行..."
make -j$(nproc)

if [ $? -eq 0 ] && [ -f "Waifu2x-Extension-GUI" ]; then
    echo ""
    echo "======================================================================="
    echo "✓ ビルド成功！"
    echo "======================================================================="
    ls -la Waifu2x-Extension-GUI
    echo ""
    echo "実行方法:"
    echo "  LD_LIBRARY_PATH='$QT_LIB_PATH' ./SRC_v3.41.01-beta/Waifu2x-Extension-QT/build/Waifu2x-Extension-GUI"
    echo ""
    echo "または:"
    echo "  ./run_waifu2x_safe.sh"
    echo "======================================================================="
else
    echo ""
    echo "❌ make失敗 - 手動リンク試行中..."
    
    # 手動リンク
    g++ -Wl,-O1 -Wl,-rpath,"$QT_LIB_PATH" -o Waifu2x-Extension-GUI \
        *.o \
        "$QT_LIB_PATH"/libQt5Multimedia.so \
        "$QT_LIB_PATH"/libQt5Widgets.so \
        "$QT_LIB_PATH"/libQt5Gui.so \
        "$QT_LIB_PATH"/libQt5Concurrent.so \
        "$QT_LIB_PATH"/libQt5Network.so \
        "$QT_LIB_PATH"/libQt5Core.so \
        -L"$QT_LIB_PATH" -lGL -lpthread
    
    if [ $? -eq 0 ] && [ -f "Waifu2x-Extension-GUI" ]; then
        echo "✓ 手動リンク成功！"
        ls -la Waifu2x-Extension-GUI
    else
        echo "❌ 手動リンクも失敗"
        exit 1
    fi
fi