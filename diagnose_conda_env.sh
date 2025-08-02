#!/bin/bash

echo "======================================================================="
echo "Conda環境診断"
echo "======================================================================="

CONDA_ENV_PATH="/export/data/m2311202/conda_envs/waifu2x-gui"

echo "環境パス: $CONDA_ENV_PATH"
echo ""

# ディレクトリ構造確認
echo "環境ディレクトリ構造:"
ls -la "$CONDA_ENV_PATH"
echo ""

# binディレクトリの内容
echo "binディレクトリ内容:"
if [ -d "$CONDA_ENV_PATH/bin" ]; then
    ls -la "$CONDA_ENV_PATH/bin" | grep -E "(qmake|qt|cmake)" || echo "Qt関連バイナリなし"
else
    echo "❌ binディレクトリが存在しません"
fi
echo ""

# libディレクトリの内容
echo "libディレクトリ内容 (Qt関連):"
if [ -d "$CONDA_ENV_PATH/lib" ]; then
    ls -la "$CONDA_ENV_PATH/lib" | grep -E "(Qt|qt)" || echo "Qt関連ライブラリなし"
else
    echo "❌ libディレクトリが存在しません"
fi
echo ""

# インストール済みパッケージ確認
echo "インストール済みパッケージ (Qt関連):"
/usr/local/anaconda3/bin/conda list -p "$CONDA_ENV_PATH" | grep -E "(qt|cmake|gcc)" || echo "Qt関連パッケージなし"
echo ""

# conda環境の整合性チェック
echo "conda環境整合性チェック:"
/usr/local/anaconda3/bin/conda info -e | grep waifu2x-gui

echo ""
echo "======================================================================="
echo "診断完了"
echo "======================================================================="