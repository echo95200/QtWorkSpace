#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "bdoperation.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButtonSetting_clicked();

    void on_pushButtonPrint_clicked();

private:
    Ui::MainWindow *ui;

    bdOperation operation;
};

#endif // MAINWINDOW_H
