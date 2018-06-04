/********************************************************************************
** Form generated from reading UI file 'exampledlg18.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXAMPLEDLG18_H
#define UI_EXAMPLEDLG18_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ExampleDlg18
{
public:
    QPushButton *btnPrint;

    void setupUi(QDialog *ExampleDlg18)
    {
        if (ExampleDlg18->objectName().isEmpty())
            ExampleDlg18->setObjectName(QStringLiteral("ExampleDlg18"));
        ExampleDlg18->resize(579, 388);
        btnPrint = new QPushButton(ExampleDlg18);
        btnPrint->setObjectName(QStringLiteral("btnPrint"));
        btnPrint->setGeometry(QRect(240, 300, 75, 23));

        retranslateUi(ExampleDlg18);

        QMetaObject::connectSlotsByName(ExampleDlg18);
    } // setupUi

    void retranslateUi(QDialog *ExampleDlg18)
    {
        ExampleDlg18->setWindowTitle(QApplication::translate("ExampleDlg18", "Example18", Q_NULLPTR));
        btnPrint->setText(QApplication::translate("ExampleDlg18", "Print", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ExampleDlg18: public Ui_ExampleDlg18 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAMPLEDLG18_H
