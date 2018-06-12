#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "vtinv.h"
#include "report.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
//    VtInv* w = new VtInv();
    Report* report = new Report();

    //qDebug() << "aaaaaaaaaaaaaaaaaa";
}
