#include "xmlmanager.h"

XmlManager::XmlManager(QObject *parent) : QObject(parent)
{

}

QMultiMap<QString, AbstractLink *> XmlManager::getMultiMap()
{
    return _multiMap;
}

bool XmlManager::pack(const QString &filename)
{
    QFile file(filename);
    if (!file.open(QIODevice::WriteOnly))
    {
        qDebug() << "File not open";
        return false;
    }

    // xml write

    file.close();
    return true;
}

bool XmlManager::extract(const QString &filename)
{
    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly))
    {
        qDebug() << "File not open";
        return false;
    }

    QXmlStreamReader reader(file.readAll());

    QString currentFolderName;
    while (!reader.atEnd() and !reader.hasError())
    {
        QXmlStreamReader::TokenType token = reader.readNext();
        if (token == QXmlStreamReader::StartDocument)
        {
            qDebug() << "Start reading xml...";
        }
        if (token == QXmlStreamReader::StartElement)
        {
            if (reader.name().toString() == "struct")
            {
                qDebug() << "Xml version:" << reader.attributes().value("version").toString();
                continue;
            }
            if (reader.name().toString() == "folder")
            {
                currentFolderName = reader.attributes().value("name").toString();
                continue;
            }
            if (reader.name().toString() == "link")
            {
                QString type = reader.attributes().value("type").toString();
                QString path = reader.text().toString();
                QString name = "Name";

                ILinkFactory* linkFactory = nullptr;
                if (type == "folder")
                {
                    linkFactory = new FolderLinkFactory();
                }
                if (type == "file")
                {
                    linkFactory = new FileLinkFactory();
                }

                if (linkFactory != nullptr)
                {
                    _multiMap.insert(currentFolderName, linkFactory->create(name, path));
                    delete linkFactory;
                }

            }
        }
    }

    return true;

    // xml read

    file.close();
}
