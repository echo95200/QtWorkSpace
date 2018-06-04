#include "myserverhandle.h"

#include <QFile>
#include <QDebug>

MyServerHandle::MyServerHandle(QObject *parent) : QObject(parent)
{
    server = new Tufao::HttpServer();

    if(server->listen(QHostAddress::Any,8081))
    {
        qDebug() << "listen ok at 8081";
    }
    else
    {
        qDebug() << "listen error at 8081";
    }

    connect(server,SIGNAL(requestReady(Tufao::HttpServerRequest&,Tufao::HttpServerResponse&)),
            this,SLOT(slotRequestReady(Tufao::HttpServerRequest&,Tufao::HttpServerResponse&)));
}

void MyServerHandle::handlePostData(Tufao::HttpServerRequest &request, Tufao::HttpServerResponse &response)
{
    QFile file("/home/echo/b.txt");
    file.open(QFile::WriteOnly);
    QByteArray data = request.readBody();
    file.write(data);
    file.close();

    qDebug() << request.readBody();

    response.writeHead(Tufao::HttpResponseStatus::OK);
    response.write("post data is write ok\n");
}

void MyServerHandle::slotRequestReady(Tufao::HttpServerRequest &request, Tufao::HttpServerResponse &response)
{
    if(request.method() == "POST")
    {
        connect(&request,&Tufao::HttpServerRequest::end,[&](){handlePostData(request,response);});
    }
    else
    {
        response.writeHead(Tufao::HttpResponseStatus::OK);
        response.end("i need post method\n");
    }
}















