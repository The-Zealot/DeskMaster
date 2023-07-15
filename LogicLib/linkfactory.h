#ifndef LINKFACTORY_H
#define LINKFACTORY_H

#include "LogicLib_global.h"
#include "abstractlink.h"

class LOGICLIB_EXPORT ILinkFactory
{
public:
    virtual AbstractLink *create(const QString &name, const QString &path) = 0;
};

#endif // LINKFACTORY_H
