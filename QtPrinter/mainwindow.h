#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "bdoperation.h"

struct T_TITLE
{
    QString ID;
    QString CREAT_DATE;
    QString SHOP_TITLE;
    QString SHOP_NAME;
    QString COMPANY;
    QString ADDRESS;
    QString ADDRESS2;
    QString CODEPOST;
    QString CITY;
    QString COUNTRY;
    QString SIRET;
    QString CODE_NAF;
    QString NUM_TVA;
    QString SIGNATURE;
};

struct T_INVOICE
{
    QString ID;
    QString TICKET_ID;
    QString COMPANY;
    QString ADDRESS;
    QString POSTCODE;
    QString CITY;
    QString COUNTRY;
    QString SIRET;
    QString NUM_TVA;
    QString INVOICE_NUM;
    QString CUS_CNT;
    QString OPER_DATETIME;
    QString MONTANTS_TTC_VENTILES_TVA;
    QString MONTANTS_TTC;
    QString REPO_SIGNATURE;
    QString SIGNATURE;
    QString CA_DATE;
};

struct T_TICKET_DETAIL
{
    QString ID;
    QString TICKET_ID;
    QString LINE_IDX;
    QString PRD_REF;
    QString PRD_ORG;
    QString PRD_DESC;
    QString CNT;
    QString PRICE;
    QString DISCOUNT;
    QString TAX_ID;
    QString TAX_RATE;
    QString PRICE_HT;
    QString PRICE_TTC;
    QString TOTAL_HT_BEFORE_DIS;
    QString TOTAL_TTC_BEFORE_DIS;
    QString TOTAL_HT_DIS;
    QString TOTAL_TTC_DIS;
    QString TOTAL_HT;
    QString TOTAL_TTC;
    QString PRD_DESC_2;
};

struct T_TICKET
{
    QString ID;
    QString ORDER_ID;
    QString ORDER_DATETIME;
    QString CUS_ID;
    QString POS_ID;
    QString SELLER_ID;
    QString TABLE_NUM;
    QString CUS_CNT;
    QString ORDER_TYPE;
    QString DISCOUNT;
    QString DOC_NUM;
    QString VER_NUM;
    QString PRINT_TIMES;
    QString TITLE_ID;
    QString OPER_ID;
    QString OPER_NAME;
    QString OPER_DATETIME;
    QString SELLER_NAME;
    QString DOC_TYPE;
    QString OPER_TYPE;
    QString MSG_TICKET;
    QString DET_LINE_CNT;
    QString TOTAL_HT_BEFORE_DIS;
    QString TOTAL_TTC_BEFORE_DIS;
    QString TOTAL_HT_DIS;
    QString TOTAL_TTC_DIS;
    QString MONTANTS_TTC_VENTILES_TVA;
    QString REPO_SIGNATURE;
    QString SIGNATURE;
    QString CA_DATE;
};

struct T_TICKET_PAYMENT
{
    QString ID;
    QString TICKET_ID;
    QString LINE_IDX;
    QString PAY_TYPE_ID;
    QString PAY_TYPE;
    QString PAY_DESC;
    QString CNT;
    QString PRICE;
    QString TOTAL;
};

struct T_TICKET_TAX
{
    QString ID;
    QString TICKET_ID;
    QString LINE_IDX;
    QString TAX_ID;
    QString TAX_RATE;
    QString TOTAL_HT;
    QString TOTAL_TVA;
    QString TOTAL_TTC;
};

#include "qtrpt.h"
#include <QPrinter>
#include <QPrintPreviewWidget>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    T_TITLE t_title;
    T_INVOICE t_invoice;
    T_TICKET t_ticket;
    T_TICKET_DETAIL t_ticket_detail;
    T_TICKET_TAX t_ticket_tax;
    T_TICKET_PAYMENT t_ticket_payment;

private slots:
    void on_pushButtonSetting_clicked();

    void on_pushButtonPrint_clicked();

    void updatePreview();
    void setValue(const int recNo,const QString paramName,
                  QVariant &paramValue,const int reportPage);

private:
    Ui::MainWindow *ui;

    QPrintPreviewWidget *preview;
    QPrinter *printer;
    QtRPT *report;

    //bdOperation operation;
};

#endif // MAINWINDOW_H
