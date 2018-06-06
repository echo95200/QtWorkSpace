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
#include <QFile>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow), m_progressDialog(0), m_customers(0), m_orders(0)
{
    ui->setupUi(this);
    report = new LimeReport::ReportEngine(this);

    connect(report, SIGNAL(renderStarted()), this, SLOT(renderStarted()));
    connect(report, SIGNAL(renderPageFinished(int)),
            this, SLOT(renderPageFinished(int)));
    connect(report, SIGNAL(renderFinished()), this, SLOT(renderFinished()));

    QString invoiceNumber = ui->lineEditInvoiceNum->text().trimmed();

    QFile dbFile("/home/echo/ventap.fdb");
    if (dbFile.exists()){
        m_db = QSqlDatabase::addDatabase("QIBASE");
        m_db.setDatabaseName(dbFile.fileName());
        m_db.setUserName("SYSDBA");
        m_db.setPassword("masterkey");
        if (m_db.open()){

            QSqlQueryModel* T_INVOICE_PAYMENT_MODEL = new QSqlQueryModel();
            QString sqlStrInvPay = "SELECT T_TICKET_PAYMENT.* FROM T_TICKET_PAYMENT "
                                   "INNER JOIN T_INVOICE ON T_TICKET_PAYMENT.TICKET_ID = T_INVOICE.TICKET_ID "
                                   "WHERE T_INVOICE.INVOICE_NUM = ";
            sqlStrInvPay.append(invoiceNumber);
            T_INVOICE_PAYMENT_MODEL->setQuery(sqlStrInvPay,m_db);
            report->dataManager()->addModel("T_INVOICE_PAYMENT",T_INVOICE_PAYMENT_MODEL,true);

            QSqlQueryModel* T_INVOICE_TICKET_MODEL = new QSqlQueryModel();
            QString sqlStrInvoice = "SELECT * FROM T_INVOICE "
                                    "INNER JOIN T_TICKET ON T_INVOICE.TICKET_ID = T_TICKET.ID "
                                    "INNER JOIN T_TICKET_DETAIL ON T_INVOICE.TICKET_ID = T_TICKET_DETAIL.TICKET_ID "
                                    "WHERE T_INVOICE.INVOICE_NUM = ";
            sqlStrInvoice.append(invoiceNumber);
            T_INVOICE_TICKET_MODEL->setQuery(sqlStrInvoice,m_db);
            report->dataManager()->addModel("T_INVOICE_TICKET",T_INVOICE_TICKET_MODEL,true);
        };
    }

}

MainWindow::~MainWindow()
{
    delete ui;
    delete m_customers;
    delete m_orders;
}

void MainWindow::on_pushButton_clicked()
{
    report->dataManager()->clearUserVariables();
    report->setShowProgressDialog(false);
    report->designReport();
}

void MainWindow::on_pushButtonPreview_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,"Select report file",QApplication::applicationDirPath()+"/demo_reports/","*.lrxml");
    if (!fileName.isEmpty()) {
        report->loadFromFile(fileName);
//        if (!ui->leVariableName->text().isEmpty() && !ui->leVariableValue->text().isEmpty()){
//            report->dataManager()->setReportVariable(ui->leVariableName->text(), ui->leVariableValue->text());
//        }
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

//void MainWindow::prepareData(QSqlQuery* ds, LimeReport::CallbackInfo info, QVariant &data)
//{
//    switch (info.dataType) {
//    case LimeReport::CallbackInfo::ColumnCount:
//        data = ds->record().count();
//        break;
//    case LimeReport::CallbackInfo::IsEmpty:
//        data = !ds->first();
//        break;
//    case LimeReport::CallbackInfo::HasNext:
//        data = ds->next();
//        ds->previous();
//        break;
//    case LimeReport::CallbackInfo::ColumnHeaderData:
//        if (info.index < ds->record().count())
//            data = ds->record().fieldName(info.index);
//        break;
//    case LimeReport::CallbackInfo::ColumnData:
//        data = ds->value(ds->record().indexOf(info.columnName));
//        break;
//    default: break;
//    }
//}




