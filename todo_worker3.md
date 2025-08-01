# Worker 3: 最終タスク - nircmd参照修正

## 新規タスク

### mainwindow.cppのnircmd参照修正
- [x] 行2055のnircmdコマンドをクロスプラットフォーム対応に修正 **✅ 完了**
  - Windows: 現状のnircmdコマンドを維持
  - macOS/Linux: 代替実装（例：Qt APIを使用）

## 作業結果
✅ **完了** - 2025/08/01
- TurnOffScreen()関数をクロスプラットフォーム対応に修正
- プラットフォーム別の実装：
  - Windows: nircmd.exeを使用（従来通り）
  - macOS: `pmset displaysleepnow`コマンドを使用
  - Linux: `xset dpms force off`コマンドを使用

## 完了済みタスク ✅
- Task 4: realsr_ncnn_vulkan.cpp
- Task 5: srmd_ncnn_vulkan.cpp（Worker 1に移管済み）
- Task 8: srmd-cuda.cpp（Worker 2に移管済み）
- Task 9: Anime4K.cpp
- Task 16: CompatibilityTest.cpp（一部）