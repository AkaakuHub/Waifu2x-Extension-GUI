# Waifu2x-Extension-GUI クロスプラットフォーム化プロジェクト

## プロジェクト概要
Waifu2x-Extension-GUIをWindows専用から、Linux/macOSにも対応させるためのプロジェクトです。

## 基本方針
- Qtフレームワークを活用した最小限の変更でクロスプラットフォーム対応を実現
- 並列作業可能なようにタスクを細分化
- プラットフォーム固有のコードは条件コンパイルで分離

## 主な変更対象
1. 実行ファイル拡張子（.exe）のハードコーディング
2. Windows専用システムコマンド（taskkill、explorer、nircmd）
3. windows.hヘッダーの依存
4. パス区切り文字の扱い
5. 外部ツールのバイナリ管理

## 作業ディレクトリ
- メインソース: `/SRC_v3.41.01-beta/Waifu2x-Extension-QT/`
- ランチャー: `/SRC_v3.41.01-beta/Waifu2x-Extension-QT-Launcher/`

## 並列作業時の注意事項
- 各ファイルの変更は独立して実施可能
- ヘッダーファイルの共通定義は最初に実施
- テスト環境がない場合は、コンパイルエラーが出ないことを最優先

## プラットフォーム検出マクロ
```cpp
Q_OS_WIN     // Windows
Q_OS_MAC     // macOS  
Q_OS_LINUX   // Linux
```