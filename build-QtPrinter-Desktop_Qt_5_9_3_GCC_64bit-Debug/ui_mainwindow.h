/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEditFacture;
    QLabel *label;
    QPushButton *pushButtonPrint;
    QPushButton *pushButtonSetting;
    QPushButton *pushButtonUpdateView;
    QWidget *widgetShow;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(866, 649);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lineEditFacture = new QLineEdit(centralWidget);
        lineEditFacture->setObjectName(QStringLiteral("lineEditFacture"));
        lineEditFacture->setGeometry(QRect(70, 70, 391, 25));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 30, 67, 17));
        pushButtonPrint = new QPushButton(centralWidget);
        pushButtonPrint->setObjectName(QStringLiteral("pushButtonPrint"));
        pushButtonPrint->setGeometry(QRect(660, 70, 89, 25));
        pushButtonSetting = new QPushButton(centralWidget);
        pushButtonSetting->setObjectName(QStringLiteral("pushButtonSetting"));
        pushButtonSetting->setGeometry(QRect(660, 120, 89, 25));
        pushButtonUpdateView = new QPushButton(centralWidget);
        pushButtonUpdateView->setObjectName(QStringLiteral("pushButtonUpdateView"));
        pushButtonUpdateView->setGeometry(QRect(570, 540, 89, 25));
        widgetShow = new QWidget(centralWidget);
        widgetShow->setObjectName(QStringLiteral("widgetShow"));
        widgetShow->setGeometry(QRect(70, 180, 681, 351));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 866, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        lineEditFacture->setText(QApplication::translate("MainWindow", "2182241398", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Invoice : ", Q_NULLPTR));
        pushButtonPrint->setText(QApplication::translate("MainWindow", "Print", Q_NULLPTR));
        pushButtonSetting->setText(QApplication::translate("MainWindow", "Setting", Q_NULLPTR));
        pushButtonUpdateView->setText(QApplication::translate("MainWindow", "UpdateView", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
