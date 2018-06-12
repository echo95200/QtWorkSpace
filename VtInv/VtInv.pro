#-------------------------------------------------
#
# Project created by QtCreator 2018-06-12T14:06:01
#
#-------------------------------------------------

QT       += widgets sql script xml printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += printsupport

TARGET = VtInv
TEMPLATE = lib

DEFINES += VTINV_LIBRARY

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        vtinv.cpp \
    report.cpp

HEADERS += \
        vtinv.h \
        vtinv_global.h \  
    report.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../LibLimeReport/debug/release/ -llimereport
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../LibLimeReport/debug/debug/ -llimereport
else:unix: LIBS += -L$$PWD/../LibLimeReport/debug/ -llimereport

INCLUDEPATH += $$PWD/../LibLimeReport/include
DEPENDPATH += $$PWD/../LibLimeReport/include

FORMS += \
    report.ui
