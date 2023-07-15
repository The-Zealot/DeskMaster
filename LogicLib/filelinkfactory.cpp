#include "filelinkfactory.h"

FileLinkFactory::FileLinkFactory()
{

}

AbstractLink *FileLinkFactory::create(const QString &name, const QString &path)
{
    return new FileLink(name, path);
}
