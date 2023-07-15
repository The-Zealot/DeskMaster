#include "folderlinkfactory.h"

FolderLinkFactory::FolderLinkFactory()
{

}

AbstractLink *FolderLinkFactory::create(const QString &name, const QString &path)
{
    return new FolderLink(name, path);
}
