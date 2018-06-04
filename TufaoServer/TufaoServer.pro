
CONFIG += TUFAO C++11

HEADERS += \
    myserver.h \
    myserverhandle.h

SOURCES += \
    myserver.cpp \
    main.cpp \
    myserverhandle.cpp

QT += sql network

LIBS += -ltufao1
