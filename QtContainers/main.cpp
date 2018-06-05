#include "mainwindow.h"
#include <QApplication>

#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    w.movie.id = 2;

    qDebug() << w.movie.id << w.movie.title;

    return a.exec();
}
