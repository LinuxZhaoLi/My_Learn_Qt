QT += gui core network sql quick
greaterThan(QT_MAJOR_VERSION,4): QT += widgets
QT += quickwidgets
INCLUDEPATH += $$UTILS_HOME
SOURCES += \
    $$PWD/device/abstractmqtt.cpp
HEADERS += \
    $$PWD/device/mqtt/qmqtt.h \
    $$PWD/device/abstractmqtt.h
message('PWD=' $$PWD/lib/)
LIBS += -L$$PWD/lib/ -lqmqtt
INCLUDEPATH += $$PWD
DEPENDPATH += $$PWD
