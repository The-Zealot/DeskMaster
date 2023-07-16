#include "mainform.h"
#include "ui_mainform.h"

MainForm::MainForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainForm)
{
    ui->setupUi(this);

    ///////////////////// test XmlManager /////////////////////

    XmlManager manager(this);

    qDebug() << "Extracting xml:" << manager.extract("c:/users/sensei/desktop/dmstruct.xml");

    qDebug() << manager.getMultiMap();
}

MainForm::~MainForm()
{
    delete ui;
}
