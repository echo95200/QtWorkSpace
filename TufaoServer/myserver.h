#ifndef MYSERVER_H
#define MYSERVER_H

#include <QObject>
#include <tufao-1/Tufao/HttpServer>
#include <tufao-1/Tufao/HttpServerRequest>
#include <tufao-1/Tufao/HttpServerResponse>

class MyServer : public QObject
{
    Q_OBJECT
public:
    explicit MyServer(QObject *parent = nullptr);
    Tufao::HttpServer* server;

signals:

public slots:

    void slotRequestReady(Tufao::HttpServerRequest&,Tufao::HttpServerResponse&);
};

#endif // MYSERVER_H
