QT += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = UITest
TEMPLATE = app
CONFIG += c++11
SOURCES += \
        main.cpp \
    myloginview.cpp

FORMS += \
    login.ui

RESOURCES += \
    images.qrc

HEADERS += \
    myloginview.h

