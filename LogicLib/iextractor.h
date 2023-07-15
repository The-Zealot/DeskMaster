#ifndef IEXTRACTOR_H
#define IEXTRACTOR_H

#include <QObject>

class IExtractor
{
public:
    virtual void extract(const QString &filename) = 0;
};

#endif // IEXTRACTOR_H
