/********************************************************************************
** Form generated from reading UI file 'SqlDesigner.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SQLDESIGNER_H
#define UI_SQLDESIGNER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SqlDesigner
{
public:
    QAction *actClearDiagram;
    QAction *actSelect;
    QAction *actRedo;
    QAction *actUndo;
    QAction *actAddRelationship;
    QAction *actDelete;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *rbCustom;
    QRadioButton *rbSql;
    QRadioButton *rbXml;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnClose;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLineEdit *edtHost;
    QLabel *label_2;
    QLineEdit *edtConnectionCoding;
    QLineEdit *edtDBName;
    QLineEdit *edtPassword;
    QLabel *label_9;
    QLineEdit *edtUserName;
    QLabel *label_6;
    QComboBox *cmbType;
    QPushButton *btnCheck;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label_8;
    QLabel *label_4;
    QLineEdit *edtCharsetCoding;
    QLabel *label_3;
    QLabel *label_11;
    QLabel *label_10;
    QLineEdit *edtConName;
    QLineEdit *edtPort;
    QHBoxLayout *horizontalLayout_3;
    QTreeWidget *tablesTree;
    QVBoxLayout *verticalLayout;
    QToolBar *widget;
    QGraphicsView *graphicsView;
    QLabel *label;
    QTextEdit *sqlEditor;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnSelectXML;
    QSplitter *splitter_2;
    QSplitter *splitter;
    QPlainTextEdit *plainTextEdit;
    QTreeView *xmlStructTree;
    QTableWidget *xmlFieldsTable;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btnPreviewXMLData;
    QSpacerItem *horizontalSpacer_4;
    QTableWidget *tableWidget;

    void setupUi(QWidget *SqlDesigner)
    {
        if (SqlDesigner->objectName().isEmpty())
            SqlDesigner->setObjectName(QStringLiteral("SqlDesigner"));
        SqlDesigner->resize(600, 577);
        SqlDesigner->setMinimumSize(QSize(600, 0));
        SqlDesigner->setMaximumSize(QSize(600, 16777215));
        SqlDesigner->setWindowTitle(QStringLiteral(""));
        actClearDiagram = new QAction(SqlDesigner);
        actClearDiagram->setObjectName(QStringLiteral("actClearDiagram"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/images/document-new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actClearDiagram->setIcon(icon);
        actSelect = new QAction(SqlDesigner);
        actSelect->setObjectName(QStringLiteral("actSelect"));
        actSelect->setCheckable(true);
        actSelect->setChecked(true);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/images/80-1.png"), QSize(), QIcon::Normal, QIcon::Off);
        actSelect->setIcon(icon1);
        actRedo = new QAction(SqlDesigner);
        actRedo->setObjectName(QStringLiteral("actRedo"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/images/edit-redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actRedo->setIcon(icon2);
        actUndo = new QAction(SqlDesigner);
        actUndo->setObjectName(QStringLiteral("actUndo"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/images/edit-undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actUndo->setIcon(icon3);
        actAddRelationship = new QAction(SqlDesigner);
        actAddRelationship->setObjectName(QStringLiteral("actAddRelationship"));
        actAddRelationship->setCheckable(true);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/images/item-relationship.png"), QSize(), QIcon::Normal, QIcon::Off);
        actAddRelationship->setIcon(icon4);
        actDelete = new QAction(SqlDesigner);
        actDelete->setObjectName(QStringLiteral("actDelete"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/prefix1/images/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actDelete->setIcon(icon5);
        gridLayout = new QGridLayout(SqlDesigner);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        rbCustom = new QRadioButton(SqlDesigner);
        rbCustom->setObjectName(QStringLiteral("rbCustom"));
        rbCustom->setChecked(true);

        horizontalLayout_2->addWidget(rbCustom);

        rbSql = new QRadioButton(SqlDesigner);
        rbSql->setObjectName(QStringLiteral("rbSql"));

        horizontalLayout_2->addWidget(rbSql);

        rbXml = new QRadioButton(SqlDesigner);
        rbXml->setObjectName(QStringLiteral("rbXml"));

        horizontalLayout_2->addWidget(rbXml);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnClose = new QPushButton(SqlDesigner);
        btnClose->setObjectName(QStringLiteral("btnClose"));

        horizontalLayout->addWidget(btnClose);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        stackedWidget = new QStackedWidget(SqlDesigner);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        verticalLayout_2 = new QVBoxLayout(page_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(page_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        edtHost = new QLineEdit(groupBox);
        edtHost->setObjectName(QStringLiteral("edtHost"));

        gridLayout_2->addWidget(edtHost, 3, 2, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        edtConnectionCoding = new QLineEdit(groupBox);
        edtConnectionCoding->setObjectName(QStringLiteral("edtConnectionCoding"));

        gridLayout_2->addWidget(edtConnectionCoding, 1, 2, 1, 1);

        edtDBName = new QLineEdit(groupBox);
        edtDBName->setObjectName(QStringLiteral("edtDBName"));

        gridLayout_2->addWidget(edtDBName, 2, 2, 1, 1);

        edtPassword = new QLineEdit(groupBox);
        edtPassword->setObjectName(QStringLiteral("edtPassword"));

        gridLayout_2->addWidget(edtPassword, 3, 4, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_2->addWidget(label_9, 1, 3, 1, 1);

        edtUserName = new QLineEdit(groupBox);
        edtUserName->setObjectName(QStringLiteral("edtUserName"));

        gridLayout_2->addWidget(edtUserName, 2, 4, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 3, 3, 1, 1);

        cmbType = new QComboBox(groupBox);
        cmbType->setObjectName(QStringLiteral("cmbType"));

        gridLayout_2->addWidget(cmbType, 0, 1, 1, 2);

        btnCheck = new QPushButton(groupBox);
        btnCheck->setObjectName(QStringLiteral("btnCheck"));

        gridLayout_2->addWidget(btnCheck, 0, 4, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 0, 3, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 2, 3, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 1, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 3, 0, 1, 2);

        edtCharsetCoding = new QLineEdit(groupBox);
        edtCharsetCoding->setObjectName(QStringLiteral("edtCharsetCoding"));

        gridLayout_2->addWidget(edtCharsetCoding, 1, 4, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_2->addWidget(label_11, 4, 0, 1, 1);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_2->addWidget(label_10, 4, 3, 1, 1);

        edtConName = new QLineEdit(groupBox);
        edtConName->setObjectName(QStringLiteral("edtConName"));

        gridLayout_2->addWidget(edtConName, 4, 2, 1, 1);

        edtPort = new QLineEdit(groupBox);
        edtPort->setObjectName(QStringLiteral("edtPort"));

        gridLayout_2->addWidget(edtPort, 4, 4, 1, 1);


        verticalLayout_2->addWidget(groupBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        tablesTree = new QTreeWidget(page_2);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        tablesTree->setHeaderItem(__qtreewidgetitem);
        tablesTree->setObjectName(QStringLiteral("tablesTree"));
        tablesTree->setMaximumSize(QSize(110, 16777215));
        tablesTree->setDragEnabled(true);
        tablesTree->setDragDropMode(QAbstractItemView::DragOnly);
        tablesTree->setRootIsDecorated(false);
        tablesTree->header()->setVisible(false);

        horizontalLayout_3->addWidget(tablesTree);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QToolBar(page_2);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setIconSize(QSize(16, 16));
        widget->setFloatable(true);

        verticalLayout->addWidget(widget);

        graphicsView = new QGraphicsView(page_2);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        verticalLayout->addWidget(graphicsView);


        horizontalLayout_3->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_3);

        label = new QLabel(page_2);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        sqlEditor = new QTextEdit(page_2);
        sqlEditor->setObjectName(QStringLiteral("sqlEditor"));
        sqlEditor->setMaximumSize(QSize(16777215, 100));

        verticalLayout_2->addWidget(sqlEditor);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        verticalLayout_4 = new QVBoxLayout(page_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        btnSelectXML = new QPushButton(page_3);
        btnSelectXML->setObjectName(QStringLiteral("btnSelectXML"));

        horizontalLayout_4->addWidget(btnSelectXML);


        verticalLayout_4->addLayout(horizontalLayout_4);

        splitter_2 = new QSplitter(page_3);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        plainTextEdit = new QPlainTextEdit(splitter);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        splitter->addWidget(plainTextEdit);
        xmlStructTree = new QTreeView(splitter);
        xmlStructTree->setObjectName(QStringLiteral("xmlStructTree"));
        xmlStructTree->setEditTriggers(QAbstractItemView::NoEditTriggers);
        xmlStructTree->setDragEnabled(true);
        xmlStructTree->setDragDropMode(QAbstractItemView::DragOnly);
        xmlStructTree->setDefaultDropAction(Qt::CopyAction);
        splitter->addWidget(xmlStructTree);
        splitter_2->addWidget(splitter);
        xmlFieldsTable = new QTableWidget(splitter_2);
        if (xmlFieldsTable->columnCount() < 2)
            xmlFieldsTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        xmlFieldsTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        xmlFieldsTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        xmlFieldsTable->setObjectName(QStringLiteral("xmlFieldsTable"));
        xmlFieldsTable->setDragDropMode(QAbstractItemView::DropOnly);
        xmlFieldsTable->setDefaultDropAction(Qt::CopyAction);
        splitter_2->addWidget(xmlFieldsTable);
        xmlFieldsTable->horizontalHeader()->setDefaultSectionSize(250);
        xmlFieldsTable->horizontalHeader()->setHighlightSections(false);
        xmlFieldsTable->horizontalHeader()->setMinimumSectionSize(20);
        xmlFieldsTable->horizontalHeader()->setStretchLastSection(true);
        xmlFieldsTable->verticalHeader()->setVisible(false);
        xmlFieldsTable->verticalHeader()->setDefaultSectionSize(20);
        xmlFieldsTable->verticalHeader()->setHighlightSections(false);
        xmlFieldsTable->verticalHeader()->setStretchLastSection(false);
        layoutWidget = new QWidget(splitter_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        btnPreviewXMLData = new QPushButton(layoutWidget);
        btnPreviewXMLData->setObjectName(QStringLiteral("btnPreviewXMLData"));

        horizontalLayout_5->addWidget(btnPreviewXMLData);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_5);

        tableWidget = new QTableWidget(layoutWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout_3->addWidget(tableWidget);

        splitter_2->addWidget(layoutWidget);

        verticalLayout_4->addWidget(splitter_2);

        stackedWidget->addWidget(page_3);

        gridLayout->addWidget(stackedWidget, 1, 0, 1, 1);

        QWidget::setTabOrder(rbCustom, rbSql);
        QWidget::setTabOrder(rbSql, cmbType);
        QWidget::setTabOrder(cmbType, btnCheck);
        QWidget::setTabOrder(btnCheck, edtConnectionCoding);
        QWidget::setTabOrder(edtConnectionCoding, edtCharsetCoding);
        QWidget::setTabOrder(edtCharsetCoding, edtDBName);
        QWidget::setTabOrder(edtDBName, edtUserName);
        QWidget::setTabOrder(edtUserName, edtHost);
        QWidget::setTabOrder(edtHost, edtPassword);
        QWidget::setTabOrder(edtPassword, tablesTree);
        QWidget::setTabOrder(tablesTree, graphicsView);
        QWidget::setTabOrder(graphicsView, sqlEditor);
        QWidget::setTabOrder(sqlEditor, btnClose);

        widget->addAction(actClearDiagram);
        widget->addSeparator();
        widget->addAction(actUndo);
        widget->addAction(actRedo);
        widget->addAction(actDelete);
        widget->addSeparator();
        widget->addAction(actSelect);
        widget->addAction(actAddRelationship);

        retranslateUi(SqlDesigner);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(SqlDesigner);
    } // setupUi

    void retranslateUi(QWidget *SqlDesigner)
    {
        actClearDiagram->setText(QApplication::translate("SqlDesigner", "Clear diagram", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actClearDiagram->setToolTip(QApplication::translate("SqlDesigner", "Clear diagram", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actSelect->setText(QApplication::translate("SqlDesigner", "Select", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actSelect->setToolTip(QApplication::translate("SqlDesigner", "Select", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actRedo->setText(QApplication::translate("SqlDesigner", "Redo", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actRedo->setToolTip(QApplication::translate("SqlDesigner", "Redo", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actRedo->setShortcut(QApplication::translate("SqlDesigner", "Ctrl+Y", Q_NULLPTR));
        actUndo->setText(QApplication::translate("SqlDesigner", "Undo", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actUndo->setToolTip(QApplication::translate("SqlDesigner", "Undo", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actUndo->setShortcut(QApplication::translate("SqlDesigner", "Ctrl+Z", Q_NULLPTR));
        actAddRelationship->setText(QApplication::translate("SqlDesigner", "Add relationship", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actAddRelationship->setToolTip(QApplication::translate("SqlDesigner", "Add relationship", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actDelete->setText(QApplication::translate("SqlDesigner", "Delete", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actDelete->setToolTip(QApplication::translate("SqlDesigner", "Delete", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actDelete->setShortcut(QApplication::translate("SqlDesigner", "Del", Q_NULLPTR));
        rbCustom->setText(QApplication::translate("SqlDesigner", "Custom DS", Q_NULLPTR));
        rbSql->setText(QApplication::translate("SqlDesigner", "SQL DS", Q_NULLPTR));
        rbXml->setText(QApplication::translate("SqlDesigner", "XML DS", Q_NULLPTR));
        btnClose->setText(QApplication::translate("SqlDesigner", "Close", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("SqlDesigner", "Connection's parameters", Q_NULLPTR));
        label_2->setText(QApplication::translate("SqlDesigner", "Driver", Q_NULLPTR));
        edtConnectionCoding->setText(QApplication::translate("SqlDesigner", "UTF8", Q_NULLPTR));
        label_9->setText(QApplication::translate("SqlDesigner", "Charset coding", Q_NULLPTR));
        label_6->setText(QApplication::translate("SqlDesigner", "Password", Q_NULLPTR));
        btnCheck->setText(QApplication::translate("SqlDesigner", "Check", Q_NULLPTR));
        label_7->setText(QApplication::translate("SqlDesigner", "Connection", Q_NULLPTR));
        label_5->setText(QApplication::translate("SqlDesigner", "User name", Q_NULLPTR));
        label_8->setText(QApplication::translate("SqlDesigner", "Connection coding", Q_NULLPTR));
        label_4->setText(QApplication::translate("SqlDesigner", "Host name", Q_NULLPTR));
        edtCharsetCoding->setText(QApplication::translate("SqlDesigner", "UTF8", Q_NULLPTR));
        label_3->setText(QApplication::translate("SqlDesigner", "DB name", Q_NULLPTR));
        label_11->setText(QApplication::translate("SqlDesigner", "Connection name", Q_NULLPTR));
        label_10->setText(QApplication::translate("SqlDesigner", "Port", Q_NULLPTR));
        label->setText(QApplication::translate("SqlDesigner", "SQL query", Q_NULLPTR));
        btnSelectXML->setText(QApplication::translate("SqlDesigner", "Select XML", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = xmlFieldsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("SqlDesigner", "Field name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = xmlFieldsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("SqlDesigner", "Description", Q_NULLPTR));
        btnPreviewXMLData->setText(QApplication::translate("SqlDesigner", "Preview data", Q_NULLPTR));
        Q_UNUSED(SqlDesigner);
    } // retranslateUi

};

namespace Ui {
    class SqlDesigner: public Ui_SqlDesigner {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SQLDESIGNER_H
