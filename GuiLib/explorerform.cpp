#include "explorerform.h"
#include "ui_explorerform.h"

#include <QFileIconProvider>
#include <QFileInfo>

ExplorerForm::ExplorerForm(QRect rect, const QString &title, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ExplorerForm)
{
    ui->setupUi(this);

//    this->setWindowFlags(Qt::WindowStaysOnBottomHint);
    this->setGeometry(rect);
    this->setWindowTitle(title);

    for (int i = 0; i < 68; i++)
    {
        LinkWidget* linkWidget = new LinkWidget();
        linkWidget->setLabel("New link " + QVariant(i + 1).toString());
        linkWidget->setIcon(QIcon("D:\\Games\\Diablo 2\\thumbs_lod34.ico"));
        list.append(linkWidget);
    }

    drawLinks();

    connect(this, &ExplorerForm::resized, this, &ExplorerForm::drawLinks);

//  link->setIcon(QIcon(":/icons/folders/white.png"));
//  link->setIcon(QFileIconProvider().icon(QFileInfo("D:\\Games\\Diablo 2\\Diablo 2.exe")));
//  link->setIcon(QIcon("D:\\Games\\Diablo 2\\thumbs_lod34.ico"));
}

ExplorerForm::~ExplorerForm()
{
    delete ui;
}

void ExplorerForm::drawLinks()
{
    QGridLayout* grid = qobject_cast<QGridLayout*>(ui->scrollAreaWidgetContents->layout());
    int h_spasing = grid->horizontalSpacing();

    int x = 0, y = 0;
    for (auto iter : list)
    {
        if ((x + 1) * (iter->width() + h_spasing * 1.5) > this->width())
        {
            y++;
            x = 0;
        }
        grid->addWidget(iter, y, x);
        grid->setColumnStretch(x, iter->width() + h_spasing * 1.5);
        iter->show();

        x++;
    }
}

void ExplorerForm::resizeEvent(QResizeEvent *event)
{
    emit resized();
}
