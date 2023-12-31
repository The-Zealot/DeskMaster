#ifndef FILELINKFACTORY_H
#define FILELINKFACTORY_H

#include <QObject>

#include "LogicLib_global.h"
#include "linkfactory.h"
#include "filelink.h"

class LOGICLIB_EXPORT FileLinkFactory : public ILinkFactory
{
public:
    FileLinkFactory();

    AbstractLink *create(const QString &name, const QString &path) override;
};

#endif // FILELINKFACTORY_H
