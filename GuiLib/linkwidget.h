#ifndef LINKWIDGET_H
#define LINKWIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>

#include "GuiLib_global.h"

class GUILIB_EXPORT LinkWidget : public QWidget
{
    Q_OBJECT

public:
    explicit LinkWidget(QWidget *parent = nullptr);

    void setLabel(const QString &name);
    void setLink(const QString &path);
    void setIcon(const QIcon &icon);

    QString getLabel() const;
    QString getLink() const;

signals:

private:
    QPushButton *_button;
    QLabel *_labelName;
    QVBoxLayout *_layout;

    QString _path;
};

#endif // LINKWIDGET_H
