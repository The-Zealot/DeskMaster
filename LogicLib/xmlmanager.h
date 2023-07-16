#ifndef XMLMANAGER_H
#define XMLMANAGER_H

#include <QObject>
#include <QXmlStreamWriter>
#include <QXmlStreamReader>
#include <QFile>
#include <QDebug>

#include "LogicLib_global.h"
#include "iextractor.h"
#include "ipackager.h"
#include "filelink.h"
#include "folderlink.h"
#include "filelinkfactory.h"
#include "folderlinkfactory.h"

class LOGICLIB_EXPORT XmlManager : public QObject, public IExtractor, public IPackager
{
    Q_OBJECT
public:
    explicit XmlManager(QObject *parent = nullptr);
    QMultiMap<QString, AbstractLink*> getMultiMap();
    virtual bool pack(const QString &filename) override;
    virtual bool extract(const QString &filename) override;

private:
    QMultiMap<QString, AbstractLink*> _multiMap;
};

#endif // XMLMANAGER_H
