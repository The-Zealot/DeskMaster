#ifndef FILELINK_H
#define FILELINK_H

#include <QProcess>

#include "LogicLib_global.h"
#include "abstractlink.h"

class LOGICLIB_EXPORT FileLink : public AbstractLink
{
    Q_OBJECT
public:
    explicit FileLink(const QString &name, const QString &path, QObject *parent = nullptr);

    void open() override;
};

#endif // FILELINK_H
