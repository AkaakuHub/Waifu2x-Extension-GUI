# Worker 2: 最終タスク - srmd-cuda.cpp修正

## 新規タスク

### srmd-cuda.cppの.exe拡張子修正
- [x] platform_utils.hをインクルード
- [x] 5箇所の.exe拡張子をSRMD_CUDA_NAMEマクロに置換
  - 行109: "/srmd-cuda_waifu2xEX.exe" → "/" + SRMD_CUDA_NAME
  - 行394: "/srmd-cuda_waifu2xEX.exe" → "/" + SRMD_CUDA_NAME
  - 行781: "/srmd-cuda_waifu2xEX.exe" → "/" + SRMD_CUDA_NAME
  - 行1313: "/srmd-cuda_waifu2xEX.exe" → "/" + SRMD_CUDA_NAME
  - 行1559: "/srmd-cuda_waifu2xEX.exe" → "/" + SRMD_CUDA_NAME

## 作業方法
1. ファイル先頭に `#include "platform_utils.h"` を追加
2. 各行の実行ファイル名を以下のように修正：
   ```cpp
   // 変更前
   QString program = Waifu2x_folder_path + "/srmd-cuda_waifu2xEX.exe";
   // 変更後
   QString program = Waifu2x_folder_path + "/" + SRMD_CUDA_NAME;
   ```

## 完了済みタスク ✅
- Task 3: waifu2x_ncnn_vulkan.cpp
- Task 6: waifu2x_caffe.cpp
- Task 7: waifu2x_converter.cpp
- Task 18: waifu2x.cpp - プロセス管理
- Task 16: CompatibilityTest.cpp（一部）

## 完了した作業の詳細

### 1. platform_utils.h の作成
- プラットフォーム別の実行ファイル拡張子マクロ（EXE_SUFFIX）
- システムコマンドのクロスプラットフォーム対応（EXPLORER_CMD、KILL_CMD_TEMPLATE等）
- 各種ツールの実行ファイル名マクロ（WAIFU2X_NCNN_VULKAN_NAME等）
- PlatformUtilsクラスによるヘルパー関数群

### 2. 各ファイルの修正内容

#### mainwindow.cpp
- waifu2x_ncnn_vulkan_ProgramPathの設定部分を修正（3箇所）
- WAIFU2X_NCNN_VULKAN_NAME、WAIFU2X_NCNN_VULKAN_FP16P_NAMEマクロを使用

#### waifu2x_caffe.cpp
- platform_utils.hをインクルード
- 4箇所の.exe拡張子をWAIFU2X_CAFFE_NAMEマクロに置換

#### waifu2x_converter.cpp
- platform_utils.hをインクルード
- 5箇所の.exe拡張子をWAIFU2X_CONVERTER_NAMEマクロに置換

#### waifu2x.cpp
- tasklistコマンドをクロスプラットフォーム対応（Windows: tasklist、その他: ps -eo comm）
- 3箇所で条件コンパイル（#ifdef Q_OS_WIN）を使用
- PlatformUtils::killProcess()は既に使用されていた

#### CompatibilityTest.cpp
- ユーザー/リンターにより既に修正済み
- 全てのツール名がplatform_utils.hのマクロを使用するよう更新済み