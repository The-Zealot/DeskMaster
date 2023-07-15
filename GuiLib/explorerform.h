#ifndef EXPLORERFORM_H
#define EXPLORERFORM_H

#include <QWidget>

#include "GuiLib_global.h"
#include "linkwidget.h"

namespace Ui {
class ExplorerForm;
}

class GUILIB_EXPORT ExplorerForm : public QWidget
{
    Q_OBJECT

public:
    explicit ExplorerForm(QRect rect = QRect(0, 0, 640, 480), const QString &title = "ExplorerForm", QWidget *parent = nullptr);
    ~ExplorerForm();

    void setLinksList(const QList<LinkWidget*> &list);

public slots:
    void drawLinks();

protected:
    void resizeEvent(QResizeEvent *event);

signals:
    void resized();

private:
    Ui::ExplorerForm *ui;

    QList<LinkWidget*> list;

};

#endif // EXPLORERFORM_H
