#ifndef ABSTRACTMQTT_H
#define ABSTRACTMQTT_H

#include <QObject>
#include <QTimer>
#include "mqtt/qmqtt.h"
#include "mqtt/qmqtt_client.h"
#include "mqtt/qmqtt_global.h"
#include "mqtt/qmqtt_message.h"
//  （1） 包含  （2） 继承
class AbstractMQtt : public QObject
{
    Q_OBJECT
public:
    explicit AbstractMQtt(QObject *parent = nullptr);
    virtual ~AbstractMQtt();

public:
    void setMQHost(const QHostAddress& host);
    void setMQPort(int port);
    void setMQUsr(QString usr);
    void setMQPwd(const QByteArray& password);
    void setSubTopic(QString sub);
    void connectMQ();
    int sendMQ(const QMQTT::Message& message);
private:
    void QSleep(int ms);
public slots:
    void onStateChange(); // 这些都是自定义的
    void onBrokerConnected();
    void onBrokerDisconnected();
    void onPingResponse();
    virtual void onParserMQ(const QMQTT::Message& message);

public:
    QMQTT::Client m_client;
    int         m_nMQPort;
    QHostAddress     m_strMQHost;
    QString     m_strSub;
    QStringList m_listSub;
    QString     m_strUsr;
    QString     m_strPwd;



};

#endif // ABSTRACTMQTT_H
