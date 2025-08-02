#!/bin/bash

echo "=== libGLシンボリックリンク作成 ==="

# conda環境をアクティベート
eval "$(conda shell.bash hook)"
conda activate waifu2x-gui

echo "現在のconda環境: $CONDA_PREFIX"

# 現在のlibGLファイルを確認
echo "現在のlibGLファイル:"
ls -la $CONDA_PREFIX/lib/libGL* 2>/dev/null

# 必要なシンボリックリンクを作成
cd $CONDA_PREFIX/lib

# libGL.so.1.7.0 -> libGL.so.1
if [ -f "libGL.so.1.7.0" ] && [ ! -f "libGL.so.1" ]; then
    echo "libGL.so.1 リンク作成中..."
    ln -sf libGL.so.1.7.0 libGL.so.1
fi

# libGL.so.1 -> libGL.so
if [ -f "libGL.so.1" ] && [ ! -f "libGL.so" ]; then
    echo "libGL.so リンク作成中..."
    ln -sf libGL.so.1 libGL.so
fi

# libGLU.so.1.3.1 -> libGLU.so.1
if [ -f "libGLU.so.1.3.1" ] && [ ! -f "libGLU.so.1" ]; then
    echo "libGLU.so.1 リンク作成中..."
    ln -sf libGLU.so.1.3.1 libGLU.so.1
fi

# libGLU.so.1 -> libGLU.so
if [ -f "libGLU.so.1" ] && [ ! -f "libGLU.so" ]; then
    echo "libGLU.so リンク作成中..."
    ln -sf libGLU.so.1 libGLU.so
fi

echo "作成後のlibGLファイル:"
ls -la $CONDA_PREFIX/lib/libGL* 2>/dev/null

echo "=== シンボリックリンク作成完了 ==="
echo "次に実行: cd SRC_v3.41.01-beta/Waifu2x-Extension-QT/build && make -j\$(nproc)"