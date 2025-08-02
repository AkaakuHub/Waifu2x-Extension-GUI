# Linux インストール（sudo不要版対応）

sudoアクセスがないLinux環境向けのインストール方法

## 📋 インストール方法

### 方法1: 自動選択（推奨）

```bash
# install.shが自動的に最適な方法を選択
./install.sh
```

### 方法2: 直接指定

#### sudo使える場合:
```bash
./install_linux_sudo.sh
```

#### sudo使えない場合:
```bash
# condaがない場合は先にインストール
./tools/install_conda.sh
source ~/.bashrc

# sudo不要版を実行
./install_linux_no_sudo.sh
```

## 🔧 sudo不要版の特徴

### condaで自動インストールされるもの:
- **Qt5**: GUIフレームワーク
- **OpenCV**: 画像処理ライブラリ
- **FFmpeg**: 動画処理
- **CMake, GCC**: ビルドツール
- **Python packages**: numpy, opencv-python

### ユーザー空間でビルドされるもの:
- **ImageMagick**: AppImage版を使用
- **gifsicle**: ソースからビルド

### 環境設定:
- conda環境 `waifu2x-gui` を作成
- `~/.local/bin` にツールをインストール
- `run-waifu2x-gui.sh` が自動で環境をアクティベート

## 🚀 起動方法

```bash
# 通常の起動（環境は自動設定）
./run-waifu2x-gui.sh

# conda環境を手動でアクティベートする場合
conda activate waifu2x-gui
./run-waifu2x-gui.sh
```

## 🐛 トラブルシューティング

### condaが見つからない
```bash
./tools/install_conda.sh
source ~/.bashrc
```

### Qt5関連エラー
```bash
# condaでQt5を再インストール
conda activate waifu2x-gui
conda install -c conda-forge qt
```

### ツールが見つからない
```bash
# PATH確認
echo $PATH
# ユーザーbinディレクトリ確認
ls ~/.local/bin/
```