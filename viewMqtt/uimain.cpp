#include "uimain.h"
// 连接 qml 和mqtt
UIMain::UIMain(QObject *parent) : QObject(parent)
{
m_nBeat = 0;
m_mqtt = new myMqttClient();
// 连接mqtt消息到 qml中   该错误的意思是类'myMqttClient'不能访问类'QObject'。
// ，需要在定义派生类myMqttClient的后面加个public
connect(m_mqtt,&myMqttClient::evtMQCmdView1,&m_view1,&MyView::onInvokeQml);
connect(m_mqtt,&myMqttClient::evtMQCmdView2,&m_view2,&MyView::onInvokeQml);
connect(&m_tBeat,SIGNAL(timeout()),this,SLOT(onBeat()));
m_tBeat.start(1000);
}

UIMain::~UIMain()
{
    
}
// 开启界面
int UIMain::startApp()
{
    // (1) 配置界面
    initConfig();
    //  （2） 初始化配置
    // （3） 初始化mqtt
    return 1;
}

int UIMain::stopApp()
{
    return 1;

}

int UIMain::initConfig()
{
    return 1;

}

int UIMain::initView()
{
    return 1;

}

int UIMain::initMq()
{
    return 1;

}

void UIMain::onBeat()
{

}


