#ifndef FOLDERLINK_H
#define FOLDERLINK_H

#include <QProcess>

#include "abstractlink.h"

class FolderLink : public AbstractLink
{
    Q_OBJECT
public:
    explicit FolderLink(const QString &name, const QString &path, QObject *parent = nullptr);

public slots:
    void open() override;
};

#endif // FOLDERLINK_H
