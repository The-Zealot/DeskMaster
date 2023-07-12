#include "explorerform.h"
#include "ui_explorerform.h"

ExplorerForm::ExplorerForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ExplorerForm)
{
    ui->setupUi(this);

    qDebug() << "ScrollArea width:" << ui->scrollArea->width();
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
        link->setIcon(QIcon(":/icons/folders/white.png"));

        x++;
    }

}

ExplorerForm::~ExplorerForm()
{
    delete ui;
}
