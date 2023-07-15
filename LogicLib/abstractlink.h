#ifndef ABSTRACTLINK_H
#define ABSTRACTLINK_H

#include <QObject>

class AbstractLink : public QObject
{
    Q_OBJECT
public:
    explicit AbstractLink(const QString &name, const QString &path, QObject *parent = nullptr);

    void setName(const QString &name);
    void setPath(const QString &path);
    QString getName();
    QString getPath();

public slots:
    virtual void open() = 0;

signals:

protected:
    QString _name;
    QString _path;
};

#endif // ABSTRACTLINK_H
