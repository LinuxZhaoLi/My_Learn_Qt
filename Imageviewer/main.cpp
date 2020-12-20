#include <QApplication>
#include <QCoreApplication>
//QCommandLineParser类提供了一种处理命令行选项的方法。
#include <QCommandLineParser>
#include <QDebug>
#include "imageviewer.h"  // 继承 QMainWindow

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QGuiApplication::setApplicationDisplayName(ImageViewer::tr("Image Viewer"));  // 设置窗口变体
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
/*
#include <QDebug>
int main(int argc, char *argv[])
{

    QCoreApplication app(argc,argv);
    QCoreApplication::setApplicationName("my-copy-program");
    QCoreApplication::setApplicationVersion("1.0");

    QCommandLineParser parse;
    parse.setApplicationDescription("Test helper"); // 设置helpText（）显示的应用程序说明
    parse.addHelpOption();
    parse.addVersionOption();

    //通过查询安装的消息文件，返回sourceText的翻译文本。消息文件被搜索的顺序是从最近安装的开始到最先安装的。
    //QObject::tr()和QObject::trUtf8()提供了更方便的这种功能。
    parse.addPositionalArgument("source",QCoreApplication::translate("main","Source file to copy"));
    parse.addPositionalArgument("destination",QCoreApplication::translate("main","Destination directory"));

    QCommandLineOption showProgressOption("p",QCoreApplication::translate("main","show progress during copy"));
    parse.addOption(showProgressOption); // 添加操作

    //具有多个名称的布尔选项
    QCommandLineOption forceOption(QStringList()<< "f" <<"force", QCoreApplication::translate("main","Overwrite existing files"));
    parse.addOption(forceOption);

    QCommandLineOption targetDirectoryOption(QStringList()<<"t" <<"target-dirctory",
                                             QCoreApplication::translate("main","Copy all source file into <directory>"),
                                             QCoreApplication::translate("main","directory"));
    parse.addOption(targetDirectoryOption);

    parse.process(app);
    const QStringList args = parse.positionalArguments();

    bool showProgress = parse.isSet(showProgressOption);
    bool force = parse.isSet(forceOption);
    QString targetDir = parse.value(targetDirectoryOption);


    qDebug()<<args;
    qDebug()<<"showProgress: "<< showProgress;
    qDebug()<<"force: "<< force;
    qDebug()<<"targetDir: "<< targetDir;

("filename")
showProgress:  true
force:  true
targetDir:  "dir"


    return app.exec();
}
*/
