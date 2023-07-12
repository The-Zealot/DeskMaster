#include <QApplication>
#include "mainform.h"
#include "explorerform.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

//    MainForm mainForm;
//    mainForm.show();

    ExplorerForm ef;
    ef.show();

    return a.exec();
}
