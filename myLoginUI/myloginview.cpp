#include "myloginview.h"
#include "ui_login.h"
#include <QDebug>
myLoginView::myLoginView(QWidget *parent) :
    QWidget(parent),
    loginView(new Ui::Form)
{
    QLabel *selfBgLabel = new QLabel(this);
    selfBgLabel->setScaledContents(true);
    QPixmap im(":/image/bg.jpg");
    selfBgLabel->setPixmap(im);

loginView->setupUi(this);
}
// 账号
void myLoginView::on_lineEdit_2_textChanged(const QString &arg1)
{
    qDebug()<< arg1;
}
// 密码
void myLoginView::on_lineEdit_textChanged(const QString &arg1)
{
    qDebug()<< arg1;
}
// 登录
void myLoginView::on_pushButton_clicked()
{
//    loginView->setStyleSheet("background:url(:/image/bg.jpg)");
    qDebug()<<loginView->frame->styleSheet();
}
