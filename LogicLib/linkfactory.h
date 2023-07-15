#ifndef LINKFACTORY_H
#define LINKFACTORY_H

#include "abstractlink.h"

class ILinkFactory
{
public:
    virtual AbstractLink *create(const QString &name, const QString &path) = 0;
};

#endif // LINKFACTORY_H
