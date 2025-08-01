# Waifu2x-Extension-GUI クロスプラットフォーム対応 リリースノート

## 概要
Waifu2x-Extension-GUIがWindows専用アプリケーションから、Linux/macOSにも対応したクロスプラットフォームアプリケーションに進化しました。

## 主な変更点

### 1. プラットフォーム抽象化レイヤー
- **platform_utils.h** - 全てのプラットフォーム固有機能を統一的に扱うヘッダーファイル
- 実行ファイル名の自動調整（Windows: .exe, Unix系: 拡張子なし）
- システムコマンドの抽象化（プロセス管理、フォルダ操作、電源管理）

### 2. ビルドシステムの改善
- Qt5のクロスプラットフォーム機能を最大限活用
- プラットフォーム別のアイコン設定
- 条件コンパイルによるプラットフォーム固有コードの分離

### 3. 外部ツール管理
- **binary_finder.h** - 実行ファイルの自動検索機能
- プラットフォーム別のツール配置に対応
- システムパッケージマネージャーとの連携

### 4. 新規追加ツール・スクリプト

#### 依存関係管理
- `tools/install_dependencies.sh` - 各プラットフォームでの依存関係インストール
  - Ubuntu/Debian (apt)
  - Fedora/RHEL (dnf)
  - Arch Linux (pacman)
  - openSUSE (zypper)
  - macOS (Homebrew)

#### 外部ツールビルド
- `tools/ncnn-vulkan-tools/download_ncnn_tools.sh` - ncnn系ツールのダウンロード
- `tools/ncnn-vulkan-tools/build_ncnn_tools.sh` - ソースからのビルド
- `tools/build_anime4k_waifu2x.sh` - Anime4K/waifu2x-converter-cppのビルド
- `tools/setup_binary_links.sh` - バイナリのセットアップ

#### テストツール
- `test/test_build.sh` - ビルド環境の検証
- `test/test_tools.sh` - 外部ツールの可用性確認
- `tools/check_code_format.sh` - コードフォーマットチェック
- `tools/check_compile.sh` - コンパイル警告チェック
- `tools/final_validation.sh` - 最終動作検証

#### パッケージング
- `packaging/create_appimage.sh` - Linux用AppImage作成
- `packaging/create_macos_bundle.sh` - macOS用アプリケーションバンドル作成
- `packaging/install.sh` - 汎用インストーラー

## 対応プラットフォーム
- Windows (従来通り)
- Linux (Ubuntu, Debian, Fedora, Arch, openSUSE)
- macOS (Intel/Apple Silicon)

## インストール方法

### Linux
```bash
# 依存関係のインストール
./tools/install_dependencies.sh

# ビルドとインストール
./packaging/install.sh
```

### macOS
```bash
# 依存関係のインストール（Homebrew必須）
./tools/install_dependencies.sh

# アプリケーションバンドルの作成
./packaging/create_macos_bundle.sh
```

## 既知の制限事項
- 一部のWindows固有機能（nircmdによるモニター制御等）は代替実装
- 外部ツールのバイナリは各プラットフォームで個別に準備が必要
- GPU機能はVulkan/OpenCL環境に依存

## 今後の課題
- 各プラットフォームでの実機テスト
- パフォーマンス最適化
- プラットフォーム固有のUI調整
- 自動アップデート機能の実装

## 技術的詳細
- Qt 5.x を使用したクロスプラットフォーム対応
- C++11標準準拠
- CMake/qmakeビルドシステム対応

## 貢献者向け情報
新しいプラットフォーム固有機能を追加する場合は、必ず`platform_utils.h`に抽象化関数を追加し、各プラットフォームでの実装を提供してください。

## ライセンス
従来通りのライセンスを継承

---
このリリースは、Waifu2x-Extension-GUIをより多くのユーザーが利用できるようにするための重要なステップです。フィードバックをお待ちしています。