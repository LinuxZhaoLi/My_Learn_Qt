TEMPLATE=subdirs这是固定写法,声明是做工程集目录的.SUBDIRS是指明目录中有哪些项,
（1） QLayout类是几何图形管理器的基类。
（2）QRect类使用整数精度定义平面中的矩形。
（3）继承QLayout  , 提供添加，获取等方法。
 (4)QTextBrowser类提供了一个具有超文本导航功能的富文本浏览器
（5）QLayoutItem类提供了QLayout操作的抽象项。
（6）QSize类使用整数点精度定义二维对象的大小。
（7）QDialogButtonBox类是一个小部件，它以适合当前小部件样式的布局显示按钮。

obj a;
std::string nm ="book_1";
//由于可以隐式转换，所以可以下面这样使用
int result = a.CompareTo(nm);
　　这段程序使用一个string类型对象作为实参传给obj的CompareTo函数。这个函数本来是需要一个obj对象作为实参。现在编译器使用string nm来构造并初始化一个
 obj对象，新生成的临时的things对象被传递给CompareTo函数，并在离开这段函数后被析构。

（1） borderlayout
窗口继承QWidget,
方法创建： QLabel
采用自定义布局器。布局界面。
（2）怎么实现一个动态的布局？
 	队列


