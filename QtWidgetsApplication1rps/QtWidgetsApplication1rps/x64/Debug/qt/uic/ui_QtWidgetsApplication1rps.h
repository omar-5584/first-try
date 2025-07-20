/********************************************************************************
** Form generated from reading UI file 'QtWidgetsApplication1rps.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTWIDGETSAPPLICATION1RPS_H
#define UI_QTWIDGETSAPPLICATION1RPS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtWidgetsApplication1rpsClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtWidgetsApplication1rpsClass)
    {
        if (QtWidgetsApplication1rpsClass->objectName().isEmpty())
            QtWidgetsApplication1rpsClass->setObjectName("QtWidgetsApplication1rpsClass");
        QtWidgetsApplication1rpsClass->resize(600, 400);
        menuBar = new QMenuBar(QtWidgetsApplication1rpsClass);
        menuBar->setObjectName("menuBar");
        QtWidgetsApplication1rpsClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtWidgetsApplication1rpsClass);
        mainToolBar->setObjectName("mainToolBar");
        QtWidgetsApplication1rpsClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(QtWidgetsApplication1rpsClass);
        centralWidget->setObjectName("centralWidget");
        QtWidgetsApplication1rpsClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QtWidgetsApplication1rpsClass);
        statusBar->setObjectName("statusBar");
        QtWidgetsApplication1rpsClass->setStatusBar(statusBar);

        retranslateUi(QtWidgetsApplication1rpsClass);

        QMetaObject::connectSlotsByName(QtWidgetsApplication1rpsClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtWidgetsApplication1rpsClass)
    {
        QtWidgetsApplication1rpsClass->setWindowTitle(QCoreApplication::translate("QtWidgetsApplication1rpsClass", "QtWidgetsApplication1rps", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtWidgetsApplication1rpsClass: public Ui_QtWidgetsApplication1rpsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTWIDGETSAPPLICATION1RPS_H
