# クロスプラットフォームインストールガイド

## 簡単インストール（推奨）

### 1行コマンドでインストール

```bash
git clone https://github.com/AaronFeng753/Waifu2x-Extension-GUI.git
cd Waifu2x-Extension-GUI
./install.sh
```

これだけで以下が自動的に実行されます：
- ✅ OS自動検出（Linux/macOS）
- ✅ パッケージマネージャー自動選択
  - Ubuntu/Debian: `apt`
  - Fedora/RHEL: `dnf`
  - Arch: `pacman`
  - openSUSE: `zypper`
  - macOS: `brew`
- ✅ 必要な依存関係を全て自動インストール
- ✅ 外部ツールのダウンロード
- ✅ アプリケーションのビルド

## 対応OS

### Linux
- Ubuntu/Debian系
- Fedora/RHEL/CentOS
- Arch Linux/Manjaro
- openSUSE

### macOS
- macOS 10.15以降
- **Homebrewが必要**（事前にインストールしてください）

## 必要な依存関係（自動インストールされるもの）

- Qt5開発環境
- CMake
- Vulkan SDK
- OpenCV
- FFmpeg
- Python3
- その他必要なライブラリ

## トラブルシューティング

### Linuxでsudo権限を求められる場合
```bash
sudo ./install.sh
```

### macOSでHomebrewがない場合
まずHomebrewをインストールしてください：
```bash
# Homebrew公式サイト: https://brew.sh
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
```

### ビルドエラーが発生する場合
```bash
# 依存関係のみ再インストール
bash tools/install_dependencies.sh

# クリーンビルド
cd SRC_v3.41.01-beta/Waifu2x-Extension-QT
rm -rf build
mkdir build && cd build
qmake ../Waifu2x-Extension-QT.pro
make
```

## 手動インストール

個別に依存関係をインストールしたい場合は、`tools/install_dependencies.sh`の内容を参照してください。