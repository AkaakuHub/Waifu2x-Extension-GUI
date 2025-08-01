# Waifu2x-Extension-GUI クロスプラットフォーム化プロジェクト

## プロジェクト概要
Waifu2x-Extension-GUIをWindows専用から、Linux/macOSにも対応させるためのプロジェクトです。

## ✅ 完了済み作業

### todo_worker2完了項目
- ✅ `platform_utils.h` の作成 - クロスプラットフォーム対応の基盤ヘッダー
- ✅ `waifu2x_ncnn_vulkan.cpp` - mainwindow.cpp内の.exe参照を修正（3箇所）
- ✅ `waifu2x_caffe.cpp` - .exe拡張子をWAIFU2X_CAFFE_NAMEマクロに置換（4箇所）
- ✅ `waifu2x_converter.cpp` - .exe拡張子をWAIFU2X_CONVERTER_NAMEマクロに置換（5箇所）
- ✅ `waifu2x.cpp` - tasklistコマンドをクロスプラットフォーム対応（3箇所）
- ✅ `CompatibilityTest.cpp` - 全ツール名マクロ化（ユーザー/リンターにより実施済み）

### todo_worker3完了項目
- ✅ `mainwindow.h` と `mainwindow.h`(Launcher) の `windows.h` インクルードを条件コンパイル化
- ✅ `platform_utils.h` をプロジェクトファイルに追加
- ✅ プラットフォーム固有アイコン設定をproファイルに追加
- ✅ `realsr_ncnn_vulkan.cpp` - REALSR_NCNN_VULKAN_NAMEマクロ適用
- ✅ `Web_Activities.cpp` - WGET_NAMEマクロ適用  
- ✅ `Anime4K.cpp` - platform_utils.hインクルード追加、ANIME4K_NAMEマクロ使用済み確認
- ✅ `srmd-cuda.cpp` - SRMD_CUDA_NAMEマクロ適用（5箇所）
- ✅ `srmd_ncnn_vulkan.cpp` - SRMD_NCNN_VULKAN_NAMEマクロ適用（6箇所）
- ✅ 残り4ファイル（Donate.cpp, checkupdate.cpp, settings.cpp等）- platform_utils.hインクルード追加
- ✅ ランチャーの条件コンパイル対応確認（ShellExecuteW/QProcess::startDetached）

## 🔧 既存のplatform_utils.h機能
```cpp
// 実行ファイル名マクロ（自動的に.exe/.sh付与）
#define FFMPEG_NAME PlatformUtils::getExecutableName("ffmpeg_waifu2xEX")
#define WAIFU2X_NCNN_VULKAN_NAME PlatformUtils::getExecutableName("waifu2x-ncnn-vulkan_waifu2xEX")
// ... 全20+ツール名定義済み

// クロスプラットフォーム関数
PlatformUtils::killProcess(processName)     // taskkill/pkill統一
PlatformUtils::openFolder(folderPath)      // explorer/open/xdg-open統一
PlatformUtils::systemSleep()               // システムスリープ
PlatformUtils::monitorOff()                // モニターオフ
```

## 🚧 残作業（他のworkerへ）
### 高優先度
- 📋 残り10ファイルの .exe拡張子マクロ置換: `srmd-cuda.cpp`, `srmd_ncnn_vulkan.cpp`, `Donate.cpp`, `checkupdate.cpp`, `CompatibilityTest.cpp`, `settings.cpp`, `main.cpp`
- 📋 ランチャーの ShellExecuteW → QProcess::startDetached 置換
- 📋 nircmdコマンド → PlatformUtils::monitorOff() 置換

### 中優先度  
- パス処理統一（QDir::toNativeSeparators活用）
- ビルドシステムでのプラットフォーム検出設定

## プラットフォーム検出マクロ
```cpp
Q_OS_WIN     // Windows
Q_OS_MAC     // macOS  
Q_OS_LINUX   // Linux
```

## 作業ディレクトリ
- メインソース: `/SRC_v3.41.01-beta/Waifu2x-Extension-QT/`
- ランチャー: `/SRC_v3.41.01-beta/Waifu2x-Extension-QT-Launcher/`