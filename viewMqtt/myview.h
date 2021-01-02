#ifndef MYVIEW_H
#define MYVIEW_H

#include <QObject>
#include <QQuickView>
class MyView:public QQuickView  // 继承QQuickView
{
    Q_OBJECT
public:
    explicit MyView(); // 构造
    ~MyView();
    
signals:
    void ViewEvent(int id,QVariant &params);  // 信号
public slots:
    void onInvokeQml(QString id,QJsonDocument &vpar); // 通知qml
    
    void init();
};

#endif // MYVIEW_H
