/********************************************************************************
** Form generated from reading UI file 'report.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORT_H
#define UI_REPORT_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Report
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButtonPreview;
    QLineEdit *lineEditInvoiceNum;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Report)
    {
        if (Report->objectName().isEmpty())
            Report->setObjectName(QStringLiteral("Report"));
        Report->resize(947, 638);
        centralwidget = new QWidget(Report);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 100, 171, 17));
        pushButtonPreview = new QPushButton(centralwidget);
        pushButtonPreview->setObjectName(QStringLiteral("pushButtonPreview"));
        pushButtonPreview->setGeometry(QRect(730, 130, 89, 25));
        lineEditInvoiceNum = new QLineEdit(centralwidget);
        lineEditInvoiceNum->setObjectName(QStringLiteral("lineEditInvoiceNum"));
        lineEditInvoiceNum->setGeometry(QRect(80, 130, 271, 25));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(740, 380, 89, 25));
        Report->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Report);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 947, 22));
        Report->setMenuBar(menubar);
        statusbar = new QStatusBar(Report);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Report->setStatusBar(statusbar);

        retranslateUi(Report);

        QMetaObject::connectSlotsByName(Report);
    } // setupUi

    void retranslateUi(QMainWindow *Report)
    {
        Report->setWindowTitle(QApplication::translate("Report", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("Report", "INVOICE NUMBER :", Q_NULLPTR));
        pushButtonPreview->setText(QApplication::translate("Report", "PREVIEW", Q_NULLPTR));
        lineEditInvoiceNum->setText(QString());
        pushButton->setText(QApplication::translate("Report", "DESIGNER", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Report: public Ui_Report {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORT_H
