QT += gui quick
message('QT_MINOR_VERSION=' $$QT_MINOR_VERSION)
message('QT_MAJOR_VERSION=' $$QT_MAJOR_VERSION)
message('QT_PATCH_VERSION=' $$QT_PATCH_VERSION)
message('QT_VERSION=' $$QT_VERSION)

greaterThan(QT_MAJOR_VERSION,4): QT += widgets
TARGET = MYView
TEMPLATE = app

#win32:CONFIG(release, debug|release): LIBS += -L$$PWD/lib/ -lqmqtt
#else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/lib/ -lqmqtt
#else:unix:!macx: LIBS += -L$$PWD/../Utils/lib/ -lqmqtt
UTILS_HOME = ./
message('UTILS_HOME=' $$UTILS_HOME)
include($$UTILS_HOME/Utiles/Utiles.pri)

SOURCES += \
    main.cpp \
    myview.cpp \
    mymqttclient.cpp \
    uimain.cpp

HEADERS += \
    myview.h \
    mymqttclient.h \
    uimain.h


