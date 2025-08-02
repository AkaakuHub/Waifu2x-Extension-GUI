#!/bin/bash

echo "=== 緊急対処: システムQt5でビルド ==="

# conda環境を完全に無効化
unset CONDA_PREFIX
unset LD_LIBRARY_PATH  
unset LIBRARY_PATH
unset PKG_CONFIG_PATH

# PATHからcondaを除去
export PATH=$(echo $PATH | tr ':' '\n' | grep -v conda | tr '\n' ':' | sed 's/:$//')

echo "conda環境を無効化完了"
echo "現在のPATH: $PATH"

# システムのQtを探す
echo "システムのQtを探索中..."
QT5_QMAKE=""

# 一般的なQt5の場所を確認
for qt_path in /usr/bin/qmake /usr/bin/qmake-qt5 /usr/lib/qt5/bin/qmake; do
    if [ -f "$qt_path" ]; then
        QT5_QMAKE="$qt_path"
        echo "✓ Qt5 qmake発見: $qt_path"
        break
    fi
done

if [ -z "$QT5_QMAKE" ]; then
    echo "❌ システムのQtが見つかりません"
    echo "以下をインストールしてください:"
    echo "  sudo apt-get install qt5-default qttools5-dev-tools libqt5svg5-dev"
    exit 1
fi

# ビルドディレクトリの準備
cd SRC_v3.41.01-beta/Waifu2x-Extension-QT
rm -rf build
mkdir build
cd build

echo "システムQt5でビルド開始..."
echo "使用するqmake: $QT5_QMAKE"

# qmake実行
$QT5_QMAKE ../Waifu2x-Extension-QT.pro

if [ $? -eq 0 ]; then
    echo "✓ qmake成功"
    
    # make実行
    echo "make実行中..."
    make -j$(nproc)
    
    if [ $? -eq 0 ]; then
        echo "✓ ビルド成功！"
        ls -la Waifu2x-Extension-GUI
        echo ""
        echo "実行方法:"
        echo "  cd ../../../"
        echo "  LD_LIBRARY_PATH= ./SRC_v3.41.01-beta/Waifu2x-Extension-QT/build/Waifu2x-Extension-GUI"
    else
        echo "❌ make失敗"
        echo "エラーログの最後の部分:"
        tail -20 make.log 2>/dev/null || echo "ログファイルなし"
    fi
else
    echo "❌ qmake失敗"
fi