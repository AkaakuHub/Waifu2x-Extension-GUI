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
    
    // Find tool in conda environment, downloaded tools, system PATH, or application directory
    static QString findTool(const QString& toolName, const QString& appDir = QString())
    {
        QString currentPath = appDir.isEmpty() ? qApp->applicationDirPath() : appDir;
        
        // 1. Check conda environment first (Linux priority)
#ifdef Q_OS_LINUX
        QString condaEnvPath = qgetenv("CONDA_ENV_PATH");
        if (!condaEnvPath.isEmpty()) {
            QString condaPath = condaEnvPath + "/bin/" + toolName;
            if (QFile::exists(condaPath)) {
                return condaPath;
            }
            // For ImageMagick tools, also check 'magick' command
            if (toolName == "convert" || toolName == "identify") {
                QString magickPath = condaEnvPath + "/bin/magick";
                if (QFile::exists(magickPath)) {
                    return magickPath;
                }
            }
        }
#endif

        // 2. Check downloaded AI tools in ncnn-vulkan-tools
        QString appRoot = currentPath + "/../../tools/ncnn-vulkan-tools/bin";
        QDir toolsDir(appRoot);
        if (toolsDir.exists()) {
            QString toolPath = appRoot + "/" + toolName;
            QDir specificToolDir(toolPath);
            if (specificToolDir.exists()) {
                // Find the actual executable in subdirectories
                QStringList subdirs = specificToolDir.entryList(QDir::Dirs | QDir::NoDotAndDotDot);
                for (const QString& subdir : subdirs) {
                    QString execPath = toolPath + "/" + subdir + "/" + toolName;
                    if (QFile::exists(execPath)) {
                        return execPath;
                    }
                }
            }
        }

        // 3. Check system PATH using which (macOS/Linux) or where (Windows)
#if defined(Q_OS_MAC) || defined(Q_OS_LINUX)
        QProcess which;
        which.start("which", QStringList() << toolName);
        if (which.waitForFinished(3000)) {
            QString systemPath = QString::fromUtf8(which.readAllStandardOutput()).trimmed();
            if (!systemPath.isEmpty() && QFile::exists(systemPath)) {
                return systemPath;
            }
        }
#elif defined(Q_OS_WIN)
        QProcess where;
        where.start("where", QStringList() << toolName);
        if (where.waitForFinished(3000)) {
            QString systemPath = QString::fromUtf8(where.readAllStandardOutput()).trimmed();
            if (!systemPath.isEmpty() && QFile::exists(systemPath)) {
                return systemPath;
            }
        }
#endif
        
        // 4. Check application directory
        QString localPath = currentPath + "/" + getExecutableName(toolName);
        if (QFile::exists(localPath)) {
            return localPath;
        }
        
        // 5. For Windows, check with _waifu2xEX suffix
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

// Convenience macros for common tool names - use same approach for all platforms
#define FFMPEG_NAME PlatformUtils::findTool("ffmpeg")
#define FFPROBE_NAME PlatformUtils::findTool("ffprobe")
#define CONVERT_NAME PlatformUtils::findTool("convert")
#define MAGICK_NAME PlatformUtils::findTool("magick")
#define IDENTIFY_NAME PlatformUtils::findTool("identify")
#define GIFSICLE_NAME PlatformUtils::findTool("gifsicle")
#define WGET_NAME PlatformUtils::findTool("wget")
#define SOX_NAME PlatformUtils::findTool("sox")

// AI tools - use smart detection for all platforms
#define WAIFU2X_NCNN_VULKAN_NAME PlatformUtils::findTool("waifu2x-ncnn-vulkan")
#define WAIFU2X_NCNN_VULKAN_FP16P_NAME PlatformUtils::findTool("waifu2x-ncnn-vulkan-fp16p") 
#define WAIFU2X_CONVERTER_NAME PlatformUtils::findTool("waifu2x-converter-cpp")
#define WAIFU2X_CAFFE_NAME PlatformUtils::findTool("waifu2x-caffe")
#define SRMD_NCNN_VULKAN_NAME PlatformUtils::findTool("srmd-ncnn-vulkan")
#define SRMD_CUDA_NAME PlatformUtils::findTool("srmd-cuda")
#define REALSR_NCNN_VULKAN_NAME PlatformUtils::findTool("realsr-ncnn-vulkan")
#define REALCUGAN_NCNN_VULKAN_NAME PlatformUtils::findTool("realcugan-ncnn-vulkan")
#define RIFE_NCNN_VULKAN_NAME PlatformUtils::findTool("rife-ncnn-vulkan")
#define CAIN_NCNN_VULKAN_NAME PlatformUtils::findTool("cain-ncnn-vulkan")
#define DAIN_NCNN_VULKAN_NAME PlatformUtils::findTool("dain-ncnn-vulkan")
#define ANIME4K_NAME PlatformUtils::findTool("Anime4K")

// Frame interpolation tools already defined above

// APNG tools
#define APNGDIS_NAME PlatformUtils::getExecutableName("apngdis_waifu2xEX")
#define APNGASM_NAME PlatformUtils::getExecutableName("apngasm_waifu2xEX")

#endif // PLATFORM_UTILS_H