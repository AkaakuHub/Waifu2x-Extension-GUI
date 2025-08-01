# Waifu2x-Extension-GUI クロスプラットフォーム版

[![Platform](https://img.shields.io/badge/Platform-Windows%20%7C%20Linux%20%7C%20macOS-blue)](https://github.com/AaronFeng753/Waifu2x-Extension-GUI)

AI技術を使用して画像、GIF、動画を高画質化するツールです。Windows、Linux、macOSに対応しました！

## 🚀 簡単インストール（1行コマンド）

```bash
git clone https://github.com/AaronFeng753/Waifu2x-Extension-GUI.git
cd Waifu2x-Extension-GUI
./install.sh
```

これだけで全てが自動的にセットアップされます！

### 自動実行される内容：
- ✅ **OS自動検出**（Windows/Linux/macOS）
- ✅ **パッケージマネージャー自動選択**
  - Ubuntu/Debian: `apt`
  - Fedora/RHEL: `dnf`
  - Arch Linux: `pacman`
  - openSUSE: `zypper`
  - macOS: `brew`
- ✅ **依存関係の自動インストール**
- ✅ **外部ツールのダウンロード**
- ✅ **アプリケーションのビルド**

## 📋 必要な環境

### Linux
- 対応ディストリビューション：
  - Ubuntu/Debian系
  - Fedora/RHEL/CentOS
  - Arch Linux/Manjaro
  - openSUSE
- 必要なもの：sudo権限（パッケージインストール時）

### macOS
- macOS 10.15以降
- **Homebrewが必要**（未インストールの場合）：
  ```bash
  /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
  ```

### Windows
- 従来通りのインストーラーを使用

## 🛠️ 手動ビルド（上級者向け）

```bash
# 1. 依存関係のインストール
bash tools/install_dependencies.sh

# 2. 外部ツールのセットアップ
bash tools/ncnn-vulkan-tools/download_ncnn_tools.sh

# 3. ビルド
cd SRC_v3.41.01-beta/Waifu2x-Extension-QT
mkdir build && cd build
qmake ../Waifu2x-Extension-QT.pro
make
```

## 🎯 主な機能

- **画像高画質化**: JPG、PNG、BMP、WEBPなど
- **GIF高画質化**: アニメーションGIFの高解像度化
- **動画高画質化**: MP4、MKV、AVI、MOVなど
- **バッチ処理**: 複数ファイルの一括処理
- **カスタム解像度**: 任意の解像度を指定可能
- **ノイズ除去**: 画像のノイズを除去

## 🔧 使用可能なAIエンジン

- waifu2x-ncnn-vulkan
- waifu2x-caffe
- waifu2x-converter
- srmd-ncnn-vulkan
- RealSR-ncnn-vulkan
- Anime4K
- その他多数

## ❓ トラブルシューティング

### Linux: sudo権限が必要と言われる
```bash
sudo ./install.sh
```

### macOS: Homebrewがないとエラーが出る
上記のHomebrewインストールコマンドを実行してください

### ビルドエラーが発生する
```bash
# クリーンビルドを試す
cd SRC_v3.41.01-beta/Waifu2x-Extension-QT
rm -rf build
mkdir build && cd build
qmake ../Waifu2x-Extension-QT.pro
make clean
make
```

## 📝 更新履歴

### v3.128.01 (2025/08/01)
- 🎉 **Linux/macOSサポート追加！**
- 自動依存関係インストール機能
- クロスプラットフォーム対応
- パッケージマネージャー自動検出

## 🤝 貢献

プルリクエストを歓迎します！バグ報告は[Issues](https://github.com/AaronFeng753/Waifu2x-Extension-GUI/issues)へ。

## 📄 ライセンス

[GNU Affero General Public License v3.0](LICENSE)

---

**注意**: このクロスプラットフォーム版は開発中です。安定版をお求めの方はWindows版をご利用ください。