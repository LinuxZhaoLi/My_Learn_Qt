#include <QCoreApplication>
#include <iostream>
#include <QDebug>
#include <QJsonObject>
#include <QJsonDocument>

void QMapToJson()
{
    QMap<QString,QVariant> mapData = QMap<QString,QVariant>(); // 定义一个map
    mapData.insert("id","30001");  // 插入数据
    mapData.insert("number","189053056");
    mapData.insert("name","Json");

    QJsonDocument doc = QJsonDocument::fromVariant(QVariant(mapData)); // 转化成documnet对象
    QByteArray bJson = doc.toJson();
    QString sJson = QString(bJson); //转化为字符串
    qDebug()<<sJson<<endl;

    QByteArray bsJson = sJson.toUtf8();   // 字符串转化为字节数组
    QJsonObject jobj = QJsonObject(QJsonDocument::fromJson(bsJson).object()); // 字节数组转化为Json对象
    //    QJsonObject nobj = QJsonObject(QJsonDocument::fromJson(bsJson).object());

    qDebug()<<jobj.take("id").toString()<<endl
           <<jobj.take("number").toString()<<endl
          <<jobj.take("name").toString()<<endl;

}

void JsonToMap(){
    QJsonObject json; // 定义json对象
    json.insert("id","3000");
    json.insert("number","88888");
    json.insert("name","Json");

    QJsonDocument document;  // 定义一个文件对象
    document.setObject(json); // 设置json对象
    // 将qjsonddocument转换为提供格式的UTF-8编码JSON文档。
    // 将紧凑输出定义如下：
    QByteArray byteArray = document.toJson(QJsonDocument::Compact);
    QString strJson(byteArray); // 转化成字符串
    qDebug()<<strJson<<endl;
    QVariantMap map = json.toVariantMap();
    int num = map.size();
    qDebug()<<"元素个数"
           <<num
          <<endl;

    QMap<QString,QVariant>::const_iterator iter = map.constBegin();
    while(iter != map.constEnd())
    {
        qDebug()<<"key:" <<iter.key()<<" value"<<iter.value();
        ++iter;
    }

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
 QMapToJson();
 JsonToMap();
    return a.exec();
}
