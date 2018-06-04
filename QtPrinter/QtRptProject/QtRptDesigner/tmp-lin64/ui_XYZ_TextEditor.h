/********************************************************************************
** Form generated from reading UI file 'XYZ_TextEditor.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XYZ_TEXTEDITOR_H
#define UI_XYZ_TEXTEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_XYZTextEditor
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QToolButton *btnCut;
    QToolButton *btnCopy;
    QToolButton *btnPaste;
    QSpacerItem *horizontalSpacer_10;
    QToolButton *btnTextBold;
    QToolButton *btnTextItalic;
    QToolButton *btnUnderline;
    QSpacerItem *horizontalSpacer_4;
    QToolButton *btnAlignLeft;
    QToolButton *btnAlignCenter;
    QToolButton *btnAlignRight;
    QToolButton *btnAlignJustify;
    QSpacerItem *horizontalSpacer;
    QComboBox *comboStyle;
    QSpacerItem *horizontalSpacer_5;
    QToolButton *btnTextColor;
    QFontComboBox *comboFont;
    QComboBox *comboSize;
    QToolButton *btnTextDirection;
    QSpacerItem *horizontalSpacer_9;
    QTextEdit *textEdit;

    void setupUi(QWidget *XYZTextEditor)
    {
        if (XYZTextEditor->objectName().isEmpty())
            XYZTextEditor->setObjectName(QStringLiteral("XYZTextEditor"));
        XYZTextEditor->resize(631, 383);
        XYZTextEditor->setWindowTitle(QStringLiteral("Form"));
        verticalLayout = new QVBoxLayout(XYZTextEditor);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setSizeConstraint(QLayout::SetDefaultConstraint);
        btnCut = new QToolButton(XYZTextEditor);
        btnCut->setObjectName(QStringLiteral("btnCut"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/images/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCut->setIcon(icon);
        btnCut->setAutoRaise(true);

        horizontalLayout_6->addWidget(btnCut);

        btnCopy = new QToolButton(XYZTextEditor);
        btnCopy->setObjectName(QStringLiteral("btnCopy"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/images/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCopy->setIcon(icon1);
        btnCopy->setAutoRaise(true);

        horizontalLayout_6->addWidget(btnCopy);

        btnPaste = new QToolButton(XYZTextEditor);
        btnPaste->setObjectName(QStringLiteral("btnPaste"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/images/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnPaste->setIcon(icon2);
        btnPaste->setAutoRaise(true);

        horizontalLayout_6->addWidget(btnPaste);

        horizontalSpacer_10 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_10);

        btnTextBold = new QToolButton(XYZTextEditor);
        btnTextBold->setObjectName(QStringLiteral("btnTextBold"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/images/textbold.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnTextBold->setIcon(icon3);
        btnTextBold->setCheckable(true);
        btnTextBold->setAutoRaise(true);

        horizontalLayout_6->addWidget(btnTextBold);

        btnTextItalic = new QToolButton(XYZTextEditor);
        btnTextItalic->setObjectName(QStringLiteral("btnTextItalic"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/images/textitalic.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnTextItalic->setIcon(icon4);
        btnTextItalic->setCheckable(true);
        btnTextItalic->setAutoRaise(true);

        horizontalLayout_6->addWidget(btnTextItalic);

        btnUnderline = new QToolButton(XYZTextEditor);
        btnUnderline->setObjectName(QStringLiteral("btnUnderline"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/prefix1/images/textunder.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnUnderline->setIcon(icon5);
        btnUnderline->setCheckable(true);
        btnUnderline->setAutoRaise(true);

        horizontalLayout_6->addWidget(btnUnderline);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        btnAlignLeft = new QToolButton(XYZTextEditor);
        btnAlignLeft->setObjectName(QStringLiteral("btnAlignLeft"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/new/prefix1/images/textleft.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnAlignLeft->setIcon(icon6);
        btnAlignLeft->setCheckable(true);
        btnAlignLeft->setAutoRaise(true);

        horizontalLayout_6->addWidget(btnAlignLeft);

        btnAlignCenter = new QToolButton(XYZTextEditor);
        btnAlignCenter->setObjectName(QStringLiteral("btnAlignCenter"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/new/prefix1/images/textcenter.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnAlignCenter->setIcon(icon7);
        btnAlignCenter->setCheckable(true);
        btnAlignCenter->setAutoRaise(true);

        horizontalLayout_6->addWidget(btnAlignCenter);

        btnAlignRight = new QToolButton(XYZTextEditor);
        btnAlignRight->setObjectName(QStringLiteral("btnAlignRight"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/new/prefix1/images/textright.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnAlignRight->setIcon(icon8);
        btnAlignRight->setCheckable(true);
        btnAlignRight->setAutoRaise(true);

        horizontalLayout_6->addWidget(btnAlignRight);

        btnAlignJustify = new QToolButton(XYZTextEditor);
        btnAlignJustify->setObjectName(QStringLiteral("btnAlignJustify"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/new/prefix1/images/textjustify.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnAlignJustify->setIcon(icon9);
        btnAlignJustify->setCheckable(true);
        btnAlignJustify->setAutoRaise(true);

        horizontalLayout_6->addWidget(btnAlignJustify);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        comboStyle = new QComboBox(XYZTextEditor);
        comboStyle->setObjectName(QStringLiteral("comboStyle"));

        horizontalLayout_6->addWidget(comboStyle);

        horizontalSpacer_5 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        btnTextColor = new QToolButton(XYZTextEditor);
        btnTextColor->setObjectName(QStringLiteral("btnTextColor"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/new/prefix1/images/fontColor.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnTextColor->setIcon(icon10);
        btnTextColor->setAutoRaise(true);

        horizontalLayout_6->addWidget(btnTextColor);

        comboFont = new QFontComboBox(XYZTextEditor);
        comboFont->setObjectName(QStringLiteral("comboFont"));
        QFont font;
        comboFont->setCurrentFont(font);

        horizontalLayout_6->addWidget(comboFont);

        comboSize = new QComboBox(XYZTextEditor);
        comboSize->insertItems(0, QStringList()
         << QStringLiteral("6")
         << QStringLiteral("7")
         << QStringLiteral("8")
         << QStringLiteral("9")
         << QStringLiteral("10")
         << QStringLiteral("11")
         << QStringLiteral("12")
         << QStringLiteral("14")
         << QStringLiteral("16")
         << QStringLiteral("18")
         << QStringLiteral("20")
         << QStringLiteral("22")
         << QStringLiteral("24")
         << QStringLiteral("26")
         << QStringLiteral("28")
         << QStringLiteral("36")
         << QStringLiteral("48")
         << QStringLiteral("72")
        );
        comboSize->setObjectName(QStringLiteral("comboSize"));
        comboSize->setEditable(true);
        comboSize->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_6->addWidget(comboSize);

        btnTextDirection = new QToolButton(XYZTextEditor);
        btnTextDirection->setObjectName(QStringLiteral("btnTextDirection"));
        btnTextDirection->setCheckable(true);
        btnTextDirection->setAutoRaise(true);

        horizontalLayout_6->addWidget(btnTextDirection);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_9);


        verticalLayout->addLayout(horizontalLayout_6);

        textEdit = new QTextEdit(XYZTextEditor);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);


        retranslateUi(XYZTextEditor);

        comboSize->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(XYZTextEditor);
    } // setupUi

    void retranslateUi(QWidget *XYZTextEditor)
    {
#ifndef QT_NO_TOOLTIP
        btnCut->setToolTip(QApplication::translate("XYZTextEditor", "Cut", 0));
#endif // QT_NO_TOOLTIP
        btnCut->setText(QApplication::translate("XYZTextEditor", "...", 0));
#ifndef QT_NO_TOOLTIP
        btnCopy->setToolTip(QApplication::translate("XYZTextEditor", "Copy", 0));
#endif // QT_NO_TOOLTIP
        btnCopy->setText(QApplication::translate("XYZTextEditor", "...", 0));
#ifndef QT_NO_TOOLTIP
        btnPaste->setToolTip(QApplication::translate("XYZTextEditor", "Paste", 0));
#endif // QT_NO_TOOLTIP
        btnPaste->setText(QApplication::translate("XYZTextEditor", "...", 0));
#ifndef QT_NO_TOOLTIP
        btnTextBold->setToolTip(QApplication::translate("XYZTextEditor", "Bold", 0));
#endif // QT_NO_TOOLTIP
        btnTextBold->setText(QApplication::translate("XYZTextEditor", "...", 0));
#ifndef QT_NO_TOOLTIP
        btnTextItalic->setToolTip(QApplication::translate("XYZTextEditor", "Italic", 0));
#endif // QT_NO_TOOLTIP
        btnTextItalic->setText(QApplication::translate("XYZTextEditor", "...", 0));
#ifndef QT_NO_TOOLTIP
        btnUnderline->setToolTip(QApplication::translate("XYZTextEditor", "Underline", 0));
#endif // QT_NO_TOOLTIP
        btnUnderline->setText(QApplication::translate("XYZTextEditor", "...", 0));
#ifndef QT_NO_TOOLTIP
        btnAlignLeft->setToolTip(QApplication::translate("XYZTextEditor", "Align left", 0));
#endif // QT_NO_TOOLTIP
        btnAlignLeft->setText(QApplication::translate("XYZTextEditor", "...", 0));
#ifndef QT_NO_TOOLTIP
        btnAlignCenter->setToolTip(QApplication::translate("XYZTextEditor", "Align center", 0));
#endif // QT_NO_TOOLTIP
        btnAlignCenter->setText(QApplication::translate("XYZTextEditor", "...", 0));
#ifndef QT_NO_TOOLTIP
        btnAlignRight->setToolTip(QApplication::translate("XYZTextEditor", "Align right", 0));
#endif // QT_NO_TOOLTIP
        btnAlignRight->setText(QApplication::translate("XYZTextEditor", "...", 0));
#ifndef QT_NO_TOOLTIP
        btnAlignJustify->setToolTip(QApplication::translate("XYZTextEditor", "Align jusify", 0));
#endif // QT_NO_TOOLTIP
        btnAlignJustify->setText(QApplication::translate("XYZTextEditor", "...", 0));
#ifndef QT_NO_TOOLTIP
        comboStyle->setToolTip(QApplication::translate("XYZTextEditor", "List", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        btnTextColor->setToolTip(QApplication::translate("XYZTextEditor", "Font color", 0));
#endif // QT_NO_TOOLTIP
        btnTextColor->setText(QApplication::translate("XYZTextEditor", "...", 0));
#ifndef QT_NO_TOOLTIP
        comboFont->setToolTip(QApplication::translate("XYZTextEditor", "Font", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        comboSize->setToolTip(QApplication::translate("XYZTextEditor", "Font size", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        btnTextDirection->setToolTip(QApplication::translate("XYZTextEditor", "TextDirection", 0));
#endif // QT_NO_TOOLTIP
        btnTextDirection->setText(QApplication::translate("XYZTextEditor", "<-", 0));
        Q_UNUSED(XYZTextEditor);
    } // retranslateUi

};

namespace Ui {
    class XYZTextEditor: public Ui_XYZTextEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XYZ_TEXTEDITOR_H
