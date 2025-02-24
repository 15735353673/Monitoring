/********************************************************************************
** Form generated from reading UI file 'first_qtd.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRST_QTD_H
#define UI_FIRST_QTD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_first_QTdClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *first_QTdClass)
    {
        if (first_QTdClass->objectName().isEmpty())
            first_QTdClass->setObjectName(QString::fromUtf8("first_QTdClass"));
        first_QTdClass->resize(600, 400);
        menuBar = new QMenuBar(first_QTdClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        first_QTdClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(first_QTdClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        first_QTdClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(first_QTdClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        first_QTdClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(first_QTdClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        first_QTdClass->setStatusBar(statusBar);

        retranslateUi(first_QTdClass);

        QMetaObject::connectSlotsByName(first_QTdClass);
    } // setupUi

    void retranslateUi(QMainWindow *first_QTdClass)
    {
        first_QTdClass->setWindowTitle(QApplication::translate("first_QTdClass", "first_QTd", nullptr));
    } // retranslateUi

};

namespace Ui {
    class first_QTdClass: public Ui_first_QTdClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRST_QTD_H
