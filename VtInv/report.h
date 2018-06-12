#ifndef REPORT_H
#define REPORT_H

#include <QMainWindow>

#include <LimeReport>
#include <QProgressDialog>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQueryModel>
#include <QFile>
#include "lrreportengine.h"

namespace Ui {
class Report;
}

class Report : public QMainWindow
{
    Q_OBJECT

public:
    explicit Report(QWidget *parent = 0);
    ~Report();

    void setDatabase(QString invoiceNumber);
    bool initDatabase();

private slots:
    void on_pushButtonPreview_clicked();

    void on_pushButton_clicked();

    // copy from limereport demo1
    void renderStarted();
    void renderPageFinished(int renderedPageCount);
    void renderFinished();

private:
    Ui::Report *ui;

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
    QString databaseDriveName;
    QString databaseUsername;
    QString databasePassword;
    int databasePort;
    QString databaseHostName;
    QSettings *configIni;
};

#endif // REPORT_H
