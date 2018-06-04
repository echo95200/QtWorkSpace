#include "bdoperation.h"

#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlRecord>
#include <QSqlError>

bdOperation::bdOperation()
{

}

bool bdOperation::initDB()
{
    if(QSqlDatabase::contains("qt_sql_default_connection"))
        db = QSqlDatabase::database("qt_sql_default_connection");
    else
    {
        db = QSqlDatabase::addDatabase("QIBASE");
        db.setDatabaseName("~/ventap.fdb");
        db.setUserName("SYSDBA");
        db.setPassword("masterkey");
    }

    bool flag = true;

    if(db.open())
    {
        qDebug() << "ok";
    }
    else
    {
        qDebug() << "The database does not exist!";
        flag = false;
    }
    return flag;
}

void bdOperation::selectInfo(QString num)
{
    QString str = "select * from T_INVOICE i "
                  "inner join T_TICKET t on i.TICKET_ID = t.ID "
                  "where i.INVOICE_NUM = ";
    str.append(num);
    QSqlQuery query = QSqlQuery(str);

    QString result = "";

    if(!query.exec())
    {
        QString err = query.lastError().text();
        qDebug () <<err;
    }
    else
    {
        while (query.next())
        {
            QSqlRecord record = query.record();
            //result.append(record.value(1).toString());
            //qDebug() <<result;
            this->ID = record.value(0).toString();
            this->TICKET_ID = record.value(1).toString();
            this->COMPANY = record.value(2).toString();
            this->ADDRESS = record.value(3).toString();
            this->POSTCODE = record.value(4).toString();
            this->CITY = record.value(5).toString();
            this->COUNTRY = record.value(6).toString();
            this->SIRET = record.value(7).toString();
            this->NUM_TVA = record.value(8).toString();
            this->INVOICE_NUM = record.value(9).toString();
            this->CUS_CNT = record.value(10).toString();
            this->OPER_DATETIME = record.value(11).toString();
        }

        db.close();
    }
    //QMessageBox::information(NULL,"",result);
}
