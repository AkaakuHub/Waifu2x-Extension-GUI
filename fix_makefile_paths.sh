#!/bin/bash

echo "=== Makefileのパス修正 ==="

# conda環境をアクティベート
eval "$(conda shell.bash hook)"
conda activate waifu2x-gui

echo "現在のconda環境: $CONDA_PREFIX"

# ビルドディレクトリに移動
cd SRC_v3.41.01-beta/Waifu2x-Extension-QT

# buildディレクトリを削除して再作成
rm -rf build
mkdir build
cd build

# 環境変数を設定
export LD_LIBRARY_PATH="$CONDA_PREFIX/lib:$LD_LIBRARY_PATH"
export LIBRARY_PATH="$CONDA_PREFIX/lib:$LIBRARY_PATH"
export PKG_CONFIG_PATH="$CONDA_PREFIX/lib/pkgconfig:$PKG_CONFIG_PATH"

echo "環境変数設定:"
echo "  CONDA_PREFIX: $CONDA_PREFIX"
echo "  LD_LIBRARY_PATH: $LD_LIBRARY_PATH"

# qmakeを実行して正しいパスでMakefileを生成
echo "qmakeを実行中..."
qmake ../Waifu2x-Extension-QT.pro \
    QMAKE_LIBDIR+="$CONDA_PREFIX/lib" \
    LIBS+="-L$CONDA_PREFIX/lib"

# Makefileの問題のあるパスを修正
echo "Makefileのパスを修正中..."
if [ -f Makefile ]; then
    # 間違ったQt5パスを正しいcondaパスに置換
    sed -i "s|/usr/local/anaconda3/lib|$CONDA_PREFIX/lib|g" Makefile
    sed -i "s|-L/opt/conda/conda-bld/[^[:space:]]*|-L$CONDA_PREFIX/lib|g" Makefile
    echo "Makefile修正完了"
else
    echo "Error: Makefile not found"
    exit 1
fi

# ビルド実行
echo "ビルド実行中..."
make -j$(nproc)

if [ $? -eq 0 ]; then
    echo "✓ ビルド成功！"
    ls -la Waifu2x-Extension-GUI
else
    echo "❌ ビルド失敗"
    echo "Makefileの-lGLが含まれる行を確認:"
    grep -n "\-lGL" Makefile || echo "No -lGL found"
fi