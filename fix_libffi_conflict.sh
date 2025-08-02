#!/bin/bash

echo "=== libffi競合問題の修正 ==="

# conda環境のlibffiがシステムと競合している問題を修正

# まずシステムライブラリパスをリセット
unset LD_LIBRARY_PATH
unset LIBRARY_PATH

echo "LD_LIBRARY_PATHをクリア: $LD_LIBRARY_PATH"

# gitが正常に動作するかテスト
echo "gitの動作テスト..."
git --version

if [ $? -eq 0 ]; then
    echo "✓ git正常"
    
    # 最新のスクリプトを取得
    echo "最新のコードを取得中..."
    git pull
    
    echo "新しいスクリプトが利用可能になりました:"
    ls -la *.sh | grep -E "(fix_|force_|quick_)"
    
else
    echo "❌ gitがまだ壊れています"
    echo "システム管理者に連絡してlibffiの問題を解決してください"
fi

echo ""
echo "=== 解決方法 ==="
echo "1. conda環境を使わずにビデオビルド:"
echo "   cd SRC_v3.41.01-beta/Waifu2x-Extension-QT"
echo "   rm -rf build && mkdir build && cd build"
echo "   qmake ../Waifu2x-Extension-QT.pro"  
echo "   make -j\$(nproc)"
echo ""
echo "2. またはconda環境を削除してシステムパッケージを使用:"
echo "   conda env remove -n waifu2x-gui"
echo "   ./install_linux_sudo.sh"