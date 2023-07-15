#include "filelink.h"

FileLink::FileLink(const QString &name, const QString &path, QObject *parent) : AbstractLink(name, path, parent)
{

}

void FileLink::open()
{
    QProcess process(this);
    process.start(_path + "/" + _name);
}
