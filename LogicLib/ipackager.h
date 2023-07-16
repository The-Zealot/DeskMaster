#ifndef IPACKAGER_H
#define IPACKAGER_H

#include "LogicLib_global.h"

class LOGICLIB_EXPORT IPackager
{
public:
    virtual bool pack(const QString &filename) = 0;
};

#endif // IPACKAGER_H
