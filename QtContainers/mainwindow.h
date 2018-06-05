#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDate>

struct Movie
{
    int id;
    QString title;
    QDate releaseDate;
};


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    Movie movie;

private:
    Ui::MainWindow *ui;


};

#endif // MAINWINDOW_H
