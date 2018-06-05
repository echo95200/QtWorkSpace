#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    movie.id = 0;
    movie.title = "micmac";

    qDebug() << movie.id << movie.title;
}

MainWindow::~MainWindow()
{
    delete ui;
}
