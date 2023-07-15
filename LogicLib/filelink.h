#ifndef FILELINK_H
#define FILELINK_H

#include <QProcess>

#include "abstractlink.h"

class FileLink : public AbstractLink
{
    Q_OBJECT
public:
    explicit FileLink(const QString &name, const QString &path, QObject *parent = nullptr);

    void open() override;
};

#endif // FILELINK_H
