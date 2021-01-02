#ifndef UIMAIN_H
#define UIMAIN_H

#include <QObject>
#include <QTimer>
#include "myView.h"
#include "mymqttclient.h"

class UIMain : public QObject
{
    Q_OBJECT
public:
    explicit UIMain(QObject *parent = 0);
    ~UIMain();
public:
    int startApp();
    int stopApp();
    int initConfig();
    int initView();
    int initMq();

signals:

public slots:
    void onBeat();


public:
    MyView  m_view1;
    MyView m_view2;
    myMqttClient *m_mqtt;
    QTimer   m_tBeat;
    int m_nBeat;
};

#endif // UIMAIN_H
