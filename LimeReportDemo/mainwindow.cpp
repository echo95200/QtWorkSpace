#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "lrreportengine.h"
#include "lrcallbackdatasourceintf.h"
#include "LimeReport"
#include <QFileDialog>
#include <QMessageBox>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlRecord>
#include <LimeReport>
#include <LRCallbackDS>
#include <QDebug>
#include <QStringListModel>
#include <QSqlTableModel>
#include <QSqlRecord>
#include <QTableView>
#include <QTextCodec>
#include <QSettings>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow), m_progressDialog(0), m_customers(0), m_orders(0)
{
    ui->setupUi(this);
    report = new LimeReport::ReportEngine(this);
    configIni = new QSettings(tr("%1/LimeReportDemo.ini").arg(QCoreApplication::applicationDirPath()),QSettings::IniFormat);

    connect(report, SIGNAL(renderStarted()), this, SLOT(renderStarted()));
    connect(report, SIGNAL(renderPageFinished(int)),
            this, SLOT(renderPageFinished(int)));
    connect(report, SIGNAL(renderFinished()), this, SLOT(renderFinished()));

    if(!this->initDatabase()){
        ui->pushButtonPreview->setEnabled(false);
        ui->pushButton->setEnabled(false);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
    delete m_customers;
    delete m_orders;
    delete configIni;
}

bool MainWindow::initDatabase()
{
    bool flag = false;
    configIni->beginGroup("LimeReportDemo");
    databaseFilePath = configIni->value("databaseFilePath",databaseFilePath).toString();
    configIni->endGroup();
    QFile dbFile(databaseFilePath);
    if(dbFile.exists())
    {
        m_db = QSqlDatabase::addDatabase("QIBASE");
        m_db.setDatabaseName(dbFile.fileName());
        m_db.setUserName("SYSDBA");
        m_db.setPassword("masterkey");
        if(m_db.open()){
            flag = true;
        }
        else{
            QMessageBox::about(NULL,"Info","Database file cannot be opened!");
        }
    }
    else {
        QMessageBox::about(NULL,"Info","Database file does not exist!");
    }
    return flag;
}

void MainWindow::setDatabase(QString invoiceNumber)
{
    // Query String
    /*
    QString sqlStrTicket = "SELECT T_TICKET.* FROM T_INVOICE "
                            "INNER JOIN T_TICKET ON T_INVOICE.TICKET_ID = T_TICKET.ID "
                            "WHERE T_INVOICE.INVOICE_NUM = ";
    QString sqlStrInvoice = "SELECT T_INVOICE.* FROM T_INVOICE "
                            "INNER JOIN T_TICKET ON T_INVOICE.TICKET_ID = T_TICKET.ID "
                            "WHERE T_INVOICE.INVOICE_NUM = ";
    QString sqlStrIicDet = "SELECT T_TICKET_DETAIL.* "
                           "FROM T_INVOICE "
                           "INNER JOIN T_TICKET_DETAIL ON T_INVOICE.TICKET_ID = T_TICKET_DETAIL.TICKET_ID "
                           "WHERE T_INVOICE.INVOICE_NUM = ";
    QString sqlStrIicPay = "SELECT T_TICKET_PAYMENT.* FROM T_INVOICE "
                            "INNER JOIN T_TICKET_PAYMENT ON T_INVOICE.TICKET_ID = T_TICKET_PAYMENT.TICKET_ID "
                            "WHERE T_INVOICE.INVOICE_NUM = ";
    QString sqlStrIicTax = "SELECT T_TICKET_TAX.* FROM T_INVOICE "
                            "INNER JOIN T_TICKET_TAX ON T_INVOICE.TICKET_ID = T_TICKET_TAX.TICKET_ID "
                            "WHERE T_INVOICE.INVOICE_NUM = ";
    QString sqlStrTicTil = "SELECT T_TITLE.* FROM T_TICKET "
                          "INNER JOIN T_INVOICE ON T_TICKET.ID = T_INVOICE.TICKET_ID "
                          "INNER JOIN T_TITLE ON T_TITLE.ID = T_TICKET.TITLE_ID "
                          "WHERE T_INVOICE.INVOICE_NUM = ";

    QString sqlQueryTax = "SELECT T_TICKET_TAX.TAX_RATE,T_TICKET_TAX.TOTAL_HT,"
                          "T_TICKET_TAX.TOTAL_TVA,TOTAL_TTC "
                          "FROM T_INVOICE "
                          "INNER JOIN T_TICKET_TAX ON T_INVOICE.TICKET_ID = T_TICKET_TAX.TICKET_ID "
                          "WHERE T_INVOICE.INVOICE_NUM = ";
    QString sqlQuery = "SELECT T_TICKET_PAYMENT.PAY_TYPE,T_TICKET_PAYMENT.TOTAL "
                       "FROM T_TICKET_PAYMENT "
                       "INNER JOIN T_INVOICE ON T_TICKET_PAYMENT.TICKET_ID = T_INVOICE.TICKET_ID "
                       "WHERE T_INVOICE.INVOICE_NUM = ";


    //write setting file

    QString initFilePath = QCoreApplication::applicationDirPath();
    QSettings *configIni = new QSettings(tr("%1/LimeReportDemo.ini").arg(initFilePath),QSettings::IniFormat);
    configIni->setIniCodec(QTextCodec::codecForName("System"));
    configIni->beginGroup("LimeReportDemo");
    configIni->setValue("databaseFilePath",this->databaseFilePath);
    configIni->setValue("sqlStrTicket",sqlStrTicket);
    configIni->setValue("sqlStrInvoice",sqlStrInvoice);
    configIni->setValue("sqlStrIicDet",sqlStrIicDet);
    configIni->setValue("sqlStrIicPay",sqlStrIicPay);
    configIni->setValue("sqlStrIicTax",sqlStrIicTax);
    configIni->setValue("sqlStrTicTil",sqlStrTicTil);
    configIni->setValue("sqlQueryTax",sqlQueryTax);
    configIni->setValue("sqlQuery",sqlQuery);
    configIni->endGroup();
    */

    //read setting file
    configIni->beginGroup("LimeReportDemo");
    QString sqlStrTicket = configIni->value("sqlStrTicket").toString();
    QString sqlStrInvoice = configIni->value("sqlStrInvoice").toString();
    QString sqlStrIicDet = configIni->value("sqlStrIicDet").toString();
    QString sqlStrIicPay = configIni->value("sqlStrIicPay").toString();
    QString sqlStrIicTax = configIni->value("sqlStrIicTax").toString();
    QString sqlStrTicTil = configIni->value("sqlStrTicTil").toString();
    QString sqlQueryTax = configIni->value("sqlQueryTax").toString();
    QString sqlQuery = configIni->value("sqlQuery").toString();
    configIni->endGroup();


    //Get the information of the Ticket and Invoice
    QSqlQueryModel* T_TICKET_MODEL = new QSqlQueryModel();
    sqlStrTicket.append(invoiceNumber);
    T_TICKET_MODEL->setQuery(sqlStrTicket,m_db);
    report->dataManager()->addModel("T_TICKET",T_TICKET_MODEL,true);

    QSqlQueryModel* T_INVOICE_MODEL = new QSqlQueryModel();
    sqlStrInvoice.append(invoiceNumber);
    T_INVOICE_MODEL->setQuery(sqlStrInvoice,m_db);
    report->dataManager()->addModel("T_INVOICE",T_INVOICE_MODEL,true);

    // Add if
    QSqlQueryModel* T_TICKET_DETAIL_MODEL = new QSqlQueryModel();
    sqlStrIicDet.append(invoiceNumber);
    T_TICKET_DETAIL_MODEL->setQuery(sqlStrIicDet,m_db);
    report->dataManager()->addModel("T_TICKET_DETAIL",T_TICKET_DETAIL_MODEL,true);

    QSqlQueryModel* T_TICKET_PAYMENT_MODEL = new QSqlQueryModel();
    sqlStrIicPay.append(invoiceNumber);
    T_TICKET_PAYMENT_MODEL->setQuery(sqlStrIicPay,m_db);
    report->dataManager()->addModel("T_TICKET_PAYMENT",T_TICKET_PAYMENT_MODEL,true);

    QSqlQueryModel* T_TICKET_TAX_MODEL = new QSqlQueryModel();
    sqlStrIicTax.append(invoiceNumber);
    T_TICKET_TAX_MODEL->setQuery(sqlStrIicTax,m_db);
    report->dataManager()->addModel("T_TICKET_TAX",T_TICKET_TAX_MODEL,true);

    QSqlQueryModel* T_TICKET_TITLE = new QSqlQueryModel();
    sqlStrTicTil.append(invoiceNumber);
    T_TICKET_TITLE->setQuery(sqlStrTicTil,m_db);
    report->dataManager()->addModel("T_TITLE",T_TICKET_TITLE,true);

    // Get the information of the table T_TICKET_TAX
    sqlQueryTax.append(invoiceNumber);
    QSqlQuery queryTax(sqlQueryTax);
    QStringList TaxList,HTList,TVAList,TTCList;
    int sizeQueryTax = 0;
    while (queryTax.next()) {
        sizeQueryTax++;
        TaxList.append(QString::number(queryTax.value(0).toDouble(),10,2));
        HTList.append(QString::number(queryTax.value(1).toDouble(),10,2));
        TVAList.append(QString::number(queryTax.value(2).toDouble(),10,2));
        TTCList.append(QString::number(queryTax.value(3).toDouble(),10,2));
    }
    while (sizeQueryTax < 4) {
        sizeQueryTax++;
        TaxList.append("");
        HTList.append("");
        TVAList.append("");
        TTCList.append("");
    }

    //test
    /*
    QString taxListModelName;
    QString TaxListName;
    QString TAXDBName = "TEST";
    int index = 1;
    while (index < 5) {
        taxListModelName.append(QString::number(index));
        TaxListName.append(QString::number(index));
        TAXDBName = "TEST";
        TAXDBName.append(QString::number(index));
        QStringListModel* taxListModelName = new QStringListModel();
        QStringList TaxListName(TaxList.value(index));
        taxListModelName->setStringList(TaxListName);
        report->dataManager()->addModel(TAXDBName,taxListModelName,true);
        index++;
    }
    */

    // TAUX
    QStringListModel* taxListModel1 = new QStringListModel();
    QStringList TaxList1(TaxList.value(0));
    taxListModel1->setStringList(TaxList1);
    report->dataManager()->addModel("TAX1",taxListModel1,true);

    QStringListModel* taxListModel2 = new QStringListModel();
    QStringList TaxList2(TaxList.value(1));
    taxListModel2->setStringList(TaxList2);
    report->dataManager()->addModel("TAX2",taxListModel2,true);

    QStringListModel* taxListModel3 = new QStringListModel();
    QStringList TaxList3(TaxList.value(2));
    taxListModel3->setStringList(TaxList3);
    report->dataManager()->addModel("TAX3",taxListModel3,true);

    QStringListModel* taxListModel4 = new QStringListModel();
    QStringList TaxList4(TaxList.value(3));
    taxListModel4->setStringList(TaxList4);
    report->dataManager()->addModel("TAX4",taxListModel4,true);

    // HT
    QStringListModel* HTListModel1 = new QStringListModel();
    QStringList HTList1(HTList.value(0));
    HTListModel1->setStringList(HTList1);
    report->dataManager()->addModel("HT1",HTListModel1,true);

    QStringListModel* HTListModel2 = new QStringListModel();
    QStringList HTList2(HTList.value(1));
    HTListModel2->setStringList(HTList2);
    report->dataManager()->addModel("HT2",HTListModel2,true);

    QStringListModel* HTListModel3 = new QStringListModel();
    QStringList HTList3(HTList.value(2));
    HTListModel3->setStringList(HTList3);
    report->dataManager()->addModel("HT3",HTListModel3,true);

    QStringListModel* HTListModel4 = new QStringListModel();
    QStringList HTList4(HTList.value(3));
    HTListModel4->setStringList(HTList4);
    report->dataManager()->addModel("HT4",HTListModel4,true);

    // TVA
    QStringListModel* TVAListModel1 = new QStringListModel();
    QStringList TVAList1(TVAList.value(0));
    TVAListModel1->setStringList(TVAList1);
    report->dataManager()->addModel("TVA1",TVAListModel1,true);

    QStringListModel* TVAListModel2 = new QStringListModel();
    QStringList TVAList2(TVAList.value(1));
    TVAListModel2->setStringList(TVAList2);
    report->dataManager()->addModel("TVA2",TVAListModel2,true);

    QStringListModel* TVAListModel3 = new QStringListModel();
    QStringList TVAList3(TVAList.value(2));
    TVAListModel3->setStringList(TVAList3);
    report->dataManager()->addModel("TVA3",TVAListModel3,true);

    QStringListModel* TVAListModel4 = new QStringListModel();
    QStringList TVAList4(TVAList.value(3));
    TVAListModel4->setStringList(TVAList4);
    report->dataManager()->addModel("TVA4",TVAListModel4,true);

    // TTC
    QStringListModel* TTCListModel1 = new QStringListModel();
    QStringList TTCList1(TTCList.value(0));
    TTCListModel1->setStringList(TTCList1);
    report->dataManager()->addModel("TTC1",TTCListModel1,true);

    QStringListModel* TTCListModel2 = new QStringListModel();
    QStringList TTCList2(TTCList.value(1));
    TTCListModel2->setStringList(TTCList2);
    report->dataManager()->addModel("TTC2",TTCListModel2,true);

    QStringListModel* TTCListModel3 = new QStringListModel();
    QStringList TTCList3(TTCList.value(2));
    TTCListModel3->setStringList(TTCList3);
    report->dataManager()->addModel("TTC3",TTCListModel3,true);

    QStringListModel* TTCListModel4 = new QStringListModel();
    QStringList TTCList4(TTCList.value(3));
    TTCListModel4->setStringList(TTCList4);
    report->dataManager()->addModel("TTC4",TTCListModel4,true);


    // Select the data from database
    sqlQuery.append(invoiceNumber);
    QSqlQuery query(sqlQuery);
    QStringList payTypeList,payTotalList;
    int sizeQuery = 0;
    while (query.next()) {
        sizeQuery ++;
        //payTypeList.append(QString::number(query.value(0).toDouble(),10,2));
        payTypeList.append(query.value(0).toString());
        payTotalList.append(QString::number(query.value(1).toDouble(),10,2));
    }
    qDebug() << sizeQuery;
    while (sizeQuery < 5) {
        sizeQuery++;
        payTypeList.append("");
        payTotalList.append("");
    }
    QStringListModel* payTypeListModel = new QStringListModel();
    payTypeListModel->setStringList(payTypeList);
    QStringListModel* payTotalListModel = new QStringListModel();
    payTotalListModel->setStringList(payTotalList);
    report->dataManager()->addModel("PAYMENT_TYPE",payTypeListModel,true);
    report->dataManager()->addModel("PAYMENT_TOTAL",payTotalListModel,true);

    QStringListModel* payTypeListModel1 = new QStringListModel();
    QStringListModel* payTypeListModel2 = new QStringListModel();
    QStringListModel* payTypeListModel3 = new QStringListModel();
    QStringListModel* payTypeListModel4 = new QStringListModel();
    QStringListModel* payTypeListModel5 = new QStringListModel();
    QStringListModel* payTotalListModel1 = new QStringListModel();
    QStringListModel* payTotalListModel2 = new QStringListModel();
    QStringListModel* payTotalListModel3 = new QStringListModel();
    QStringListModel* payTotalListModel4 = new QStringListModel();
    QStringListModel* payTotalListModel5 = new QStringListModel();
    QStringList payTypeList1,payTypeList2,payTypeList3,payTypeList4,payTypeList5;
    payTypeList1.append(payTypeList.value(0));
    payTypeList2.append(payTypeList.value(1));
    payTypeList3.append(payTypeList.value(2));
    payTypeList4.append(payTypeList.value(3));
    payTypeList5.append(payTypeList.value(4));
    QStringList payTotalList1,payTotalList2,payTotalList3,payTotalList4,payTotalList5;
    payTotalList1.append(payTotalList.value(0));
    payTotalList2.append(payTotalList.value(1));
    payTotalList3.append(payTotalList.value(2));
    payTotalList4.append(payTotalList.value(3));
    payTotalList5.append(payTotalList.value(4));
    payTypeListModel1->setStringList(payTypeList1);
    payTypeListModel2->setStringList(payTypeList2);
    payTypeListModel3->setStringList(payTypeList3);
    payTypeListModel4->setStringList(payTypeList4);
    payTypeListModel5->setStringList(payTypeList5);
    payTotalListModel1->setStringList(payTotalList1);
    payTotalListModel2->setStringList(payTotalList2);
    payTotalListModel3->setStringList(payTotalList3);
    payTotalListModel4->setStringList(payTotalList4);
    payTotalListModel5->setStringList(payTotalList5);
    report->dataManager()->addModel("PAYMENT_TYPE1",payTypeListModel1,true);
    report->dataManager()->addModel("PAYMENT_TYPE2",payTypeListModel2,true);
    report->dataManager()->addModel("PAYMENT_TYPE3",payTypeListModel3,true);
    report->dataManager()->addModel("PAYMENT_TYPE4",payTypeListModel4,true);
    report->dataManager()->addModel("PAYMENT_TYPE5",payTypeListModel5,true);
    report->dataManager()->addModel("PAYMENT_TOTAL1",payTotalListModel1,true);
    report->dataManager()->addModel("PAYMENT_TOTAL2",payTotalListModel2,true);
    report->dataManager()->addModel("PAYMENT_TOTAL3",payTotalListModel3,true);
    report->dataManager()->addModel("PAYMENT_TOTAL4",payTotalListModel4,true);
    report->dataManager()->addModel("PAYMENT_TOTAL5",payTotalListModel5,true);
}

void MainWindow::on_pushButton_clicked()
{
    report->dataManager()->clearUserVariables();
    QString invNum = ui->lineEditInvoiceNum->text();
    this->setDatabase(invNum);
    report->setShowProgressDialog(false);
    report->designReport();
}

void MainWindow::on_pushButtonPreview_clicked()
{
    QString invNum = ui->lineEditInvoiceNum->text();
    this->setDatabase(invNum);
    QString fileName = QFileDialog::getOpenFileName(this,"Select report file",QApplication::applicationDirPath()+"/demo_reports/","*.lrxml");
    if (!fileName.isEmpty()) {
        report->loadFromFile(fileName);
        report->previewReport();
    }
}

void MainWindow::renderStarted()
{
    m_currentPage = 0;
    m_progressDialog = new QProgressDialog(tr("Start render"),tr("Cancel"),0,0,this);
    m_progressDialog->setWindowModality(Qt::WindowModal);
    connect(m_progressDialog, SIGNAL(canceled()), report, SLOT(cancelRender()));
    m_progressDialog->show();
    QApplication::processEvents();
}

void MainWindow::renderPageFinished(int renderedPageCount)
{
    if (m_progressDialog){
        m_progressDialog->setLabelText(QString::number(renderedPageCount)+tr(" page rendered"));
        m_progressDialog->setValue(renderedPageCount);
    }
}

void MainWindow::renderFinished()
{
    if (m_progressDialog){
        m_progressDialog->close();
        delete m_progressDialog;
    }
    m_progressDialog = 0;
}





