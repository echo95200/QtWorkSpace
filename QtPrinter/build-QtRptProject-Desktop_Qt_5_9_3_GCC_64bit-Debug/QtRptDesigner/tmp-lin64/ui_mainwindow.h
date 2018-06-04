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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actPageSettings;
    QAction *actSelect_tool;
    QAction *actAlignLeft;
    QAction *actAlignCenter;
    QAction *actAlignRight;
    QAction *actAlignJustify;
    QAction *actionBold;
    QAction *actionItalic;
    QAction *actionUnderline;
    QAction *actLineTop;
    QAction *actLineBottom;
    QAction *actLineLeft;
    QAction *actLineRight;
    QAction *actLineAll;
    QAction *actLineNo;
    QAction *actionInsert_band;
    QAction *actAddField;
    QAction *actionNewReport;
    QAction *actionOpenReport;
    QAction *actSaveReport;
    QAction *actAlignTop;
    QAction *actAlignVCenter;
    QAction *actAlignBottom;
    QAction *actCopy;
    QAction *actCut;
    QAction *actPaste;
    QAction *actSaveAs;
    QAction *actFontColor;
    QAction *actBackgroundColor;
    QAction *actBorderColor;
    QAction *actAbout;
    QAction *actShowGrid;
    QAction *actAddPicture;
    QAction *actFrameStyle;
    QAction *actNewReportPage;
    QAction *actDeleteReportPage;
    QAction *actFieldLeft;
    QAction *actFieldMiddle;
    QAction *actFieldRight;
    QAction *actFieldTop;
    QAction *actFieldCenter;
    QAction *actFieldBottom;
    QAction *actFieldSameWidth;
    QAction *actFieldSameHeight;
    QAction *actSettings;
    QAction *actMagnifying;
    QAction *actionStrikeout;
    QAction *actGroupProperty;
    QAction *actCheckUpdates;
    QAction *actAddDiagram;
    QAction *actAddDrawing;
    QAction *actPreview;
    QAction *actDataSource;
    QAction *actUndo;
    QAction *actRedo;
    QAction *actAddBarcode;
    QAction *actReadme;
    QAction *actAddRichText;
    QAction *actGroup;
    QAction *actUngroup;
    QAction *actAddCrossTab;
    QAction *actAddCrossTabBD;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter_2;
    QTreeWidget *treeWidget;
    QTreeWidget *treeParams;
    QTabWidget *tabWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuReport;
    QMenu *menuEdit;
    QMenu *menuHelp;
    QMenu *menuService;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;
    QToolBar *toolBar_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1664, 683);
        QIcon icon;
        icon.addFile(QStringLiteral("C:/Users/Aleksey/Desktop/32.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actPageSettings = new QAction(MainWindow);
        actPageSettings->setObjectName(QStringLiteral("actPageSettings"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/images/pageSetting.png"), QSize(), QIcon::Normal, QIcon::Off);
        actPageSettings->setIcon(icon1);
        actSelect_tool = new QAction(MainWindow);
        actSelect_tool->setObjectName(QStringLiteral("actSelect_tool"));
        actSelect_tool->setCheckable(true);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/images/80-1.png"), QSize(), QIcon::Normal, QIcon::Off);
        actSelect_tool->setIcon(icon2);
        actAlignLeft = new QAction(MainWindow);
        actAlignLeft->setObjectName(QStringLiteral("actAlignLeft"));
        actAlignLeft->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/images/textleft.png"), QSize(), QIcon::Normal, QIcon::Off);
        actAlignLeft->setIcon(icon3);
        actAlignCenter = new QAction(MainWindow);
        actAlignCenter->setObjectName(QStringLiteral("actAlignCenter"));
        actAlignCenter->setCheckable(true);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/images/textcenter.png"), QSize(), QIcon::Normal, QIcon::Off);
        actAlignCenter->setIcon(icon4);
        actAlignRight = new QAction(MainWindow);
        actAlignRight->setObjectName(QStringLiteral("actAlignRight"));
        actAlignRight->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/prefix1/images/textright.png"), QSize(), QIcon::Normal, QIcon::Off);
        actAlignRight->setIcon(icon5);
        actAlignJustify = new QAction(MainWindow);
        actAlignJustify->setObjectName(QStringLiteral("actAlignJustify"));
        actAlignJustify->setCheckable(true);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/new/prefix1/images/textjustify.png"), QSize(), QIcon::Normal, QIcon::Off);
        actAlignJustify->setIcon(icon6);
        actionBold = new QAction(MainWindow);
        actionBold->setObjectName(QStringLiteral("actionBold"));
        actionBold->setCheckable(true);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/new/prefix1/images/textbold.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBold->setIcon(icon7);
        actionItalic = new QAction(MainWindow);
        actionItalic->setObjectName(QStringLiteral("actionItalic"));
        actionItalic->setCheckable(true);
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/new/prefix1/images/textitalic.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionItalic->setIcon(icon8);
        actionUnderline = new QAction(MainWindow);
        actionUnderline->setObjectName(QStringLiteral("actionUnderline"));
        actionUnderline->setCheckable(true);
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/new/prefix1/images/textunder.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUnderline->setIcon(icon9);
        actLineTop = new QAction(MainWindow);
        actLineTop->setObjectName(QStringLiteral("actLineTop"));
        actLineTop->setCheckable(true);
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/new/prefix1/images/82-6.png"), QSize(), QIcon::Normal, QIcon::Off);
        actLineTop->setIcon(icon10);
        actLineBottom = new QAction(MainWindow);
        actLineBottom->setObjectName(QStringLiteral("actLineBottom"));
        actLineBottom->setCheckable(true);
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/new/prefix1/images/82-7.png"), QSize(), QIcon::Normal, QIcon::Off);
        actLineBottom->setIcon(icon11);
        actLineLeft = new QAction(MainWindow);
        actLineLeft->setObjectName(QStringLiteral("actLineLeft"));
        actLineLeft->setCheckable(true);
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/new/prefix1/images/82-4.png"), QSize(), QIcon::Normal, QIcon::Off);
        actLineLeft->setIcon(icon12);
        actLineRight = new QAction(MainWindow);
        actLineRight->setObjectName(QStringLiteral("actLineRight"));
        actLineRight->setCheckable(true);
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/new/prefix1/images/82-5.png"), QSize(), QIcon::Normal, QIcon::Off);
        actLineRight->setIcon(icon13);
        actLineAll = new QAction(MainWindow);
        actLineAll->setObjectName(QStringLiteral("actLineAll"));
        actLineAll->setCheckable(true);
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/new/prefix1/images/82-2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actLineAll->setIcon(icon14);
        actLineNo = new QAction(MainWindow);
        actLineNo->setObjectName(QStringLiteral("actLineNo"));
        actLineNo->setCheckable(true);
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/new/prefix1/images/82-1.png"), QSize(), QIcon::Normal, QIcon::Off);
        actLineNo->setIcon(icon15);
        actionInsert_band = new QAction(MainWindow);
        actionInsert_band->setObjectName(QStringLiteral("actionInsert_band"));
        actionInsert_band->setCheckable(true);
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/new/prefix1/images/band.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionInsert_band->setIcon(icon16);
        actAddField = new QAction(MainWindow);
        actAddField->setObjectName(QStringLiteral("actAddField"));
        actAddField->setCheckable(true);
        actAddField->setEnabled(false);
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/new/prefix1/images/field.png"), QSize(), QIcon::Normal, QIcon::Off);
        actAddField->setIcon(icon17);
        actionNewReport = new QAction(MainWindow);
        actionNewReport->setObjectName(QStringLiteral("actionNewReport"));
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/new/prefix1/images/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNewReport->setIcon(icon18);
        actionOpenReport = new QAction(MainWindow);
        actionOpenReport->setObjectName(QStringLiteral("actionOpenReport"));
        QIcon icon19;
        icon19.addFile(QStringLiteral(":/new/prefix1/images/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpenReport->setIcon(icon19);
        actSaveReport = new QAction(MainWindow);
        actSaveReport->setObjectName(QStringLiteral("actSaveReport"));
        actSaveReport->setEnabled(false);
        QIcon icon20;
        icon20.addFile(QStringLiteral(":/new/prefix1/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actSaveReport->setIcon(icon20);
        actAlignTop = new QAction(MainWindow);
        actAlignTop->setObjectName(QStringLiteral("actAlignTop"));
        actAlignTop->setCheckable(true);
        QIcon icon21;
        icon21.addFile(QStringLiteral(":/new/prefix1/images/texttop.png"), QSize(), QIcon::Normal, QIcon::Off);
        actAlignTop->setIcon(icon21);
        actAlignVCenter = new QAction(MainWindow);
        actAlignVCenter->setObjectName(QStringLiteral("actAlignVCenter"));
        actAlignVCenter->setCheckable(true);
        QIcon icon22;
        icon22.addFile(QStringLiteral(":/new/prefix1/images/textVcenter.png"), QSize(), QIcon::Normal, QIcon::Off);
        actAlignVCenter->setIcon(icon22);
        actAlignBottom = new QAction(MainWindow);
        actAlignBottom->setObjectName(QStringLiteral("actAlignBottom"));
        actAlignBottom->setCheckable(true);
        QIcon icon23;
        icon23.addFile(QStringLiteral(":/new/prefix1/images/textbottom.png"), QSize(), QIcon::Normal, QIcon::Off);
        actAlignBottom->setIcon(icon23);
        actCopy = new QAction(MainWindow);
        actCopy->setObjectName(QStringLiteral("actCopy"));
        QIcon icon24;
        icon24.addFile(QStringLiteral(":/new/prefix1/images/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actCopy->setIcon(icon24);
        actCut = new QAction(MainWindow);
        actCut->setObjectName(QStringLiteral("actCut"));
        QIcon icon25;
        icon25.addFile(QStringLiteral(":/new/prefix1/images/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actCut->setIcon(icon25);
        actPaste = new QAction(MainWindow);
        actPaste->setObjectName(QStringLiteral("actPaste"));
        actPaste->setEnabled(false);
        QIcon icon26;
        icon26.addFile(QStringLiteral(":/new/prefix1/images/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actPaste->setIcon(icon26);
        actSaveAs = new QAction(MainWindow);
        actSaveAs->setObjectName(QStringLiteral("actSaveAs"));
        QIcon icon27;
        icon27.addFile(QStringLiteral(":/new/prefix1/images/saveAll.png"), QSize(), QIcon::Normal, QIcon::Off);
        actSaveAs->setIcon(icon27);
        actFontColor = new QAction(MainWindow);
        actFontColor->setObjectName(QStringLiteral("actFontColor"));
        QIcon icon28;
        icon28.addFile(QStringLiteral(":/new/prefix1/images/fontColor.png"), QSize(), QIcon::Normal, QIcon::Off);
        actFontColor->setIcon(icon28);
        actBackgroundColor = new QAction(MainWindow);
        actBackgroundColor->setObjectName(QStringLiteral("actBackgroundColor"));
        QIcon icon29;
        icon29.addFile(QStringLiteral(":/new/prefix1/images/backgroundColor.png"), QSize(), QIcon::Normal, QIcon::Off);
        actBackgroundColor->setIcon(icon29);
        actBorderColor = new QAction(MainWindow);
        actBorderColor->setObjectName(QStringLiteral("actBorderColor"));
        QIcon icon30;
        icon30.addFile(QStringLiteral(":/new/prefix1/images/borderColor.png"), QSize(), QIcon::Normal, QIcon::Off);
        actBorderColor->setIcon(icon30);
        actAbout = new QAction(MainWindow);
        actAbout->setObjectName(QStringLiteral("actAbout"));
        QIcon icon31;
        icon31.addFile(QStringLiteral(":/new/prefix1/images/Logo128.png"), QSize(), QIcon::Normal, QIcon::Off);
        actAbout->setIcon(icon31);
        actShowGrid = new QAction(MainWindow);
        actShowGrid->setObjectName(QStringLiteral("actShowGrid"));
        actShowGrid->setCheckable(true);
        QIcon icon32;
        icon32.addFile(QStringLiteral(":/new/prefix1/images/grid.png"), QSize(), QIcon::Normal, QIcon::Off);
        actShowGrid->setIcon(icon32);
        actAddPicture = new QAction(MainWindow);
        actAddPicture->setObjectName(QStringLiteral("actAddPicture"));
        actAddPicture->setCheckable(true);
        actAddPicture->setEnabled(false);
        QIcon icon33;
        icon33.addFile(QStringLiteral(":/new/prefix1/images/picture.png"), QSize(), QIcon::Normal, QIcon::Off);
        actAddPicture->setIcon(icon33);
        actFrameStyle = new QAction(MainWindow);
        actFrameStyle->setObjectName(QStringLiteral("actFrameStyle"));
        QIcon icon34;
        icon34.addFile(QStringLiteral(":/new/prefix1/images/frameStyle.png"), QSize(), QIcon::Normal, QIcon::Off);
        actFrameStyle->setIcon(icon34);
        actNewReportPage = new QAction(MainWindow);
        actNewReportPage->setObjectName(QStringLiteral("actNewReportPage"));
        QIcon icon35;
        icon35.addFile(QStringLiteral(":/new/prefix1/images/newPageReport.png"), QSize(), QIcon::Normal, QIcon::Off);
        actNewReportPage->setIcon(icon35);
        actDeleteReportPage = new QAction(MainWindow);
        actDeleteReportPage->setObjectName(QStringLiteral("actDeleteReportPage"));
        QIcon icon36;
        icon36.addFile(QStringLiteral(":/new/prefix1/images/deletePage.png"), QSize(), QIcon::Normal, QIcon::Off);
        actDeleteReportPage->setIcon(icon36);
        actFieldLeft = new QAction(MainWindow);
        actFieldLeft->setObjectName(QStringLiteral("actFieldLeft"));
        QIcon icon37;
        icon37.addFile(QStringLiteral(":/new/prefix1/images/fieldLeft.png"), QSize(), QIcon::Normal, QIcon::Off);
        actFieldLeft->setIcon(icon37);
        actFieldMiddle = new QAction(MainWindow);
        actFieldMiddle->setObjectName(QStringLiteral("actFieldMiddle"));
        QIcon icon38;
        icon38.addFile(QStringLiteral(":/new/prefix1/images/fieldMiddle.png"), QSize(), QIcon::Normal, QIcon::Off);
        actFieldMiddle->setIcon(icon38);
        actFieldRight = new QAction(MainWindow);
        actFieldRight->setObjectName(QStringLiteral("actFieldRight"));
        QIcon icon39;
        icon39.addFile(QStringLiteral(":/new/prefix1/images/fieldRight.png"), QSize(), QIcon::Normal, QIcon::Off);
        actFieldRight->setIcon(icon39);
        actFieldTop = new QAction(MainWindow);
        actFieldTop->setObjectName(QStringLiteral("actFieldTop"));
        QIcon icon40;
        icon40.addFile(QStringLiteral(":/new/prefix1/images/fieldTop.png"), QSize(), QIcon::Normal, QIcon::Off);
        actFieldTop->setIcon(icon40);
        actFieldCenter = new QAction(MainWindow);
        actFieldCenter->setObjectName(QStringLiteral("actFieldCenter"));
        QIcon icon41;
        icon41.addFile(QStringLiteral(":/new/prefix1/images/fieldCenter.png"), QSize(), QIcon::Normal, QIcon::Off);
        actFieldCenter->setIcon(icon41);
        actFieldBottom = new QAction(MainWindow);
        actFieldBottom->setObjectName(QStringLiteral("actFieldBottom"));
        QIcon icon42;
        icon42.addFile(QStringLiteral(":/new/prefix1/images/fieldBottom.png"), QSize(), QIcon::Normal, QIcon::Off);
        actFieldBottom->setIcon(icon42);
        actFieldSameWidth = new QAction(MainWindow);
        actFieldSameWidth->setObjectName(QStringLiteral("actFieldSameWidth"));
        QIcon icon43;
        icon43.addFile(QStringLiteral(":/new/prefix1/images/fieldSameWidth.png"), QSize(), QIcon::Normal, QIcon::Off);
        actFieldSameWidth->setIcon(icon43);
        actFieldSameHeight = new QAction(MainWindow);
        actFieldSameHeight->setObjectName(QStringLiteral("actFieldSameHeight"));
        QIcon icon44;
        icon44.addFile(QStringLiteral(":/new/prefix1/images/fieldSameHeight.png"), QSize(), QIcon::Normal, QIcon::Off);
        actFieldSameHeight->setIcon(icon44);
        actSettings = new QAction(MainWindow);
        actSettings->setObjectName(QStringLiteral("actSettings"));
        QIcon icon45;
        icon45.addFile(QStringLiteral(":/new/prefix1/images/setting.png"), QSize(), QIcon::Normal, QIcon::Off);
        actSettings->setIcon(icon45);
        actMagnifying = new QAction(MainWindow);
        actMagnifying->setObjectName(QStringLiteral("actMagnifying"));
        actMagnifying->setCheckable(true);
        QIcon icon46;
        icon46.addFile(QStringLiteral(":/new/prefix1/images/maginfier.png"), QSize(), QIcon::Normal, QIcon::Off);
        actMagnifying->setIcon(icon46);
        actionStrikeout = new QAction(MainWindow);
        actionStrikeout->setObjectName(QStringLiteral("actionStrikeout"));
        actionStrikeout->setCheckable(true);
        QIcon icon47;
        icon47.addFile(QStringLiteral(":/new/prefix1/images/textstrikeout.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStrikeout->setIcon(icon47);
        actGroupProperty = new QAction(MainWindow);
        actGroupProperty->setObjectName(QStringLiteral("actGroupProperty"));
        QIcon icon48;
        icon48.addFile(QStringLiteral(":/new/prefix1/images/dataGrouping.png"), QSize(), QIcon::Normal, QIcon::Off);
        actGroupProperty->setIcon(icon48);
        actCheckUpdates = new QAction(MainWindow);
        actCheckUpdates->setObjectName(QStringLiteral("actCheckUpdates"));
        QIcon icon49;
        icon49.addFile(QStringLiteral(":/new/prefix1/images/update.png"), QSize(), QIcon::Normal, QIcon::Off);
        actCheckUpdates->setIcon(icon49);
        actAddDiagram = new QAction(MainWindow);
        actAddDiagram->setObjectName(QStringLiteral("actAddDiagram"));
        actAddDiagram->setCheckable(true);
        actAddDiagram->setEnabled(false);
        QIcon icon50;
        icon50.addFile(QStringLiteral(":/new/prefix1/images/diagram.png"), QSize(), QIcon::Normal, QIcon::Off);
        actAddDiagram->setIcon(icon50);
        actAddDrawing = new QAction(MainWindow);
        actAddDrawing->setObjectName(QStringLiteral("actAddDrawing"));
        actAddDrawing->setCheckable(true);
        actAddDrawing->setEnabled(false);
        QIcon icon51;
        icon51.addFile(QStringLiteral(":/new/prefix1/images/drawing.png"), QSize(), QIcon::Normal, QIcon::Off);
        actAddDrawing->setIcon(icon51);
        actPreview = new QAction(MainWindow);
        actPreview->setObjectName(QStringLiteral("actPreview"));
        actPreview->setEnabled(true);
        QIcon icon52;
        icon52.addFile(QStringLiteral(":/new/prefix1/images/preview.png"), QSize(), QIcon::Normal, QIcon::Off);
        actPreview->setIcon(icon52);
        actDataSource = new QAction(MainWindow);
        actDataSource->setObjectName(QStringLiteral("actDataSource"));
        actDataSource->setCheckable(true);
        QIcon icon53;
        icon53.addFile(QStringLiteral(":/new/prefix1/images/data.png"), QSize(), QIcon::Normal, QIcon::Off);
        actDataSource->setIcon(icon53);
        actUndo = new QAction(MainWindow);
        actUndo->setObjectName(QStringLiteral("actUndo"));
        actUndo->setEnabled(false);
        QIcon icon54;
        icon54.addFile(QStringLiteral(":/new/prefix1/images/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actUndo->setIcon(icon54);
        actRedo = new QAction(MainWindow);
        actRedo->setObjectName(QStringLiteral("actRedo"));
        actRedo->setEnabled(false);
        QIcon icon55;
        icon55.addFile(QStringLiteral(":/new/prefix1/images/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actRedo->setIcon(icon55);
        actAddBarcode = new QAction(MainWindow);
        actAddBarcode->setObjectName(QStringLiteral("actAddBarcode"));
        actAddBarcode->setCheckable(true);
        actAddBarcode->setEnabled(false);
        QIcon icon56;
        icon56.addFile(QStringLiteral(":/new/prefix1/images/barcode.png"), QSize(), QIcon::Normal, QIcon::Off);
        actAddBarcode->setIcon(icon56);
        actReadme = new QAction(MainWindow);
        actReadme->setObjectName(QStringLiteral("actReadme"));
        QIcon icon57;
        icon57.addFile(QStringLiteral(":/new/prefix1/images/readme.png"), QSize(), QIcon::Normal, QIcon::Off);
        actReadme->setIcon(icon57);
        actAddRichText = new QAction(MainWindow);
        actAddRichText->setObjectName(QStringLiteral("actAddRichText"));
        actAddRichText->setCheckable(true);
        actAddRichText->setEnabled(false);
        QIcon icon58;
        icon58.addFile(QStringLiteral(":/new/prefix1/images/richText.png"), QSize(), QIcon::Normal, QIcon::Off);
        actAddRichText->setIcon(icon58);
        actGroup = new QAction(MainWindow);
        actGroup->setObjectName(QStringLiteral("actGroup"));
        QIcon icon59;
        icon59.addFile(QStringLiteral(":/new/prefix1/images/group.png"), QSize(), QIcon::Normal, QIcon::Off);
        actGroup->setIcon(icon59);
        actUngroup = new QAction(MainWindow);
        actUngroup->setObjectName(QStringLiteral("actUngroup"));
        QIcon icon60;
        icon60.addFile(QStringLiteral(":/new/prefix1/images/ungroup.png"), QSize(), QIcon::Normal, QIcon::Off);
        actUngroup->setIcon(icon60);
        actAddCrossTab = new QAction(MainWindow);
        actAddCrossTab->setObjectName(QStringLiteral("actAddCrossTab"));
        actAddCrossTab->setCheckable(true);
        actAddCrossTab->setEnabled(false);
        QIcon icon61;
        icon61.addFile(QStringLiteral(":/new/prefix1/images/crossTab.png"), QSize(), QIcon::Normal, QIcon::Off);
        actAddCrossTab->setIcon(icon61);
        actAddCrossTabBD = new QAction(MainWindow);
        actAddCrossTabBD->setObjectName(QStringLiteral("actAddCrossTabBD"));
        actAddCrossTabBD->setCheckable(true);
        actAddCrossTabBD->setEnabled(false);
        QIcon icon62;
        icon62.addFile(QStringLiteral(":/new/prefix1/images/crossTabBD.png"), QSize(), QIcon::Normal, QIcon::Off);
        actAddCrossTabBD->setIcon(icon62);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        widget_2 = new QWidget(splitter);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        widget_2->setMaximumSize(QSize(299, 16777215));
        widget_2->setBaseSize(QSize(0, 0));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        splitter_2 = new QSplitter(widget_2);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(splitter_2->sizePolicy().hasHeightForWidth());
        splitter_2->setSizePolicy(sizePolicy1);
        splitter_2->setBaseSize(QSize(0, 0));
        splitter_2->setOrientation(Qt::Vertical);
        treeWidget = new QTreeWidget(splitter_2);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(treeWidget->sizePolicy().hasHeightForWidth());
        treeWidget->setSizePolicy(sizePolicy2);
        treeWidget->setBaseSize(QSize(0, 0));
        splitter_2->addWidget(treeWidget);
        treeWidget->header()->setVisible(false);
        treeWidget->header()->setDefaultSectionSize(50);
        treeParams = new QTreeWidget(splitter_2);
        treeParams->setObjectName(QStringLiteral("treeParams"));
        sizePolicy2.setHeightForWidth(treeParams->sizePolicy().hasHeightForWidth());
        treeParams->setSizePolicy(sizePolicy2);
        treeParams->setBaseSize(QSize(0, 0));
        treeParams->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        treeParams->setAlternatingRowColors(true);
        treeParams->setSelectionMode(QAbstractItemView::SingleSelection);
        treeParams->setIndentation(15);
        treeParams->setExpandsOnDoubleClick(false);
        splitter_2->addWidget(treeParams);
        treeParams->header()->setDefaultSectionSize(70);

        verticalLayout->addWidget(splitter_2);

        splitter->addWidget(widget_2);
        tabWidget = new QTabWidget(splitter);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        splitter->addWidget(tabWidget);

        horizontalLayout->addWidget(splitter);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1664, 26));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuReport = new QMenu(menuBar);
        menuReport->setObjectName(QStringLiteral("menuReport"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuService = new QMenu(menuBar);
        menuService->setObjectName(QStringLiteral("menuService"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        MainWindow->insertToolBarBreak(toolBar);
        toolBar_3 = new QToolBar(MainWindow);
        toolBar_3->setObjectName(QStringLiteral("toolBar_3"));
        MainWindow->addToolBar(Qt::LeftToolBarArea, toolBar_3);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuReport->menuAction());
        menuBar->addAction(menuService->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNewReport);
        menuFile->addAction(actionOpenReport);
        menuFile->addAction(actSaveReport);
        menuFile->addAction(actSaveAs);
        menuFile->addSeparator();
        menuFile->addAction(actNewReportPage);
        menuFile->addAction(actDeleteReportPage);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuReport->addAction(actPageSettings);
        menuEdit->addAction(actUndo);
        menuEdit->addAction(actRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actCut);
        menuEdit->addAction(actCopy);
        menuEdit->addAction(actPaste);
        menuHelp->addAction(actReadme);
        menuHelp->addAction(actCheckUpdates);
        menuHelp->addAction(actAbout);
        menuService->addAction(actSettings);
        mainToolBar->addAction(actionNewReport);
        mainToolBar->addAction(actionOpenReport);
        mainToolBar->addAction(actSaveReport);
        mainToolBar->addAction(actSaveAs);
        mainToolBar->addAction(actPreview);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actCut);
        mainToolBar->addAction(actCopy);
        mainToolBar->addAction(actPaste);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actUndo);
        mainToolBar->addAction(actRedo);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actNewReportPage);
        mainToolBar->addAction(actDeleteReportPage);
        mainToolBar->addAction(actPageSettings);
        mainToolBar->addAction(actDataSource);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actGroup);
        mainToolBar->addAction(actUngroup);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actShowGrid);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actFieldLeft);
        mainToolBar->addAction(actFieldMiddle);
        mainToolBar->addAction(actFieldRight);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actFieldTop);
        mainToolBar->addAction(actFieldCenter);
        mainToolBar->addAction(actFieldBottom);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actFieldSameWidth);
        mainToolBar->addAction(actFieldSameHeight);
        mainToolBar->addSeparator();
        toolBar->addAction(actionBold);
        toolBar->addAction(actionItalic);
        toolBar->addAction(actionUnderline);
        toolBar->addAction(actionStrikeout);
        toolBar->addSeparator();
        toolBar->addAction(actFontColor);
        toolBar->addSeparator();
        toolBar->addAction(actAlignLeft);
        toolBar->addAction(actAlignCenter);
        toolBar->addAction(actAlignRight);
        toolBar->addAction(actAlignJustify);
        toolBar->addSeparator();
        toolBar->addAction(actAlignTop);
        toolBar->addAction(actAlignVCenter);
        toolBar->addAction(actAlignBottom);
        toolBar->addSeparator();
        toolBar->addAction(actLineTop);
        toolBar->addAction(actLineBottom);
        toolBar->addAction(actLineLeft);
        toolBar->addAction(actLineRight);
        toolBar->addAction(actLineAll);
        toolBar->addAction(actLineNo);
        toolBar->addSeparator();
        toolBar->addAction(actBackgroundColor);
        toolBar->addAction(actBorderColor);
        toolBar->addAction(actFrameStyle);
        toolBar->addSeparator();
        toolBar_3->addAction(actSelect_tool);
        toolBar_3->addAction(actMagnifying);
        toolBar_3->addAction(actionInsert_band);
        toolBar_3->addAction(actAddField);
        toolBar_3->addAction(actAddRichText);
        toolBar_3->addAction(actAddPicture);
        toolBar_3->addAction(actAddBarcode);
        toolBar_3->addAction(actAddDiagram);
        toolBar_3->addAction(actAddDrawing);
        toolBar_3->addAction(actAddCrossTab);
        toolBar_3->addAction(actAddCrossTabBD);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "QtRPT Designer", Q_NULLPTR));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionExit->setToolTip(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actPageSettings->setText(QApplication::translate("MainWindow", "Page settings", Q_NULLPTR));
        actSelect_tool->setText(QApplication::translate("MainWindow", "Select tool", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actSelect_tool->setToolTip(QApplication::translate("MainWindow", "Select tool", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actAlignLeft->setText(QApplication::translate("MainWindow", "Align left", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actAlignLeft->setToolTip(QApplication::translate("MainWindow", "Align left", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actAlignCenter->setText(QApplication::translate("MainWindow", "Align center", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actAlignCenter->setToolTip(QApplication::translate("MainWindow", "Align center", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actAlignRight->setText(QApplication::translate("MainWindow", "Align right", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actAlignRight->setToolTip(QApplication::translate("MainWindow", "Align right", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actAlignJustify->setText(QApplication::translate("MainWindow", "Justify", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actAlignJustify->setToolTip(QApplication::translate("MainWindow", "Justify", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionBold->setText(QApplication::translate("MainWindow", "Bold", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionBold->setToolTip(QApplication::translate("MainWindow", "Bold", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionItalic->setText(QApplication::translate("MainWindow", "Italic", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionItalic->setToolTip(QApplication::translate("MainWindow", "Italic", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionUnderline->setText(QApplication::translate("MainWindow", "Underline", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionUnderline->setToolTip(QApplication::translate("MainWindow", "Underline", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actLineTop->setText(QApplication::translate("MainWindow", "Top line", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actLineTop->setToolTip(QApplication::translate("MainWindow", "Top line", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actLineBottom->setText(QApplication::translate("MainWindow", "Bottom line", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actLineBottom->setToolTip(QApplication::translate("MainWindow", "Bottom line", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actLineLeft->setText(QApplication::translate("MainWindow", "Left line", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actLineLeft->setToolTip(QApplication::translate("MainWindow", "Left line", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actLineRight->setText(QApplication::translate("MainWindow", "Right line", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actLineRight->setToolTip(QApplication::translate("MainWindow", "Right line", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actLineAll->setText(QApplication::translate("MainWindow", "All frame line", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actLineAll->setToolTip(QApplication::translate("MainWindow", "All frame line", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actLineNo->setText(QApplication::translate("MainWindow", "No frame", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actLineNo->setToolTip(QApplication::translate("MainWindow", "No frame", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionInsert_band->setText(QApplication::translate("MainWindow", "Insert band", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionInsert_band->setToolTip(QApplication::translate("MainWindow", "Insert band", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actAddField->setText(QApplication::translate("MainWindow", "Add Fleld", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actAddField->setToolTip(QApplication::translate("MainWindow", "Add field", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionNewReport->setText(QApplication::translate("MainWindow", "New report", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionNewReport->setToolTip(QApplication::translate("MainWindow", "New report", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionOpenReport->setText(QApplication::translate("MainWindow", "Open report", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionOpenReport->setToolTip(QApplication::translate("MainWindow", "Open report", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionOpenReport->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actSaveReport->setText(QApplication::translate("MainWindow", "Save report", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actSaveReport->setToolTip(QApplication::translate("MainWindow", "Save report", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actSaveReport->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actAlignTop->setText(QApplication::translate("MainWindow", "Align top", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actAlignTop->setToolTip(QApplication::translate("MainWindow", "Align top", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actAlignVCenter->setText(QApplication::translate("MainWindow", "Align V center", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actAlignVCenter->setToolTip(QApplication::translate("MainWindow", "Align V center", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actAlignBottom->setText(QApplication::translate("MainWindow", "Align bottom", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actAlignBottom->setToolTip(QApplication::translate("MainWindow", "Align bottom", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actCopy->setText(QApplication::translate("MainWindow", "Copy", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actCopy->setToolTip(QApplication::translate("MainWindow", "Copy", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actCopy->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actCut->setText(QApplication::translate("MainWindow", "Cut", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actCut->setToolTip(QApplication::translate("MainWindow", "Cut", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actCut->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actPaste->setText(QApplication::translate("MainWindow", "Paste", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actPaste->setToolTip(QApplication::translate("MainWindow", "Paste", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actPaste->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actSaveAs->setText(QApplication::translate("MainWindow", "Save as", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actSaveAs->setToolTip(QApplication::translate("MainWindow", "Save as", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actFontColor->setText(QApplication::translate("MainWindow", "Font color", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actFontColor->setToolTip(QApplication::translate("MainWindow", "Font color", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actBackgroundColor->setText(QApplication::translate("MainWindow", "Background color", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actBackgroundColor->setToolTip(QApplication::translate("MainWindow", "Background color", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actBorderColor->setText(QApplication::translate("MainWindow", "Border color", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actBorderColor->setToolTip(QApplication::translate("MainWindow", "Border color", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actAbout->setText(QApplication::translate("MainWindow", "About QtRptDesigner", Q_NULLPTR));
        actShowGrid->setText(QApplication::translate("MainWindow", "Show Grid", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actShowGrid->setToolTip(QApplication::translate("MainWindow", "Show/Hide grid", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actAddPicture->setText(QApplication::translate("MainWindow", "Add picture", Q_NULLPTR));
        actFrameStyle->setText(QApplication::translate("MainWindow", "Frame style", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actFrameStyle->setToolTip(QApplication::translate("MainWindow", "Frame style", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actNewReportPage->setText(QApplication::translate("MainWindow", "New Report Page", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actNewReportPage->setToolTip(QApplication::translate("MainWindow", "New Report Page", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actDeleteReportPage->setText(QApplication::translate("MainWindow", "Delete Report Page", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actDeleteReportPage->setToolTip(QApplication::translate("MainWindow", "Delete Report Page", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actFieldLeft->setText(QApplication::translate("MainWindow", "Align Field Left", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actFieldLeft->setToolTip(QApplication::translate("MainWindow", "Align Field Left", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actFieldMiddle->setText(QApplication::translate("MainWindow", "Align Field Middle", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actFieldMiddle->setToolTip(QApplication::translate("MainWindow", "Align Field Middle", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actFieldRight->setText(QApplication::translate("MainWindow", "Align Field Right", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actFieldRight->setToolTip(QApplication::translate("MainWindow", "Align Field Right", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actFieldTop->setText(QApplication::translate("MainWindow", "Align Field Top", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actFieldTop->setToolTip(QApplication::translate("MainWindow", "Align Field Top", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actFieldCenter->setText(QApplication::translate("MainWindow", "Align Field Center", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actFieldCenter->setToolTip(QApplication::translate("MainWindow", "Align Field Center", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actFieldBottom->setText(QApplication::translate("MainWindow", "Align Field Bottom", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actFieldBottom->setToolTip(QApplication::translate("MainWindow", "Align Field Bottom", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actFieldSameWidth->setText(QApplication::translate("MainWindow", "Field Same Width", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actFieldSameWidth->setToolTip(QApplication::translate("MainWindow", "Field Same Width", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actFieldSameHeight->setText(QApplication::translate("MainWindow", "Field Same Height", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actFieldSameHeight->setToolTip(QApplication::translate("MainWindow", "Field Same Height", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actSettings->setText(QApplication::translate("MainWindow", "Settings", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actSettings->setToolTip(QApplication::translate("MainWindow", "Settings", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actMagnifying->setText(QApplication::translate("MainWindow", "Magnifying glass", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actMagnifying->setToolTip(QApplication::translate("MainWindow", "Magnifying glass", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionStrikeout->setText(QApplication::translate("MainWindow", "Strikeout", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionStrikeout->setToolTip(QApplication::translate("MainWindow", "Strikeout", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actGroupProperty->setText(QApplication::translate("MainWindow", "Group property", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actGroupProperty->setToolTip(QApplication::translate("MainWindow", "Group property", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actCheckUpdates->setText(QApplication::translate("MainWindow", "Check updates", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actCheckUpdates->setToolTip(QApplication::translate("MainWindow", "Check updates", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actAddDiagram->setText(QApplication::translate("MainWindow", "Add Diagram", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actAddDiagram->setToolTip(QApplication::translate("MainWindow", "Add Diagram", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actAddDrawing->setText(QApplication::translate("MainWindow", "Add Drawing", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actAddDrawing->setToolTip(QApplication::translate("MainWindow", "Add Drawing", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actPreview->setText(QApplication::translate("MainWindow", "Preview", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actPreview->setToolTip(QApplication::translate("MainWindow", "Preview", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actDataSource->setText(QApplication::translate("MainWindow", "Data Source", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actDataSource->setToolTip(QApplication::translate("MainWindow", "Data Source", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actUndo->setText(QApplication::translate("MainWindow", "Undo", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actUndo->setToolTip(QApplication::translate("MainWindow", "Undo", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actUndo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actRedo->setText(QApplication::translate("MainWindow", "Redo", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actRedo->setToolTip(QApplication::translate("MainWindow", "Redo", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actRedo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Y", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actAddBarcode->setText(QApplication::translate("MainWindow", "Add Barcode", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actAddBarcode->setToolTip(QApplication::translate("MainWindow", "Add Barcode", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actReadme->setText(QApplication::translate("MainWindow", "Readme", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actReadme->setToolTip(QApplication::translate("MainWindow", "Readme", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actAddRichText->setText(QApplication::translate("MainWindow", "Add Rich Text", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actAddRichText->setToolTip(QApplication::translate("MainWindow", "Add Rich Text", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actGroup->setText(QApplication::translate("MainWindow", "To group", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actGroup->setToolTip(QApplication::translate("MainWindow", "To group", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actUngroup->setText(QApplication::translate("MainWindow", "To ungroup", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actUngroup->setToolTip(QApplication::translate("MainWindow", "To ungroup", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actAddCrossTab->setText(QApplication::translate("MainWindow", "Add CrossTab object", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actAddCrossTab->setToolTip(QApplication::translate("MainWindow", "Add CrossTab object", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actAddCrossTabBD->setText(QApplication::translate("MainWindow", "Add CrossTabBD object", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actAddCrossTabBD->setToolTip(QApplication::translate("MainWindow", "Add CrossTabBD object", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QTreeWidgetItem *___qtreewidgetitem = treeParams->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("MainWindow", "Value", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "Name", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        menuReport->setTitle(QApplication::translate("MainWindow", "Report", Q_NULLPTR));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
        menuService->setTitle(QApplication::translate("MainWindow", "Service", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", Q_NULLPTR));
        toolBar_3->setWindowTitle(QApplication::translate("MainWindow", "toolBar_3", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
