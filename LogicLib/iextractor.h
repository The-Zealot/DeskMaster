#ifndef IEXTRACTOR_H
#define IEXTRACTOR_H

#include "LogicLib_global.h"

class LOGICLIB_EXPORT IExtractor
{
public:
    virtual bool extract(const QString &filename) = 0;
};

#endif // IEXTRACTOR_H
