#include "myview.h"
#include <QQuickItem>
MyView::MyView()
{

}

MyView::~MyView()
{

}
// 传送信息到qml
void MyView::onInvokeQml(QString id, QJsonDocument &vpar)
{
    Q_UNUSED(vpar);
    const QVariant data;// = vpar.toVariant();
    QVariant var;
    QQuickItem *rootItem = rootObject(); //获取根元素
    QMetaObject::invokeMethod((QObject *)rootItem,
                              "handView",
                              Q_RETURN_ARG(QVariant, var),
                              Q_ARG(QVariant,id),
                              Q_ARG(QVariant, QVariant(data)));

}

void MyView::init()
{
    QQuickItem *rootItem = rootObject();  // 获取根对象
    // 绑定qml信号，传递信号到mqtt
    connect((QObject*)rootItem,SIGNAL(evtQml(int,QVariant)),this,SIGNAL(ViewEvent(int,QVariant)));
}
