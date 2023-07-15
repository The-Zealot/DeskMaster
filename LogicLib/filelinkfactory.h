#ifndef FILELINKFACTORY_H
#define FILELINKFACTORY_H

#include <QObject>

#include "linkfactory.h"
#include "filelink.h"

class FileLinkFactory : public ILinkFactory
{
    Q_OBJECT
public:
    FileLinkFactory();

public:
    AbstractLink *create(const QString &name, const QString &path) override;
};

#endif // FILELINKFACTORY_H
