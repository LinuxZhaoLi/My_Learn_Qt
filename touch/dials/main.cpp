#include <QApplication>  //应用程序
#include <QWidget>
#include <QDial>  // 表盘控制

#include "ui_dials.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    QWidget window; // 定义一个对象
    Ui::Dials dialsUi;  // 定义一个对象
    dialsUi.setupUi(&window);  // 设置父类
    // 定义一个列表， 查找对象  返回此对象的所有子对象，如果没有此类对象，
    //则返回一个空列表。省略name参数将导致所有对象名称都匹配。搜索是递归执行的，除非options指定FindDirectChildrenOnly选项。
    //以下示例显示如何查找名为widgetname的指定parentWidget的子qwidget列表：
    QList<QAbstractSlider *> sliders = window.findChildren<QAbstractSlider *>();
    foreach (QAbstractSlider *slider, sliders)
        slider->setAttribute(Qt::WA_AcceptTouchEvents);
    window.showMaximized();
    return app.exec();
}
