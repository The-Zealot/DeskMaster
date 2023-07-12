#include <QApplication>

#include "mainform.h"
#include "explorerform.h"
#include "version.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    qDebug() << "Application build number:" << APP_BUILD;

    ExplorerForm ef;
    ef.show();

    return a.exec();
}
