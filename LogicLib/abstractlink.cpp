#include "abstractlink.h"

AbstractLink::AbstractLink(const QString &name, const QString &path, QObject *parent)
{
    setName(name);
    setPath(path);
}

void AbstractLink::setName(const QString &name)
{
    _name = name;
}

void AbstractLink::setPath(const QString &path)
{
    _path = path;
}

QString AbstractLink::getName()
{
    return _name;
}

QString AbstractLink::getPath()
{
    return _path;
}
