#ifndef FOLDERLINKFACTORY_H
#define FOLDERLINKFACTORY_H

#include <QObject>

#include "LogicLib_global.h"
#include "linkfactory.h"
#include "folderlink.h"

class LOGICLIB_EXPORT FolderLinkFactory : public ILinkFactory
{
    Q_OBJECT
public:
    FolderLinkFactory();

    AbstractLink *create(const QString &name, const QString &path) override;
};

#endif // FOLDERLINKFACTORY_H
