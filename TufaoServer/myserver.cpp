#include "myserver.h"

#include <QDebug>

MyServer::MyServer(QObject *parent) : QObject(parent)
{
    server = new Tufao::HttpServer;

    if(server->listen(QHostAddress::Any,8082))
    {
        qDebug() << "Listen to 8080 ok";
    }
    else
    {
        qDebug() << "Listen error at 8080";
    }

    connect(server,&Tufao::HttpServer::requestReady,this,&MyServer::slotRequestReady);
}

void MyServer::slotRequestReady(Tufao::HttpServerRequest &req, Tufao::HttpServerResponse &res)
{
    res.writeHead(Tufao::HttpResponseStatus::OK);
    res.write("Hello world\n");
    res.write("Body of communication\n");
    res.write("The first web\n");
    res.end("This is the end of this message\n");
}
