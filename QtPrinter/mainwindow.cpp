#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "QtRptProject/QtRPT/qtrpt.h"
#include <QDir>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //operation = new bdOperation();

    ui->tableWidget->setRowCount(1);
    ui->tableWidget->setColumnCount(12);
    QStringList header;
    header.append("ID");
    header.append("TICKET_ID");
    header.append("COMPANY");
    header.append("ADDRESS");
    header.append("POSTCODE");
    header.append("CITY");
    header.append("COUNTRY");
    header.append("SIRET");
    header.append("NUM_TVA");
    header.append("INVOICE_NUM");
    header.append("CUS_CNT");
    header.append("OPER_DATETIME");

    ui->tableWidget->setHorizontalHeaderLabels(header);
    ui->tableWidget->show();
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
    //bdOperation db;
    operation.initDB();
    //QString number = "20180329010001";
    QString number = ui->lineEditFacture->text();
    operation.selectInfo(number);

    ui->tableWidget->setItem(0,0,new QTableWidgetItem(operation.ID));
    ui->tableWidget->setItem(0,1,new QTableWidgetItem(operation.TICKET_ID));
    ui->tableWidget->setItem(0,2,new QTableWidgetItem(operation.COMPANY));
    ui->tableWidget->setItem(0,3,new QTableWidgetItem(operation.ADDRESS));
    ui->tableWidget->setItem(0,4,new QTableWidgetItem(operation.POSTCODE));
    ui->tableWidget->setItem(0,5,new QTableWidgetItem(operation.CITY));
    ui->tableWidget->setItem(0,6,new QTableWidgetItem(operation.COUNTRY));
    ui->tableWidget->setItem(0,7,new QTableWidgetItem(operation.SIRET));
    ui->tableWidget->setItem(0,8,new QTableWidgetItem(operation.NUM_TVA));
    ui->tableWidget->setItem(0,9,new QTableWidgetItem(operation.INVOICE_NUM));
    ui->tableWidget->setItem(0,10,new QTableWidgetItem(operation.CUS_CNT));
    ui->tableWidget->setItem(0,11,new QTableWidgetItem(operation.OPER_DATETIME));

    QtRPT *report = new QtRPT(this);
    QString xmlPath = QCoreApplication::applicationDirPath() + QDir::separator() + "example1.xml";
    qDebug() << xmlPath;

    report->loadReport("/home/echo/QtWorkspace/QtPrinter/example1.xml");
    report->recordCount.append(ui->tableWidget->rowCount());

    connect(report,&QtRPT::setValue,[&](const int recNo,
            const QString paramName, QVariant &paramValue,
            const int reportPage){
        (void) reportPage;
        if(paramName == "ID"){
            paramValue = ui->tableWidget->item(recNo,0)->text();
        }
        if(paramName == "TICKET_ID"){
            paramValue = ui->tableWidget->item(recNo,1)->text();
        }
        if(paramName == "COMPANY"){
            paramValue = ui->tableWidget->item(recNo,2)->text();
        }
        if(paramName == "ADDRESS"){
            paramValue = ui->tableWidget->item(recNo,3)->text();
        }
        if(paramName == "POSTCODE"){
            paramValue = ui->tableWidget->item(recNo,4)->text();
        }
        if(paramName == "CITY"){
            paramValue = ui->tableWidget->item(recNo,5)->text();
        }
        if(paramName == "COUNTRY"){
            paramValue = ui->tableWidget->item(recNo,6)->text();
        }
        if(paramName == "SIRET"){
            paramValue = ui->tableWidget->item(recNo,7)->text();
        }
        if(paramName == "NUM_TVA"){
            paramValue = ui->tableWidget->item(recNo,8)->text();
        }
        if(paramName == "INVOICE_NUM"){
            paramValue = ui->tableWidget->item(recNo,9)->text();
        }

    });
    report->printExec();

}
