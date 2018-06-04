#include <QCoreApplication>

#include <myserver.h>
#include <myserverhandle.h>

int main(int argc,char* argv[])
{
    QCoreApplication app(argc,argv);
    //MyServer* s = new MyServer();

    MyServerHandle *sPost = new MyServerHandle();

    app.exec();
}

