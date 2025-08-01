#ifndef BINARY_FINDER_H
#define BINARY_FINDER_H

#include <QString>
#include <QStringList>
#include <QFile>
#include <QDir>
#include <QProcess>
#include <QDebug>

class BinaryFinder
{
public:
    static QString findBinary(const QString &binaryName, const QStringList &additionalPaths = QStringList())
    {
        QStringList searchPaths;
        
        // 1. Check application directory
        searchPaths << QCoreApplication::applicationDirPath();
        searchPaths << QCoreApplication::applicationDirPath() + "/tools";
        searchPaths << QCoreApplication::applicationDirPath() + "/bin";
        
        // 2. Check relative paths from build directory
        searchPaths << QDir::currentPath() + "/tools/bin";
        searchPaths << QDir::currentPath() + "/tools/ncnn-vulkan-tools/bin";
        
        // 3. Add custom paths
        searchPaths << additionalPaths;
        
        // 4. Check system paths
        searchPaths << "/usr/local/bin";
        searchPaths << "/usr/bin";
        searchPaths << "/opt/homebrew/bin"; // macOS ARM
        searchPaths << "/opt/local/bin";    // MacPorts
        
        // Platform-specific executable extension
        QString executableName = binaryName;
#ifdef Q_OS_WIN
        if (!executableName.endsWith(".exe")) {
            executableName += ".exe";
        }
#endif
        
        // Search in all paths
        for (const QString &path : searchPaths) {
            QString fullPath = QDir(path).absoluteFilePath(executableName);
            QFileInfo fileInfo(fullPath);
            
            if (fileInfo.exists() && fileInfo.isExecutable()) {
                qDebug() << "Found binary:" << fullPath;
                return fullPath;
            }
            
            // Also check subdirectories with tool name
            QString subDirPath = QDir(path).absoluteFilePath(binaryName + "/" + executableName);
            QFileInfo subDirInfo(subDirPath);
            if (subDirInfo.exists() && subDirInfo.isExecutable()) {
                qDebug() << "Found binary in subdirectory:" << subDirPath;
                return subDirPath;
            }
        }
        
        // 5. Try system 'which' or 'where' command
        QString systemPath = findUsingSystemCommand(executableName);
        if (!systemPath.isEmpty()) {
            return systemPath;
        }
        
        qWarning() << "Binary not found:" << binaryName;
        return QString();
    }
    
    static QStringList findAllVersions(const QString &binaryName)
    {
        QStringList versions;
        QStringList searchPaths;
        
        // Same search paths as findBinary
        searchPaths << QCoreApplication::applicationDirPath();
        searchPaths << QCoreApplication::applicationDirPath() + "/tools";
        searchPaths << QDir::currentPath() + "/tools/bin";
        searchPaths << "/usr/local/bin";
        searchPaths << "/usr/bin";
        
        QString executableName = binaryName;
#ifdef Q_OS_WIN
        if (!executableName.endsWith(".exe")) {
            executableName += ".exe";
        }
#endif
        
        // Search all paths and collect all found versions
        for (const QString &path : searchPaths) {
            QString fullPath = QDir(path).absoluteFilePath(executableName);
            QFileInfo fileInfo(fullPath);
            
            if (fileInfo.exists() && fileInfo.isExecutable()) {
                versions << fullPath;
            }
        }
        
        return versions;
    }
    
    static bool isBinaryAvailable(const QString &binaryName)
    {
        return !findBinary(binaryName).isEmpty();
    }
    
private:
    static QString findUsingSystemCommand(const QString &binaryName)
    {
        QProcess process;
        
#ifdef Q_OS_WIN
        process.start("where", QStringList() << binaryName);
#else
        process.start("which", QStringList() << binaryName);
#endif
        
        if (!process.waitForStarted() || !process.waitForFinished()) {
            return QString();
        }
        
        if (process.exitCode() == 0) {
            QString output = process.readAllStandardOutput().trimmed();
            QStringList lines = output.split('\n');
            if (!lines.isEmpty()) {
                return lines.first().trimmed();
            }
        }
        
        return QString();
    }
};

#endif // BINARY_FINDER_H