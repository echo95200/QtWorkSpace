/********************************************************************************
** Form generated from reading UI file 'XYZ_UpdateDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XYZ_UPDATEDLG_H
#define UI_XYZ_UPDATEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_XYZUpdateDlg
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QProgressBar *pb1;
    QProgressBar *pb2;
    QLabel *lblInfo;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnUpdate;
    QPushButton *btnCancel;

    void setupUi(QDialog *XYZUpdateDlg)
    {
        if (XYZUpdateDlg->objectName().isEmpty())
            XYZUpdateDlg->setObjectName(QStringLiteral("XYZUpdateDlg"));
        XYZUpdateDlg->resize(400, 325);
        verticalLayout = new QVBoxLayout(XYZUpdateDlg);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableWidget = new QTableWidget(XYZUpdateDlg);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setDefaultSectionSize(25);

        verticalLayout->addWidget(tableWidget);

        pb1 = new QProgressBar(XYZUpdateDlg);
        pb1->setObjectName(QStringLiteral("pb1"));
        pb1->setValue(24);

        verticalLayout->addWidget(pb1);

        pb2 = new QProgressBar(XYZUpdateDlg);
        pb2->setObjectName(QStringLiteral("pb2"));
        pb2->setValue(24);

        verticalLayout->addWidget(pb2);

        lblInfo = new QLabel(XYZUpdateDlg);
        lblInfo->setObjectName(QStringLiteral("lblInfo"));

        verticalLayout->addWidget(lblInfo);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnUpdate = new QPushButton(XYZUpdateDlg);
        btnUpdate->setObjectName(QStringLiteral("btnUpdate"));

        horizontalLayout->addWidget(btnUpdate);

        btnCancel = new QPushButton(XYZUpdateDlg);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));

        horizontalLayout->addWidget(btnCancel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(XYZUpdateDlg);
        QObject::connect(btnCancel, SIGNAL(clicked()), XYZUpdateDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(XYZUpdateDlg);
    } // setupUi

    void retranslateUi(QDialog *XYZUpdateDlg)
    {
        XYZUpdateDlg->setWindowTitle(QApplication::translate("XYZUpdateDlg", "Updating", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("XYZUpdateDlg", "Progress", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("XYZUpdateDlg", "Updating", Q_NULLPTR));
        lblInfo->setText(QString());
        btnUpdate->setText(QApplication::translate("XYZUpdateDlg", "Update", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("XYZUpdateDlg", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class XYZUpdateDlg: public Ui_XYZUpdateDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XYZ_UPDATEDLG_H
