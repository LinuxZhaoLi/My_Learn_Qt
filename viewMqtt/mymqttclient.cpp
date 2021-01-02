#include "mymqttclient.h"

myMqttClient::myMqttClient()
{

}

QString myMqttClient::map2str(QVariantMap &map)
{
    Q_UNUSED(map);
    return QString();
}
// 接受信息
void myMqttClient::onParserMQ(const QMQTT::Message& message)
{
    QString str = QString::fromUtf8(message.payload());  // 将字节数组转化为 字符串
    QJsonParseError jsErr;  // 错误对象
    //The QJsonDocument class provides a way to read and write JSON documents.
    QJsonDocument doc = QJsonDocument::fromJson(str.toUtf8(),&jsErr);  // 将字符串转化为json对象
    if(jsErr.error != QJsonParseError::NoError)
    {

        return ;
    }
    QJsonObject jsObjectRoot = doc.object(); // 将json文档类型转化为json对象
    QString name = jsObjectRoot["name"].toString();
    QString command = jsObjectRoot["name"].toString();

    if(name == "name1")  //区分界面 ，分发消息
    {
        emit evtMQCmdView1(command, doc);  // 发向界面

    }else if(name == "name2")
    {
        emit evtMQCmdView2(command, doc);  // 发向界面


    }else {

        qDebug()<<"unAccept";
    }

}
// 发送信息
void myMqttClient::onEvtBtn(const QString &topic, const QJsonDocument &jsDocAsk)
{
//   QString cmd = QString("%1%2").arg(1,2);
//   QJsonObject jsObjAsk;
//   QJsonObject jsObjPar;
//   QJsonDocument jsDocAsk;

//   jsObjAsk["src"] = QString("src");
//   jsObjAsk["dst"] = QString("dst");
//   jsObjAsk["cmd"] = cmd;

//   jsObjAsk["name"] = QString("myname");
//   jsObjAsk["command"] = QString("%1").arg(1);

//   jsDocAsk.setObject(jsObjAsk);  // 将json对象转化为 doc 对象
   QString str = QString(jsDocAsk.toJson());
   // （1） 发送主题 （2） 发送信息
   QMQTT::Message message(0, topic, str.toUtf8());
   sendMQ(message);
}
