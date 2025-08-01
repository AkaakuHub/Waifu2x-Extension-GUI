# Waifu2x-Extension-GUI クロスプラットフォーム対応 タスクリスト

## 重要な発見事項
このプロジェクトで使用している外部ツールは**全てオープンソース**で、**Linux/macOS版が存在**します！

### 利用可能なLinux/macOS版ツール
- **waifu2x-ncnn-vulkan**: https://github.com/nihui/waifu2x-ncnn-vulkan (全プラットフォーム対応)
- **srmd-ncnn-vulkan**: https://github.com/nihui/srmd-ncnn-vulkan (全プラットフォーム対応)
- **realsr-ncnn-vulkan**: https://github.com/nihui/realsr-ncnn-vulkan (全プラットフォーム対応)
- **Real-CUGAN**: https://github.com/bilibili/ailab (全プラットフォーム対応)
- **rife-ncnn-vulkan**: https://github.com/nihui/rife-ncnn-vulkan (全プラットフォーム対応)
- **cain-ncnn-vulkan**: https://github.com/nihui/cain-ncnn-vulkan (全プラットフォーム対応)
- **dain-ncnn-vulkan**: https://github.com/nihui/dain-ncnn-vulkan (全プラットフォーム対応)
- **FFmpeg**: 全プラットフォーム対応（apt/yum/brewでインストール可能）
- **ImageMagick**: 全プラットフォーム対応（apt/yum/brewでインストール可能）
- **gifsicle**: 全プラットフォーム対応（apt/yum/brewでインストール可能）
- **SoX**: 全プラットフォーム対応（apt/yum/brewでインストール可能）
- **wget**: Linux/macOSにプリインストール
- **Anime4KCPP**: https://github.com/TianZerL/Anime4KCPP (全プラットフォーム対応)
- **waifu2x-converter-cpp**: https://github.com/DeadSix27/waifu2x-converter-cpp (全プラットフォーム対応)
- **waifu2x-caffe**: Linuxでも動作可能（要CUDA）
- **APNG tools**: 全プラットフォーム対応

### 唯一の例外
- **nircmd**: Windows専用 → Linux/macOSではシステムコマンドで代替

## 優先度: 高 - 共通定義（最初に実施）

### Task 1: プラットフォーム共通定義ヘッダーの作成
- [ ] platform_utils.hを新規作成
- [ ] 実行ファイル拡張子の定義（EXE_SUFFIX）
- [ ] システムコマンドの定義（EXPLORER_CMD, KILL_CMD等）
- [ ] パス区切り文字の処理関数

### Task 2: mainwindow.hの修正
- [ ] windows.hのインクルードを削除
- [ ] platform_utils.hをインクルード
- [ ] Windows固有の定義を条件コンパイルで囲む

## 優先度: 高 - 実行ファイル名の修正（並列作業可能）

### Task 3: waifu2x_ncnn_vulkan.cpp
- [ ] .exe拡張子のハードコーディングを修正（全11箇所）
- [ ] EXE_SUFFIXマクロを使用

### Task 4: realsr_ncnn_vulkan.cpp
- [ ] .exe拡張子のハードコーディングを修正（全6箇所）

### Task 5: srmd_ncnn_vulkan.cpp
- [ ] .exe拡張子のハードコーディングを修正（全6箇所）

### Task 6: waifu2x_caffe.cpp
- [ ] .exe拡張子のハードコーディングを修正（全4箇所）

### Task 7: waifu2x_converter.cpp
- [ ] .exe拡張子のハードコーディングを修正（全5箇所）

### Task 8: srmd-cuda.cpp
- [ ] .exe拡張子のハードコーディングを修正（全5箇所）

### Task 9: Anime4K.cpp
- [ ] .exe拡張子のハードコーディングを修正（全箇所）

### Task 10: video.cpp
- [ ] ffmpeg_waifu2xEX.exe → ffmpeg + EXE_SUFFIX（全6箇所）
- [ ] sox_waifu2xEX.exe → sox + EXE_SUFFIX

### Task 11: gif.cpp
- [ ] ffprobe_waifu2xEX.exe → ffprobe + EXE_SUFFIX
- [ ] convert_waifu2xEX.exe → convert + EXE_SUFFIX
- [ ] gifsicle_waifu2xEX.exe → gifsicle + EXE_SUFFIX

### Task 12: image.cpp
- [ ] identify_waifu2xEX.exe → identify + EXE_SUFFIX
- [ ] convert_waifu2xEX.exe → convert + EXE_SUFFIX

### Task 13: AnimatedPNG.cpp
- [ ] apngdis_waifu2xEX.exe → apngdis + EXE_SUFFIX
- [ ] apngasm_waifu2xEX.exe → apngasm + EXE_SUFFIX

### Task 14: Frame_Interpolation.cpp
- [ ] rife/cain/dain-ncnn-vulkan_waifu2xEX.exe → EXE_SUFFIX対応

### Task 15: Web_Activities.cpp
- [ ] wget_waifu2xEX.exe → wget + EXE_SUFFIX

### Task 16: CompatibilityTest.cpp
- [ ] 全ての.exe拡張子をEXE_SUFFIX対応（約20箇所）

## 優先度: 高 - システムコマンド修正（並列作業可能）

### Task 17: mainwindow.cpp - プロセス管理
- [ ] taskkillコマンドをクロスプラットフォーム対応（全8箇所）
- [ ] Qtのプロセス管理APIまたはplatform_utilsの関数を使用

### Task 18: waifu2x.cpp - プロセス管理
- [ ] taskkillコマンドをクロスプラットフォーム対応（全3箇所）
- [ ] Kill_Process_Waifu2x()関数の修正

### Task 19: files.cpp - ファイルマネージャー起動
- [ ] explorer起動をクロスプラットフォーム対応
- [ ] Windows: explorer, macOS: open, Linux: xdg-open

### Task 20: Finish_Action.cpp - システム電源管理
- [ ] nircmdの代替実装
- [ ] Windows: nircmd, macOS/Linux: システムコマンド

## 優先度: 中 - パス処理（並列作業可能）

### Task 21: パス区切り文字の統一
- [ ] replace("/","\\")の箇所を全て検索
- [ ] QDir::toNativeSeparators()を使用

### Task 22: 一時ファイルパスの修正
- [ ] Windows固有のパス形式を修正
- [ ] QDir::tempPath()等のQt APIを使用

## 優先度: 中 - ビルド設定

### Task 23: .proファイルの修正
- [ ] プラットフォーム別の設定を追加
- [ ] Linux/macOS用のアイコン設定
- [ ] インストールパスの設定

### Task 24: ランチャーの修正
- [ ] Waifu2x-Extension-QT-Launcher.proの修正
- [ ] mainwindow.cpp/hの.exe拡張子対応

## 優先度: 高 - 外部ツールのLinux/macOS版準備

### Task 25: ncnn-vulkanベースツールのビルド/ダウンロード
- [ ] waifu2x-ncnn-vulkan のLinux/macOS版ビルド
- [ ] srmd-ncnn-vulkan のLinux/macOS版ビルド
- [ ] realsr-ncnn-vulkan のLinux/macOS版ビルド
- [ ] realcugan-ncnn-vulkan のLinux/macOS版ビルド
- [ ] rife/cain/dain-ncnn-vulkan のLinux/macOS版ビルド
- [ ] GitHubのReleaseページから直接ダウンロード可能

### Task 26: システムパッケージマネージャー対応
- [ ] Linux: apt/yum/pacmanでのインストールスクリプト作成
  ```bash
  # Ubuntu/Debian
  sudo apt install ffmpeg imagemagick gifsicle sox wget
  # Arch
  sudo pacman -S ffmpeg imagemagick gifsicle sox wget
  ```
- [ ] macOS: Homebrewでのインストールスクリプト作成
  ```bash
  brew install ffmpeg imagemagick gifsicle sox wget
  ```

### Task 27: Anime4KCPPとwaifu2x-converter-cppのビルド
- [ ] Anime4KCPP のcmakeビルド設定
- [ ] waifu2x-converter-cpp のcmakeビルド設定
- [ ] Linux/macOS用ビルドスクリプト作成

### Task 28: バイナリ配置とパス解決
- [ ] 実行ファイルの検索順序実装
  1. アプリケーションバンドル内
  2. システムPATH
  3. 標準インストールパス（/usr/local/bin等）
- [ ] which/whereコマンドでの自動検出機能

## テスト・検証

### Task 29: Linux環境でのビルドテスト
- [ ] Ubuntu/Debian系でのビルド確認
- [ ] 依存関係の確認
- [ ] 全ての外部ツールの動作確認

### Task 30: macOS環境でのビルドテスト
- [ ] macOS 10.15以降でのビルド確認
- [ ] App Bundle作成
- [ ] 全ての外部ツールの動作確認

### Task 31: 機能テスト
- [ ] 基本的な画像処理機能
- [ ] 動画処理機能
- [ ] GIF処理機能

## Linux配布形式の検討

### Task 32: パッケージング戦略
- [ ] **AppImage形式**: 全依存関係を含む単一実行ファイル（推奨）
- [ ] **Flatpak/Snap**: サンドボックス環境での配布
- [ ] **ネイティブパッケージ**: deb/rpm形式
- [ ] **インストールスクリプト**: 依存関係を自動インストール

## 注意事項
- 各タスクは独立して実施可能
- ヘッダーファイル（Task 1-2）は最優先で実施
- コンパイルエラーを避けるため、未定義マクロは仮定義を追加