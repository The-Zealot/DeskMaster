#ifndef ABSTRACTLINK_H
#define ABSTRACTLINK_H

#include <QObject>

class AbstractLink : public QObject
{
    Q_OBJECT
public:
    explicit AbstractLink(QObject *parent = nullptr);

signals:

private:
    QString _name;
    QString _path;
};

#endif // ABSTRACTLINK_H
