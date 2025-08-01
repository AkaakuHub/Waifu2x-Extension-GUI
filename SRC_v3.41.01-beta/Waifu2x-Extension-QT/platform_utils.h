/*
    Copyright (C) 2021  Aaron Feng

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Affero General Public License as published
    by the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Affero General Public License for more details.

    You should have received a copy of the GNU Affero General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.

    My Github homepage: https://github.com/AaronFeng753
*/

#ifndef PLATFORM_UTILS_H
#define PLATFORM_UTILS_H

#include <QString>
#include <QDir>
#include <QProcess>
#include <QFile>
#include <QApplication>

// Platform-specific executable suffix
#ifdef Q_OS_WIN
    #define EXE_SUFFIX ".exe"
    #define BAT_SUFFIX ".bat"
#else
    #define EXE_SUFFIX ""
    #define BAT_SUFFIX ".sh"
#endif

// Platform-specific system commands
#ifdef Q_OS_WIN
    #define EXPLORER_CMD "explorer"
    #define KILL_CMD_TEMPLATE "taskkill /f /t /fi \"imagename eq %1\""
    #define SYSTEM_SLEEP_CMD "rundll32.exe powrprof.dll,SetSuspendState 0,1,0"
    #define SYSTEM_HIBERNATE_CMD "rundll32.exe powrprof.dll,SetSuspendState 1,1,0"
    #define MONITOR_OFF_CMD "powershell (Add-Type '[DllImport(\"user32.dll\")]public static extern int SendMessage(int hWnd,int hMsg,int wParam,int lParam);' -Name a -Pas)::SendMessage(-1,0x0112,0xF170,2)"
#elif defined(Q_OS_MAC)
    #define EXPLORER_CMD "open"
    #define KILL_CMD_TEMPLATE "pkill -f %1"
    #define SYSTEM_SLEEP_CMD "pmset sleepnow"
    #define SYSTEM_HIBERNATE_CMD "pmset sleepnow"  // macOS doesn't have separate hibernate
    #define MONITOR_OFF_CMD "pmset displaysleepnow"
#else  // Linux
    #define EXPLORER_CMD "xdg-open"
    #define KILL_CMD_TEMPLATE "pkill -f %1"
    #define SYSTEM_SLEEP_CMD "systemctl suspend"
    #define SYSTEM_HIBERNATE_CMD "systemctl hibernate"
    #define MONITOR_OFF_CMD "xset dpms force off"
#endif

// Helper functions for cross-platform operations
class PlatformUtils
{
public:
    // Get executable name with proper suffix
    static QString getExecutableName(const QString& baseName)
    {
        return baseName + EXE_SUFFIX;
    }
    
    // Get batch/script file name with proper suffix
    static QString getScriptName(const QString& baseName)
    {
        return baseName + BAT_SUFFIX;
    }
    
    // Open folder in system file manager
    static bool openFolder(const QString& folderPath)
    {
        if (!QDir(folderPath).exists())
            return false;
            
        QString path = QDir::toNativeSeparators(folderPath);
        return QProcess::execute(QString("%1 \"%2\"").arg(EXPLORER_CMD).arg(path)) == 0;
    }
    
    // Kill process by name
    static bool killProcess(const QString& processName)
    {
        QString cmd = QString(KILL_CMD_TEMPLATE).arg(processName);
        return QProcess::execute(cmd) == 0;
    }
    
    // System power management
    static bool systemSleep()
    {
        return QProcess::execute(SYSTEM_SLEEP_CMD) == 0;
    }
    
    static bool systemHibernate()
    {
        return QProcess::execute(SYSTEM_HIBERNATE_CMD) == 0;
    }
    
    static bool monitorOff()
    {
        return QProcess::execute(MONITOR_OFF_CMD) == 0;
    }
    
    // Convert path to native separators
    static QString toNativePath(const QString& path)
    {
        return QDir::toNativeSeparators(path);
    }
    
    // Get system temp directory
    static QString getTempPath()
    {
        return QDir::tempPath();
    }
    
    // Find tool in system PATH or application directory
    static QString findTool(const QString& toolName, const QString& appDir = QString())
    {
#ifdef Q_OS_MAC
        // First check if tool exists in system PATH
        QProcess which;
        which.start("which", QStringList() << toolName);
        if (which.waitForFinished(3000)) {
            QString systemPath = QString::fromUtf8(which.readAllStandardOutput()).trimmed();
            if (!systemPath.isEmpty() && QFile::exists(systemPath)) {
                return systemPath;
            }
        }
#endif
        
        // Then check application directory
        QString currentPath = appDir.isEmpty() ? qApp->applicationDirPath() : appDir;
        QString localPath = currentPath + "/" + getExecutableName(toolName);
        if (QFile::exists(localPath)) {
            return localPath;
        }
        
        // For Windows, check with _waifu2xEX suffix
#ifdef Q_OS_WIN
        QString winPath = currentPath + "/" + getExecutableName(toolName + "_waifu2xEX");
        if (QFile::exists(winPath)) {
            return winPath;
        }
#endif
        
        // Not found
        return QString();
    }
};

// Convenience macros for common tool names
#ifdef Q_OS_MAC
#define FFMPEG_NAME PlatformUtils::getExecutableName("ffmpeg")
#define FFPROBE_NAME PlatformUtils::getExecutableName("ffprobe")
#define CONVERT_NAME PlatformUtils::getExecutableName("convert")
#define IDENTIFY_NAME PlatformUtils::getExecutableName("identify")
#define GIFSICLE_NAME PlatformUtils::getExecutableName("gifsicle")
#define WGET_NAME PlatformUtils::getExecutableName("wget")
#define SOX_NAME PlatformUtils::getExecutableName("sox")
#else
#define FFMPEG_NAME PlatformUtils::getExecutableName("ffmpeg_waifu2xEX")
#define FFPROBE_NAME PlatformUtils::getExecutableName("ffprobe_waifu2xEX")
#define CONVERT_NAME PlatformUtils::getExecutableName("convert_waifu2xEX")
#define IDENTIFY_NAME PlatformUtils::getExecutableName("identify_waifu2xEX")
#define GIFSICLE_NAME PlatformUtils::getExecutableName("gifsicle_waifu2xEX")
#define WGET_NAME PlatformUtils::getExecutableName("wget_waifu2xEX")
#define SOX_NAME PlatformUtils::getExecutableName("sox_waifu2xEX")
#endif

// Waifu2x variants
#ifdef Q_OS_MAC
#define WAIFU2X_NCNN_VULKAN_NAME PlatformUtils::getExecutableName("waifu2x-ncnn-vulkan")
#define WAIFU2X_NCNN_VULKAN_FP16P_NAME PlatformUtils::getExecutableName("waifu2x-ncnn-vulkan-fp16p")
#define WAIFU2X_CONVERTER_NAME PlatformUtils::getExecutableName("waifu2x-converter-cpp")
#define WAIFU2X_CAFFE_NAME PlatformUtils::getExecutableName("waifu2x-caffe")
#else
#define WAIFU2X_NCNN_VULKAN_NAME PlatformUtils::getExecutableName("waifu2x-ncnn-vulkan_waifu2xEX")
#define WAIFU2X_NCNN_VULKAN_FP16P_NAME PlatformUtils::getExecutableName("waifu2x-ncnn-vulkan-fp16p_waifu2xEX")
#define WAIFU2X_CONVERTER_NAME PlatformUtils::getExecutableName("waifu2x-converter-cpp_waifu2xEX")
#define WAIFU2X_CAFFE_NAME PlatformUtils::getExecutableName("waifu2x-caffe_waifu2xEX")
#endif

// Other AI models
#ifdef Q_OS_MAC
#define SRMD_NCNN_VULKAN_NAME PlatformUtils::getExecutableName("srmd-ncnn-vulkan")
#define SRMD_CUDA_NAME PlatformUtils::getExecutableName("srmd-cuda")
#define REALSR_NCNN_VULKAN_NAME PlatformUtils::getExecutableName("realsr-ncnn-vulkan")
#define ANIME4K_NAME PlatformUtils::getExecutableName("Anime4K")
#else
#define SRMD_NCNN_VULKAN_NAME PlatformUtils::getExecutableName("srmd-ncnn-vulkan_waifu2xEX")
#define SRMD_CUDA_NAME PlatformUtils::getExecutableName("srmd-cuda_waifu2xEX")
#define REALSR_NCNN_VULKAN_NAME PlatformUtils::getExecutableName("realsr-ncnn-vulkan_waifu2xEX")
#define ANIME4K_NAME PlatformUtils::getExecutableName("Anime4K_waifu2xEX")
#endif

// Frame interpolation
#ifdef Q_OS_MAC
#define RIFE_NCNN_VULKAN_NAME PlatformUtils::getExecutableName("rife-ncnn-vulkan")
#define CAIN_NCNN_VULKAN_NAME PlatformUtils::getExecutableName("cain-ncnn-vulkan")
#define DAIN_NCNN_VULKAN_NAME PlatformUtils::getExecutableName("dain-ncnn-vulkan")
#else
#define RIFE_NCNN_VULKAN_NAME PlatformUtils::getExecutableName("rife-ncnn-vulkan_waifu2xEX")
#define CAIN_NCNN_VULKAN_NAME PlatformUtils::getExecutableName("cain-ncnn-vulkan_waifu2xEX")
#define DAIN_NCNN_VULKAN_NAME PlatformUtils::getExecutableName("dain-ncnn-vulkan_waifu2xEX")
#endif

// APNG tools
#define APNGDIS_NAME PlatformUtils::getExecutableName("apngdis_waifu2xEX")
#define APNGASM_NAME PlatformUtils::getExecutableName("apngasm_waifu2xEX")

#endif // PLATFORM_UTILS_H