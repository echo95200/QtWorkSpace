#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <LimeReport>
#include <QProgressDialog>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQueryModel>
#include <QFile>
#include "lrreportengine.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void setDatabase(QString invNum);
    bool initDatabase();

private slots:
    void on_pushButton_clicked();

    // copy from limereport demo1
    void renderStarted();
    void renderPageFinished(int renderedPageCount);
    void renderFinished();
    void on_pushButtonPreview_clicked();

private:
    Ui::MainWindow *ui;

    LimeReport::ReportEngine *report;
    QProgressDialog* m_progressDialog;
    int m_currentPage;
    QSqlDatabase m_db;
    int m_currentMasterRecord;
    QVector<QString> m_childData;

    int m_currentCustomerRecord;
    int m_currentOrderRecord;
    QSqlQuery* m_customers;
    QSqlQuery* m_orders;

    QString databaseFilePath;
    QSettings *configIni;
};

#endif // MAINWINDOW_H
