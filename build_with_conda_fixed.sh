#!/bin/bash

echo "======================================================================="
echo "Waifu2x-Extension-GUI 完全自動化ビルド (conda + libffi競合回避)"
echo "======================================================================="

set -e  # エラーで停止

SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
CONDA_ENV="waifu2x-gui"

# Step 1: conda環境の確認
echo "Step 1: conda環境の確認..."
if ! command -v conda &> /dev/null; then
    echo "❌ condaが見つかりません"
    echo "まず ./tools/install_conda.sh を実行してください"
    exit 1
fi

# conda初期化
eval "$(conda shell.bash hook)"

# conda環境の存在確認
if ! conda env list | grep -q "^$CONDA_ENV "; then
    echo "❌ conda環境 '$CONDA_ENV' が見つかりません"
    echo "まず ./install_linux_no_sudo.sh を実行してください"
    exit 1
fi

echo "✓ conda環境確認完了"

# Step 2: 一時的にconda環境をアクティベートしてライブラリ情報を取得
echo "Step 2: conda環境情報の取得..."
conda activate "$CONDA_ENV"

# 重要なパスを記録
CONDA_PREFIX_SAVED="$CONDA_PREFIX"
CONDA_QT_LIBS="$CONDA_PREFIX/lib"
CONDA_QMAKE="$CONDA_PREFIX/bin/qmake"

echo "  CONDA_PREFIX: $CONDA_PREFIX_SAVED"
echo "  Qt libraries: $CONDA_QT_LIBS"
echo "  qmake: $CONDA_QMAKE"

# libGLの存在確認
if [ ! -f "$CONDA_QT_LIBS/libGL.so" ]; then
    echo "libGL.soシンボリックリンクを作成中..."
    if [ -f "$CONDA_QT_LIBS/libGL.so.1.7.0" ]; then
        cd "$CONDA_QT_LIBS"
        ln -sf libGL.so.1.7.0 libGL.so.1
        ln -sf libGL.so.1 libGL.so
        echo "✓ libGL.so リンク作成完了"
    fi
fi

# Step 3: conda環境を一旦無効化してlibffi競合を回避
echo "Step 3: libffi競合回避のためconda環境を無効化..."
conda deactivate

# システムライブラリパスをクリア（libffi競合回避）
unset LD_LIBRARY_PATH
unset LIBRARY_PATH
unset PKG_CONFIG_PATH

# condaパスをPATHから除去
export PATH=$(echo $PATH | tr ':' '\n' | grep -v conda | tr '\n' ':' | sed 's/:$//')

echo "✓ システム環境をクリーン化完了"

# Step 4: ビルド準備
echo "Step 4: ビルド環境準備..."
cd "$SCRIPT_DIR/SRC_v3.41.01-beta/Waifu2x-Extension-QT"

# buildディレクトリをクリーン
rm -rf build
mkdir build
cd build

# Step 5: condaのQt5を使ってqmake実行（libffi競合を回避した状態）
echo "Step 5: qmake実行..."

# condaのライブラリパスを設定（システムのlibffiより優先されないように後に配置）
export LD_LIBRARY_PATH="$CONDA_QT_LIBS"
export LIBRARY_PATH="$CONDA_QT_LIBS"
export PKG_CONFIG_PATH="$CONDA_QT_LIBS/pkgconfig"

# qmake実行
"$CONDA_QMAKE" ../Waifu2x-Extension-QT.pro \
    QMAKE_LIBDIR+="$CONDA_QT_LIBS" \
    LIBS+="-L$CONDA_QT_LIBS"

if [ $? -ne 0 ]; then
    echo "❌ qmake失敗"
    exit 1
fi

echo "✓ qmake成功"

# Step 6: Makefileの問題パスを修正
echo "Step 6: Makefile修正..."
if [ -f Makefile ]; then
    # 問題のあるQt5パスを修正
    sed -i "s|/usr/local/anaconda3/lib|$CONDA_QT_LIBS|g" Makefile
    sed -i "s|-L/opt/conda/conda-bld/[^[:space:]]*|-L$CONDA_QT_LIBS|g" Makefile
    echo "✓ Makefile修正完了"
fi

# Step 7: ビルド実行
echo "Step 7: ビルド実行..."
make -j$(nproc) 2>&1 | tee build.log

if [ $? -eq 0 ] && [ -f "Waifu2x-Extension-GUI" ]; then
    echo ""
    echo "======================================================================="
    echo "✓ ビルド成功！"
    echo "======================================================================="
    ls -la Waifu2x-Extension-GUI
    echo ""
    echo "実行方法:"
    echo "  ./run-waifu2x-gui.sh"
    echo "======================================================================="
else
    echo ""
    echo "======================================================================="
    echo "❌ ビルド失敗"
    echo "======================================================================="
    
    # エラー情報の表示
    echo "最新のエラーログ:"
    tail -20 build.log
    
    echo ""
    echo "手動リンク試行中..."
    
    # 手動リンクを試行
    g++ -Wl,-O1 -Wl,-rpath,"$CONDA_QT_LIBS" -o Waifu2x-Extension-GUI \
        *.o \
        "$CONDA_QT_LIBS"/libQt5Multimedia.so \
        "$CONDA_QT_LIBS"/libQt5Widgets.so \
        "$CONDA_QT_LIBS"/libQt5Gui.so \
        "$CONDA_QT_LIBS"/libQt5Concurrent.so \
        "$CONDA_QT_LIBS"/libQt5Network.so \
        "$CONDA_QT_LIBS"/libQt5Core.so \
        -L"$CONDA_QT_LIBS" -lGL -lpthread 2>&1 | tee manual_link.log
    
    if [ $? -eq 0 ] && [ -f "Waifu2x-Extension-GUI" ]; then
        echo "✓ 手動リンク成功！"
        ls -la Waifu2x-Extension-GUI
    else
        echo "❌ 手動リンクも失敗"
        echo "手動リンクエラー:"
        cat manual_link.log
        exit 1
    fi
fi