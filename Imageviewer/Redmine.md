这是一个qt例子：
功能： 图片浏览，图片打印，图片缩放
（1）QCommandLineParser 命令行参数解析类

Usage: E:\My_Learn_Qt\trunk\Imageviewer\debug\imageviewer.exe [options] source destination
Test helper

Options:
  -?, -h, --help                     Displays this help.
  -v, --version                      Displays version information.
  -p                                 show progress during copy
  -f, --force                        Overwrite existing files
  -t, --target-dirctory <directory>  Copy all source file into <directory>

Arguments:
  source                             Source file to copy
  destination                        Destination directory

（2）界面使用中文：
方法1； button->setText(QApplication::translate("","你好",0,QApplication::UnicodeUTF8))；
方法2： 主函数： QTextCodec::setCodecForTr(QTextCodec::codeForName("urtf8"));
	         QTextCodec::setCodecForCStrings(QTextCodec::codeForName("utf8"));
button->setText(QObject::tr("你好"))；

方法3： 
button->setText(QObject::trUtf8("你好"));

（3） 使用QPrinter 类
（4） QScrollArea类提供另一个小部件上的滚动视图
（5） QImageReader
（6） 字符串拼接：
 const QString message = tr("Opened \"%1\", %2x%3,Depth : %4)
 .arg(QDir::toNativeSepaparators(filename).arg(image.width()).arg(image.height()
 .arg(image.depth)));
 （7）QPixmap类是一种可以用作绘制设备的屏幕外图像表示
 （8）QPrintDialog类提供一个用于指定打印机配置的对话框。
 （9）qTimeData类为记录有关其MIME类型的信息的数据提供了一个容器。
 （10） 强制类型转化：
    const QImage image = qvariant_cast<QImage>(mimeData->imageData());


