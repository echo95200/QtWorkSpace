#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "QtRptProject/QtRPT/qtrpt.h"
#include <QDir>
#include <QDebug>
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButtonUpdateView,SIGNAL(clicked(bool)),this,SLOT(updatePreview()));
    QString fileName = "/home/echo/QtWorkspace/examples_report/ventap.xml";
    report = new QtRPT(this);
    report->loadReport(fileName);

    QObject::connect(report,SIGNAL(setValue(int,QString,QVariant&,int)),
                     this,SLOT(setValue(int,QString,QVariant&,int)));

    printer = new QPrinter;
    printer->setOutputFormat(QPrinter::PdfFormat);
    printer->setOrientation(QPrinter::Portrait);
    printer->setPageSize(QPrinter::A4);
    printer->setFullPage(true);

    preview = new QPrintPreviewWidget(printer,this);
    QVBoxLayout *layout = new QVBoxLayout();
    layout->addWidget(preview);
    ui->widgetShow->setLayout(layout);
    //ui->widgetShow->layout()->addWidget(preview);
    connect(preview,SIGNAL(paintRequested(QPrinter*)),report,SLOT(printPreview(QPrinter*)));
    preview->show();
    preview->fitInView();

    //updatePreview();

}

void MainWindow::setValue(const int recNo, const QString paramName, QVariant &paramValue, const int reportPage)
{
    qDebug() << "setValue";
}

void MainWindow::updatePreview()
{
    preview->updatePreview();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonSetting_clicked()
{
}

void MainWindow::on_pushButtonPrint_clicked()
{
    QString numberInvoice = ui->lineEditFacture->text();

    QString fileName = "/home/echo/QtWorkspace/examples_report/ventap.xml";
    QtRPT *report16 = new QtRPT(this);
    if(report16->loadReport(fileName) == false)
        qDebug() << "Report file not found";

    QString strSQL = "SELECT T_TICKET.ID,T_TICKET_DETAIL.ID AS TDID,T_TICKET_DETAIL.PRD_ORG "
            "FROM T_TICKET "
            "INNER JOIN T_TICKET_DETAIL ON T_TICKET.ID = T_TICKET_DETAIL.TICKET_ID "
            "WHERE T_TICKET.ID = ";
    strSQL.append(numberInvoice);
    report16->setUserSqlConnection(0,"DB1","QIBASE",
                                   "/home/echo/ventap.fdb",
                                   "","SYSDBA","masterkey",0,"",strSQL);
    report16->printExec();

}
