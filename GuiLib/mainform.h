#ifndef MAINFORM_H
#define MAINFORM_H

#include <QWidget>

#include "GuiLib_global.h"
#include <xmlmanager.h>

namespace Ui {
class MainForm;
}

class GUILIB_EXPORT MainForm : public QWidget
{
    Q_OBJECT

public:
    explicit MainForm(QWidget *parent = nullptr);
    ~MainForm();

private:
    Ui::MainForm *ui;
};

#endif // MAINFORM_H
