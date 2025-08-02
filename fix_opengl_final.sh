#!/bin/bash

echo "=== OpenGL問題の最終修正 ==="

# conda環境をアクティベート
eval "$(conda shell.bash hook)"
conda activate waifu2x-gui

echo "現在のconda環境: $CONDA_PREFIX"

# OpenGLライブラリの状況を詳しく調査
echo "OpenGLライブラリの検索..."
find $CONDA_PREFIX -name "*libGL*" -type f 2>/dev/null || echo "conda環境にlibGLが見つかりません"

# システムのOpenGLライブラリも確認
echo "システムのOpenGLライブラリ検索..."
find /usr/lib* -name "*libGL*" -type f 2>/dev/null | head -5

# mesa関連パッケージを強制インストール
echo "Mesa OpenGLパッケージをインストール中..."
conda install -c conda-forge -y \
    mesalib \
    mesa-libgl-cos6-x86_64 \
    mesa-libgl-devel-cos6-x86_64 \
    libgl \
    libglu

# 再度検索
echo "インストール後のOpenGLライブラリ:"
find $CONDA_PREFIX -name "*libGL*" -type f 2>/dev/null

# システムライブラリへのシンボリックリンクを作成
if [ ! -f "$CONDA_PREFIX/lib/libGL.so" ]; then
    echo "システムのlibGLを利用するためのシンボリックリンクを作成..."
    
    # システムのlibGLを探す
    SYSTEM_LIBGL=$(find /usr/lib* -name "libGL.so.1" 2>/dev/null | head -1)
    if [ -n "$SYSTEM_LIBGL" ]; then
        echo "システムlibGL発見: $SYSTEM_LIBGL"
        ln -sf "$SYSTEM_LIBGL" "$CONDA_PREFIX/lib/libGL.so"
        ln -sf "$SYSTEM_LIBGL" "$CONDA_PREFIX/lib/libGL.so.1"
        echo "シンボリックリンク作成完了"
    fi
fi

# 最終確認
echo "最終ライブラリ確認:"
ls -la $CONDA_PREFIX/lib/libGL* 2>/dev/null || echo "libGLファイルなし"

echo "=== 修正完了 ==="
echo "次に実行: ./rebuild_with_system_gl.sh"