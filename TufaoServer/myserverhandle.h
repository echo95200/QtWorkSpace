#ifndef MYSERVERHANDLE_H
#define MYSERVERHANDLE_H

#include <QObject>
#include <tufao-1/Tufao/HttpServer>
#include <tufao-1/Tufao/HttpServerRequest>
#include <tufao-1/Tufao/HttpServerResponse>

class MyServerHandle : public QObject
{
    Q_OBJECT
public:
    explicit MyServerHandle(QObject *parent = nullptr);

    Tufao::HttpServer *server;
    void handlePostData(Tufao::HttpServerRequest&,Tufao::HttpServerResponse&);

signals:

public slots:
    void slotRequestReady(Tufao::HttpServerRequest&,Tufao::HttpServerResponse&);

};

#endif // MYSERVERHANDLE_H
