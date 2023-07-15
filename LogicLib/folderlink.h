#ifndef FOLDERLINK_H
#define FOLDERLINK_H

#include <QProcess>

#include "LogicLib_global.h"
#include "abstractlink.h"

class LOGICLIB_EXPORT FolderLink : public AbstractLink
{
    Q_OBJECT
public:
    explicit FolderLink(const QString &name, const QString &path, QObject *parent = nullptr);

public slots:
    void open() override;
};

#endif // FOLDERLINK_H
