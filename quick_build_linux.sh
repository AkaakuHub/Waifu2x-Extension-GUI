#!/bin/bash

# Linux環境での緊急ビルド用スクリプト

echo "=== Linux緊急ビルドスクリプト ==="

# conda環境アクティベート
eval "$(conda shell.bash hook)"
conda activate waifu2x-gui

# 必要なOpenGLライブラリを強制インストール
echo "OpenGLライブラリをインストール中..."
conda install -c conda-forge -y mesalib libgl libglu xorg-libx11 || true

# 環境変数設定
export LD_LIBRARY_PATH="$CONDA_PREFIX/lib:/usr/lib/x86_64-linux-gnu:$LD_LIBRARY_PATH"
export LIBRARY_PATH="$CONDA_PREFIX/lib:/usr/lib/x86_64-linux-gnu:$LIBRARY_PATH"
export PKG_CONFIG_PATH="$CONDA_PREFIX/lib/pkgconfig:$PKG_CONFIG_PATH"

echo "環境変数:"
echo "  LD_LIBRARY_PATH: $LD_LIBRARY_PATH"
echo "  CONDA_PREFIX: $CONDA_PREFIX"

# ビルドディレクトリに移動
cd SRC_v3.41.01-beta/Waifu2x-Extension-QT

# クリーンビルド
rm -rf build
mkdir build
cd build

echo "qmake実行中..."
qmake ../Waifu2x-Extension-QT.pro

echo "make実行中..."
make -j$(nproc)

if [ $? -eq 0 ]; then
    echo "✓ ビルド成功！"
    echo "実行方法: ./run-waifu2x-gui.sh"
else
    echo "❌ ビルド失敗"
    echo "ライブラリの確認:"
    find $CONDA_PREFIX/lib -name "*libGL*" || echo "libGLが見つかりません"
fi