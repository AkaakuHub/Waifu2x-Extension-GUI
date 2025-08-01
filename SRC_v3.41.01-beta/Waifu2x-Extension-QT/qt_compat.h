#ifndef QT_COMPAT_H
#define QT_COMPAT_H

#include <QSettings>
#include <QtGlobal>

#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
#include <QTextCodec>
#else
#include <QStringConverter>
#endif

// Qt5/Qt6 compatibility helper for QSettings codec
inline void setSettingsCodec(QSettings* settings, const char* codecName = "UTF-8")
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    settings->setIniCodec(QTextCodec::codecForName(codecName));
#else
    // Qt6 handles UTF-8 by default, no need to set codec
    Q_UNUSED(settings)
    Q_UNUSED(codecName)
#endif
}

#endif // QT_COMPAT_H