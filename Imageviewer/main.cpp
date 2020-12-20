#include <QApplication>
//QCommandLineParser类提供了一种处理命令行选项的方法。
#include <QCommandLineParser>
#include <QDebug>
#include "imageviewer.h"  // 继承 QMainWindow

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QGuiApplication::setApplicationDisplayName(ImageViewer::tr("Image Viewer"));
    // 返回sourceText的翻译版本，可选地基于消歧字符串和包含复数的字符串的n值；否则，如果没有合适的翻译字符串，则返回QString:：fromUtf8（sourceText）。
    QCommandLineParser commandLineParser;  // 定义一个对象
    commandLineParser.addHelpOption();
    commandLineParser.addPositionalArgument(ImageViewer::tr("[file]"), ImageViewer::tr("Image file to open."));
    // 这是一个重载函数。命令行是从QCoreApplication实例应用程序获得的。
    commandLineParser.process(QCoreApplication::arguments());
    qDebug()<< QCoreApplication::arguments();
    ImageViewer imageViewer;
    if (!commandLineParser.positionalArguments().isEmpty()
        && !imageViewer.loadFile(commandLineParser.positionalArguments().front())) {
        return -1;
    }
    imageViewer.show();
    return app.exec();
}
