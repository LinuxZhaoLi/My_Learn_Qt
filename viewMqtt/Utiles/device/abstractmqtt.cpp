#include "abstractmqtt.h"
#include <QDebug>
#include <QTime>
#include <QCoreApplication>

AbstractMQtt::AbstractMQtt(QObject *parent) : QObject(parent)
{
    /*
    void connected();
    void disconnected();
    void error(const QMQTT::ClientError error);
    void subscribed(const QString& topic, const quint8 qos = 0);
    void unsubscribed(const QString& topic);
    void published(const QMQTT::Message& message, quint16 msgid = 0);
    void received(const QMQTT::Message& message);
    void pingresp();

    */
    qDebug()<<"&QMQTT::Client::connected";
    connect(&m_client, &QMQTT::Client::connected, this, &AbstractMQtt::onBrokerConnected);
    qDebug()<<"&QMQTT::Client::disconnected";
    connect(&m_client, &QMQTT::Client::disconnected, this, &AbstractMQtt::onBrokerDisconnected);
    qDebug()<<"&QMQTT::Client::received";
    connect(&m_client, &QMQTT::Client::received, this, &AbstractMQtt::onParserMQ);
    qDebug()<<"&QMQTT::Client::pingresp";
    connect(&m_client, &QMQTT::Client::pingresp, this, &AbstractMQtt::onPingResponse);

}

AbstractMQtt::~AbstractMQtt()
{

}


void AbstractMQtt::onParserMQ(const QMQTT::Message& message)
{
    Q_UNUSED(message);
}



void AbstractMQtt::setMQHost(const QHostAddress& host)
{
    m_strMQHost = host;
    m_client.setHost(host);
}

void AbstractMQtt::setMQPort(int port)
{
    m_nMQPort = port;
    m_client.setPort(port);
}

void AbstractMQtt::setMQUsr(QString usr)
{
    m_strUsr = usr;
    m_client.setUsername(usr);
}

void AbstractMQtt::setMQPwd(const QByteArray& password)
{
    m_strPwd = password;
    m_client.setPassword(password);
}

void AbstractMQtt::setSubTopic(QString sub)
{
    m_listSub<<sub;
}

void AbstractMQtt::connectMQ()
{
    m_client.connectToHost();
}

void AbstractMQtt::onStateChange()
{
//    qDebug()<<"state"<< QString::number(m_client.state());
}

void AbstractMQtt::onBrokerConnected()
{
    qDebug()<<"onBrokerConnected";

    for (int i=0;i<m_listSub.length();i++) {
      m_client.subscribe(m_listSub[i]);
    }

}

void AbstractMQtt::onBrokerDisconnected()
{
    qDebug()<<"onBrokerDisconnected";

    QSleep(1500);//断开时候 重连
    connectMQ();

}

void AbstractMQtt::onPingResponse()
{
    qDebug()<<"onPingResponse";
}

// 直接发布
int AbstractMQtt::sendMQ(const QMQTT::Message& msg)
{
    qint16 nRet=-1;
    nRet = m_client.publish(msg);
    return nRet;
}
// 延时
void AbstractMQtt::QSleep(int ms)
{
    QTime dieTime = QTime::currentTime().addMSecs(ms);
    while( QTime::currentTime() < dieTime ){
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
    }
}


