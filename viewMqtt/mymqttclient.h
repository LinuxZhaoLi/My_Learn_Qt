#ifndef MYMQTTCLIENT_H
#define MYMQTTCLIENT_H
#include "Utiles/device/abstractmqtt.h"
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
#include <QTimer>
#include <QObject>

class myMqttClient:public AbstractMQtt
{
    Q_OBJECT
public:
    myMqttClient(); // 构造函数
public:
    QString map2str(QVariantMap &map);

signals:
        void evtMQCmdView1(QString command, QJsonDocument &jsDoc);
        void evtMQCmdView2(QString command, QJsonDocument &jsDoc);


public slots:
    void onParserMQ(const QMQTT::Message& message); // 解析接受的消息
    void onEvtBtn(const QString &topic, const QJsonDocument &jsDocAsk); //接收界面按键消息，转换成MQtt消息发送出去


};

#endif // MYMQTTCLIENT_H
