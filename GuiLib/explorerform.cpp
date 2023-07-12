#include "explorerform.h"
#include "ui_explorerform.h"

#include <QFileIconProvider>
#include <QFileInfo>

ExplorerForm::ExplorerForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ExplorerForm)
{
    ui->setupUi(this);

//    this->setWindowFlags(Qt::WindowStaysOnBottomHint);

    QGridLayout* grid = qobject_cast<QGridLayout*>(ui->scrollAreaWidgetContents->layout());

    for (int i = 0, x = 0, y = 0; i < 70; i++)
    {
        LinkWidget *link = new LinkWidget(this);
        if ((x + 1) * link->width() > this->width())
        {
            y++;
            x = 0;
        }
        grid->addWidget(link, y, x);
        link->setLabel("New folder " + QVariant(i + 1).toString());
        link->show();
//        link->setIcon(QIcon(":/icons/folders/white.png"));
//        link->setIcon(QFileIconProvider().icon(QFileInfo("D:\\Games\\Diablo 2\\Diablo 2.exe")));
        link->setIcon(QIcon("D:\\Games\\Diablo 2\\thumbs_lod34.ico"));

        x++;
    }
}

ExplorerForm::~ExplorerForm()
{
    delete ui;
}

void ExplorerForm::setLinks(const QList<LinkWidget *> &list)
{
    /*int x = 0, y = 0;
    for (auto iter : list)
    {

    }*/
}
