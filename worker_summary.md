# 作業者別タスク割り当て表

## Worker 1: 共通基盤担当 🔨
**最優先作業者** - 他の全員が依存
- platform_utils.h作成
- mainwindow.h修正
- パス処理統一
- ビルド設定
- **合計: 6タスク**

## Worker 2: Waifu2x系担当 🎨
- waifu2x_ncnn_vulkan.cpp
- waifu2x_caffe.cpp
- waifu2x_converter.cpp
- waifu2x.cpp
- **合計: 4タスク + CompatibilityTest一部**

## Worker 3: AI超解像系担当 🤖
- realsr_ncnn_vulkan.cpp
- srmd_ncnn_vulkan.cpp
- srmd-cuda.cpp
- Anime4K.cpp
- **合計: 4タスク + CompatibilityTest一部**

## Worker 4: メディア処理担当 📹
- video.cpp
- gif.cpp
- image.cpp
- AnimatedPNG.cpp
- Frame_Interpolation.cpp
- Web_Activities.cpp
- **合計: 6タスク**

## Worker 5: システム連携担当 💻
- mainwindow.cpp (プロセス管理)
- files.cpp
- Finish_Action.cpp
- CompatibilityTest.cpp (残り)
- **合計: 4タスク**

## Worker 6: ツール準備・テスト担当 🔧
- 外部ツールのビルド/ダウンロード
- インストールスクリプト作成
- ビルドテスト
- 機能テスト
- パッケージング
- **合計: 6タスク**

## 作業フロー
1. **Worker 1が最優先でTask 1-2を完了**
2. **Worker 2-5が並行して作業開始**（Worker 1のTask 1-2完了後）
3. **Worker 6は独立して作業可能**（すぐに開始できる）
4. 全員の作業完了後、Worker 6がテストを実施

## 推定作業時間
- Worker 1の基盤作業: 15-20分
- 並行作業: 30-40分
- テスト・統合: 20-30分
- **合計: 約1時間で完了可能**