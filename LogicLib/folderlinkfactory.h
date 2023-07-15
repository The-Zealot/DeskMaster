#ifndef FOLDERLINKFACTORY_H
#define FOLDERLINKFACTORY_H

#include <QObject>

#include "linkfactory.h"
#include "folderlink.h"

class FolderLinkFactory : public ILinkFactory
{
    Q_OBJECT
public:
    FolderLinkFactory();

    AbstractLink *create(const QString &name, const QString &path) override;
};

#endif // FOLDERLINKFACTORY_H
