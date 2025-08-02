#!/bin/bash

echo "======================================================================="
echo "Waifu2x-Extension-GUI 安全実行スクリプト (libffi競合回避)"
echo "======================================================================="

SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
CONDA_ENV="waifu2x-gui"

# Step 1: アプリケーションの存在確認
APP_PATH="$SCRIPT_DIR/SRC_v3.41.01-beta/Waifu2x-Extension-QT/build/Waifu2x-Extension-GUI"

if [ ! -f "$APP_PATH" ]; then
    echo "❌ アプリケーションが見つかりません: $APP_PATH"
    echo "まず ./build_with_conda_fixed.sh を実行してください"
    exit 1
fi

echo "✓ アプリケーション確認: $APP_PATH"

# Step 2: conda環境情報を取得（アクティベートはしない）
if command -v conda &> /dev/null; then
    # conda初期化
    eval "$(conda shell.bash hook)"
    
    # 一時的にアクティベートしてパス情報だけ取得
    conda activate "$CONDA_ENV"
    CONDA_LIB_PATH="$CONDA_PREFIX/lib"
    conda deactivate
    
    echo "✓ conda環境ライブラリパス: $CONDA_LIB_PATH"
else
    echo "⚠ condaが見つかりません（システムライブラリを使用）"
    CONDA_LIB_PATH=""
fi

# Step 3: libffi競合を回避した環境変数設定
# システムのlibffiを優先するため、condaパスを後に配置
if [ -n "$CONDA_LIB_PATH" ]; then
    export LD_LIBRARY_PATH="$CONDA_LIB_PATH"
else
    export LD_LIBRARY_PATH="/usr/lib/x86_64-linux-gnu:/usr/lib"
fi

# PATHからcondaを除去してシステムのlibffiを確実に使用
export PATH=$(echo $PATH | tr ':' '\n' | grep -v conda | tr '\n' ':' | sed 's/:$//')

# ユーザー空間のバイナリを追加
export PATH="$HOME/.local/bin:$PATH"

echo "✓ 環境変数設定完了"
echo "  LD_LIBRARY_PATH: ${LD_LIBRARY_PATH:0:100}..."
echo "  PATH (conda除去済み): ${PATH:0:100}..."

# Step 4: 実行ディレクトリの準備
cd "$(dirname "$APP_PATH")"

# 必要なディレクトリを作成
mkdir -p Compatibility_Test

# 言語ファイルをコピー
if [ -f "../language_en.qm" ]; then
    cp ../language_*.qm . 2>/dev/null || true
    echo "✓ 言語ファイルコピー完了"
fi

# 通知音ファイルをコピー
if [ -f "../../../NFSound_Waifu2xEX.mp3" ]; then
    cp ../../../NFSound_Waifu2xEX.mp3 . 2>/dev/null || true
    echo "✓ 通知音ファイルコピー完了"
fi

# Step 5: アプリケーション実行
echo ""
echo "======================================================================="
echo "Waifu2x-Extension-GUI を起動中..."
echo "終了するにはウィンドウを閉じるかCtrl+Cを押してください"
echo "======================================================================="
echo ""

# クリーンアップ関数
cleanup() {
    echo ""
    echo "アプリケーションを終了中..."
    # すべてのWaifu2x関連プロセスを終了
    pkill -f "Waifu2x-Extension-GUI" 2>/dev/null || true
    exit 0
}

# シグナルハンドラーを設定
trap cleanup EXIT INT TERM

# アプリケーションを実行
./Waifu2x-Extension-GUI &
APP_PID=$!

# アプリケーションの終了を待つ
wait $APP_PID

echo ""
echo "Waifu2x-Extension-GUI が正常に終了しました"