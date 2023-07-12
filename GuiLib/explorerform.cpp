#include "explorerform.h"
#include "ui_explorerform.h"

ExplorerForm::ExplorerForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ExplorerForm)
{
    ui->setupUi(this);
}

ExplorerForm::~ExplorerForm()
{
    delete ui;
}
