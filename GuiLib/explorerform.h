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
    explicit ExplorerForm(QWidget *parent = nullptr);
    ~ExplorerForm();

private:
    Ui::ExplorerForm *ui;
};

#endif // EXPLORERFORM_H
