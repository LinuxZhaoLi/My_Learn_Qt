#include "borderlayout.h"
#include "window.h"
#include <QTextBrowser>
#include <QLabel>

Window::Window()
{
    QTextBrowser *centralWidget = new QTextBrowser; // 创建一个浏览框
    centralWidget->setPlainText(tr("Central widget")); // 设置内容

    BorderLayout *layout = new BorderLayout; // 布局
    layout->addWidget(centralWidget, BorderLayout::Center);
    layout->addWidget(createLabel("North"), BorderLayout::North);
    layout->addWidget(createLabel("West"), BorderLayout::West);
    layout->addWidget(createLabel("East 1"), BorderLayout::East);
    layout->addWidget(createLabel("East 2") , BorderLayout::East);
    layout->addWidget(createLabel("South"), BorderLayout::South);
    setLayout(layout);
/*
将此小部件的布局管理器设置为布局。

如果这个小部件上已经安装了布局管理器，那么QWidget将不允许您安装另一个。必须先删除现有的布局管理器（由layout（）返回），然后才能使用新布局调用setLayout（）。

如果layout是另一个小部件上的布局管理器，setLayout（）将重新划分布局并使其成为该小部件的布局管理器。

*/
    setWindowTitle(tr("Border Layout")); // 边缘布局
}

QLabel *Window::createLabel(const QString &text)
{
    QLabel *label = new QLabel(text);  // 创建一个标签，指针。
    label->setFrameStyle(QFrame::Box | QFrame::Raised);

    /*
将框架样式设置为样式。

样式是帧形状和帧阴影样式之间的按位或。请参见主类文档中的框架图片。

框架形状在QFrame:：Shape中给出，阴影样式在QFrame:：shadow中给出。

如果指定的中间线条宽度大于0，则会为凸起或凹陷的Box、HLine和VLine框架绘制一条附加线。当前颜色组的中间色用于绘制中间线。

    */
    return label;
}
