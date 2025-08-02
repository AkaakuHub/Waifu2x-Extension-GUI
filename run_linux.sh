#!/bin/bash

# Linux環境での実行スクリプト
# このスクリプトをLinux環境で実行してください

echo "=== Waifu2x-Extension-GUI Linux実行スクリプト ==="

# Step 1: conda環境の確認と準備
if ! command -v conda &> /dev/null; then
    echo "❌ condaが見つかりません"
    echo "先にcondaをインストールしてください:"
    echo "  ./tools/install_conda.sh"
    echo "  source ~/.bashrc"
    exit 1
fi

echo "✓ condaが利用可能"

# Step 2: conda環境をアクティベート
CONDA_ENV="waifu2x-gui"
echo "conda環境 '$CONDA_ENV' をアクティベート中..."

# condaの初期化
eval "$(conda shell.bash hook)"

if conda env list | grep -q "^$CONDA_ENV "; then
    conda activate "$CONDA_ENV"
    echo "✓ conda環境 '$CONDA_ENV' をアクティベート完了"
else
    echo "❌ conda環境 '$CONDA_ENV' が見つかりません"
    echo "先にインストールを実行してください:"
    echo "  ./install_linux_no_sudo.sh"
    exit 1
fi

# Step 3: 環境変数の設定
echo "環境変数を設定中..."
export LD_LIBRARY_PATH="$CONDA_PREFIX/lib:$LD_LIBRARY_PATH"
export LIBRARY_PATH="$CONDA_PREFIX/lib:$LIBRARY_PATH"
export PKG_CONFIG_PATH="$CONDA_PREFIX/lib/pkgconfig:$PKG_CONFIG_PATH"
export PATH="$HOME/.local/bin:$CONDA_PREFIX/bin:$PATH"

echo "✓ 環境変数設定完了"
echo "  CONDA_PREFIX: $CONDA_PREFIX"
echo "  LD_LIBRARY_PATH: ${LD_LIBRARY_PATH:0:100}..."

# Step 4: 必要なライブラリの確認
echo "必要なライブラリの確認中..."
MISSING_LIBS=""

if ! find "$CONDA_PREFIX/lib" -name "*libGL*" -type f | head -1 > /dev/null 2>&1; then
    MISSING_LIBS="$MISSING_LIBS libGL"
fi

if ! find "$CONDA_PREFIX/lib" -name "*libQt5*" -type f | head -1 > /dev/null 2>&1; then
    MISSING_LIBS="$MISSING_LIBS Qt5"
fi

if [ -n "$MISSING_LIBS" ]; then
    echo "⚠️ 不足ライブラリ: $MISSING_LIBS"
    echo "OpenGLライブラリをインストール中..."
    conda install -c conda-forge -y mesalib libgl libglu || echo "OpenGLインストールに問題がありました"
fi

# Step 5: アプリケーションの確認
APP_PATH="SRC_v3.41.01-beta/Waifu2x-Extension-QT/build/Waifu2x-Extension-GUI"
if [ ! -f "$APP_PATH" ]; then
    echo "❌ アプリケーションが見つかりません: $APP_PATH"
    echo "先にビルドを完了してください:"
    echo "  ./install_linux_no_sudo.sh"
    exit 1
fi

echo "✓ アプリケーション確認完了: $APP_PATH"

# Step 6: アプリケーション実行
echo ""
echo "=== アプリケーション実行 ==="
cd "$(dirname "$APP_PATH")"

# 互換性テスト用ディレクトリ作成
mkdir -p Compatibility_Test

# 言語ファイルをコピー
if [ -f "../language_en.qm" ]; then
    cp ../language_*.qm . 2>/dev/null || true
fi

echo "Waifu2x-Extension-GUIを起動中..."
echo "終了するにはCtrl+Cを押してください"
echo ""

# 実行
./Waifu2x-Extension-GUI

echo ""
echo "アプリケーションが終了しました"