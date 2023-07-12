/********************************************************************************
** Form generated from reading UI file 'explorerform.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPLORERFORM_H
#define UI_EXPLORERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExplorerForm
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;

    void setupUi(QWidget *ExplorerForm)
    {
        if (ExplorerForm->objectName().isEmpty())
            ExplorerForm->setObjectName(QString::fromUtf8("ExplorerForm"));
        ExplorerForm->resize(622, 453);
        gridLayout = new QGridLayout(ExplorerForm);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(ExplorerForm);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 620, 451));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);


        retranslateUi(ExplorerForm);

        QMetaObject::connectSlotsByName(ExplorerForm);
    } // setupUi

    void retranslateUi(QWidget *ExplorerForm)
    {
        ExplorerForm->setWindowTitle(QCoreApplication::translate("ExplorerForm", "explorer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExplorerForm: public Ui_ExplorerForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPLORERFORM_H
