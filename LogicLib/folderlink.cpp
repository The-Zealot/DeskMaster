#include "folderlink.h"

FolderLink::FolderLink(const QString &name, const QString &path, QObject *parent) : AbstractLink(name, path, parent)
{

}

void FolderLink::open()
{
    QProcess process(this);
    process.start(_path);
}
