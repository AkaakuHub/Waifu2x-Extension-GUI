#!/bin/bash

echo "======================================================================="
echo "Conda環境破損の修復"
echo "======================================================================="

# Step 1: すべてのconda関連環境変数をクリア
echo "Step 1: conda環境変数をクリア中..."

# conda関連の環境変数をすべて削除
unset CONDA_DEFAULT_ENV
unset CONDA_EXE
unset CONDA_PREFIX
unset CONDA_PROMPT_MODIFIER
unset CONDA_PYTHON_EXE
unset CONDA_ROOT
unset CONDA_SHLVL

# CONDA_BACKUP_* 変数をすべて削除
for var in $(env | grep ^CONDA_BACKUP_ | cut -d= -f1); do
    unset $var
done

echo "✓ conda環境変数クリア完了"

# Step 2: PATHをクリーンアップ
echo "Step 2: PATHクリーンアップ中..."
export PATH="/home1/y2023/m2311202/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin"
echo "✓ PATHクリーンアップ完了: $PATH"

# Step 3: conda baseの再初期化
echo "Step 3: conda再初期化中..."
export PATH="/usr/local/anaconda3/bin:$PATH"

# condaの基本動作テスト
echo "condaバージョン確認..."
/usr/local/anaconda3/bin/conda --version

if [ $? -eq 0 ]; then
    echo "✓ conda基本動作OK"
    
    # conda環境リストを確認
    echo "conda環境リスト:"
    /usr/local/anaconda3/bin/conda env list
    
    # waifu2x-gui環境が存在するか確認
    if /usr/local/anaconda3/bin/conda env list | grep -q waifu2x-gui; then
        echo "✓ waifu2x-gui環境が存在します"
        CONDA_ENV_PATH=$(/usr/local/anaconda3/bin/conda env list | grep waifu2x-gui | awk '{print $2}')
        echo "  環境パス: $CONDA_ENV_PATH"
        
        # 環境パスが有効か確認
        if [ -d "$CONDA_ENV_PATH" ]; then
            echo "✓ 環境ディレクトリ有効"
            
            # 重要なライブラリの存在確認
            QT_LIB_PATH="$CONDA_ENV_PATH/lib"
            QMAKE_PATH="$CONDA_ENV_PATH/bin/qmake"
            
            echo "ライブラリ確認:"
            echo "  Qt5ライブラリパス: $QT_LIB_PATH"
            if [ -d "$QT_LIB_PATH" ]; then
                echo "  ✓ Qt5ライブラリディレクトリ存在"
                ls -la "$QT_LIB_PATH"/libQt5* | head -3
            fi
            
            echo "  qmakeパス: $QMAKE_PATH"
            if [ -f "$QMAKE_PATH" ]; then
                echo "  ✓ qmake存在"
                "$QMAKE_PATH" --version
            fi
            
            # libGLの状況確認
            echo "OpenGLライブラリ確認:"
            ls -la "$QT_LIB_PATH"/libGL* 2>/dev/null || echo "  ⚠ libGLファイルなし"
            
        else
            echo "❌ 環境ディレクトリが無効: $CONDA_ENV_PATH"
        fi
    else
        echo "❌ waifu2x-gui環境が見つかりません"
        echo "新しい環境を作成する必要があります"
    fi
    
else
    echo "❌ conda基本動作に問題があります"
fi

echo ""
echo "======================================================================="
echo "修復完了"
echo "======================================================================="
echo ""
echo "次のステップ:"
echo "1. conda環境が正常な場合:"
echo "   ./build_simple_conda.sh"
echo ""
echo "2. conda環境に問題がある場合:"
echo "   conda env remove -n waifu2x-gui"
echo "   ./install_linux_no_sudo.sh"
echo "======================================================================="