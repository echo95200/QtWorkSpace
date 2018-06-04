#ifndef BDOPERATION_H
#define BDOPERATION_H

#include <QSqlDatabase>
#include <QDebug>

class bdOperation
{
public:
    bdOperation();

    bool initDB();
    void selectInfo(QString num);

    QString ID;
    QString TICKET_ID;
    QString COMPANY;
    QString ADDRESS;
    QString POSTCODE;
    QString CITY;
    QString COUNTRY;
    QString SIRET;
    QString NUM_TVA;
    QString INVOICE_NUM;
    QString CUS_CNT;
    QString OPER_DATETIME;

private:
    QSqlDatabase db;

};

#endif // BDOPERATION_H
