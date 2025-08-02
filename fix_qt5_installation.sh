#!/bin/bash

echo "======================================================================="
echo "Qt5 再インストール (conda環境修復)"
echo "======================================================================="

CONDA_ENV_PATH="/export/data/m2311202/conda_envs/waifu2x-gui"

# Step 1: 環境をクリーンアップ
echo "Step 1: 環境クリーンアップ..."
unset CONDA_DEFAULT_ENV
unset CONDA_PREFIX
unset CONDA_SHLVL
for var in $(env | grep ^CONDA_BACKUP_ | cut -d= -f1); do
    unset $var
done

export PATH="/usr/local/anaconda3/bin:/home1/y2023/m2311202/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin"

# Step 2: conda環境の確認
if [ ! -d "$CONDA_ENV_PATH" ]; then
    echo "❌ conda環境が見つかりません: $CONDA_ENV_PATH"
    exit 1
fi

echo "✓ conda環境確認: $CONDA_ENV_PATH"

# Step 3: conda環境内のパッケージ一覧を確認
echo "Step 3: 現在のパッケージ確認..."
/usr/local/anaconda3/bin/conda list -p "$CONDA_ENV_PATH" | grep -E "(qt|cmake)" || echo "Qt5関連パッケージが見つかりません"

# Step 4: Qt5の再インストール
echo "Step 4: Qt5再インストール..."
echo "conda環境: $CONDA_ENV_PATH"

# 直接conda環境を指定してQt5をインストール
/usr/local/anaconda3/bin/conda install -p "$CONDA_ENV_PATH" -c conda-forge -y \
    qt \
    cmake \
    make \
    gcc_linux-64 \
    gxx_linux-64

if [ $? -ne 0 ]; then
    echo "❌ Qt5インストール失敗"
    echo "Qt5のみ再試行中..."
    /usr/local/anaconda3/bin/conda install -p "$CONDA_ENV_PATH" -c conda-forge -y qt
fi

# Step 5: 結果確認
echo "Step 5: インストール結果確認..."

# qmakeの存在確認
QMAKE_PATH="$CONDA_ENV_PATH/bin/qmake"
if [ -f "$QMAKE_PATH" ]; then
    echo "✓ qmake確認: $QMAKE_PATH"
    "$QMAKE_PATH" --version
else
    echo "❌ qmakeが見つかりません"
    
    # 代替のqmakeを探す
    echo "代替qmakeを探索中..."
    find "$CONDA_ENV_PATH" -name "qmake*" -type f 2>/dev/null || echo "qmakeファイルなし"
fi

# Qt5ライブラリの確認
QT_LIB_PATH="$CONDA_ENV_PATH/lib"
echo "Qt5ライブラリ確認: $QT_LIB_PATH"
if ls "$QT_LIB_PATH"/libQt5*.so 1> /dev/null 2>&1; then
    echo "✓ Qt5ライブラリ確認"
    ls "$QT_LIB_PATH"/libQt5*.so | head -3
else
    echo "❌ Qt5ライブラリが見つかりません"
    echo "ライブラリディレクトリ内容:"
    ls -la "$QT_LIB_PATH" | grep -i qt || echo "Qt関連ファイルなし"
fi

# OpenGLライブラリの確認
echo "OpenGLライブラリ確認:"
if ls "$QT_LIB_PATH"/libGL*.so 1> /dev/null 2>&1; then
    echo "✓ OpenGLライブラリ確認"
    ls -la "$QT_LIB_PATH"/libGL*.so
else
    echo "❌ OpenGLライブラリが見つかりません"
fi

echo ""
echo "======================================================================="
echo "Qt5インストール確認完了"
echo "======================================================================="

if [ -f "$QMAKE_PATH" ] && ls "$QT_LIB_PATH"/libQt5*.so 1> /dev/null 2>&1; then
    echo "✓ Qt5インストール成功"
    echo ""
    echo "次のステップ:"
    echo "  ./build_simple_conda.sh"
else
    echo "❌ Qt5インストールに問題があります"
    echo ""
    echo "対処法:"
    echo "1. conda環境を削除して再作成:"
    echo "   /usr/local/anaconda3/bin/conda env remove -n waifu2x-gui"
    echo "   ./install_linux_no_sudo.sh"
    echo ""
    echo "2. システムQt5を使用する場合:"
    echo "   sudo apt install qt5-default qttools5-dev-tools"
    echo "   ./emergency_system_build.sh"
fi
echo "======================================================================="