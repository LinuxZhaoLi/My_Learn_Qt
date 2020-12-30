#include <QtWidgets>
#include "dialog.h"


/*
构造函数： 1 创建菜单 2 创建一个水平布局 2 创建一个分组
*/
Dialog::Dialog()
{
    createMenu();
    createHorizontalGroupBox();
    createGridGroupBox();
    createFormGroupBox();

    bigEditor = new QTextEdit;
    bigEditor->setPlainText(tr("This widget takes up all the remaining space "
                               "in the top-level layout."));
    buttonBox = new QDialogButtonBox(QDialogButtonBox::Ok
                                     | QDialogButtonBox::Cancel);
    connect(buttonBox, SIGNAL(accepted()), this, SLOT(accept()));
    connect(buttonBox, SIGNAL(rejected()), this, SLOT(reject()));

    QVBoxLayout *mainLayout = new QVBoxLayout; // 垂直布局

    mainLayout->setMenuBar(menuBar);  // 添加窗口
    mainLayout->addWidget(horizontalGroupBox);
    mainLayout->addWidget(gridGroupBox);
    mainLayout->addWidget(formGroupBox);
    mainLayout->addWidget(bigEditor);
    mainLayout->addWidget(buttonBox);
    setLayout(mainLayout); // 布局

    setWindowTitle(tr("Basic Layouts"));  // 设置标题
}

void Dialog::createMenu()
{
    menuBar = new QMenuBar;  // 创建一个菜单栏
    fileMenu = new QMenu(tr("&File"), this);  // 创建一个菜单
    exitAction = fileMenu->addAction(tr("E&xit"));  // 添加一个操作
    menuBar->addMenu(fileMenu);  //
    connect(exitAction, SIGNAL(triggered()), this, SLOT(accept()));
}

void Dialog::createHorizontalGroupBox()
{
    horizontalGroupBox = new QGroupBox(tr("Horizontal layout"));  // 水平布局  全局
    QHBoxLayout *layout = new QHBoxLayout;   // 局部

    for (int i = 0; i < NumButtons; ++i) {
        buttons[i] = new QPushButton(tr("Button %1").arg(i + 1));
        layout->addWidget(buttons[i]);
    }
    horizontalGroupBox->setLayout(layout);
}
/*
将给定的小部件添加到行、列的单元格网格中。默认情况下，左上角的位置是（0，0）。
对齐由对齐指定。默认对齐方式为0，这意味着小部件将填充整个单元格。

*/
void Dialog::createGridGroupBox()
{
    gridGroupBox = new QGroupBox(tr("Grid layout"));
    QGridLayout *layout = new QGridLayout;

    for (int i = 0; i < NumGridRows; ++i) {
        labels[i] = new QLabel(tr("Line %1:").arg(i + 1));
        lineEdits[i] = new QLineEdit;
        layout->addWidget(labels[i], i + 1, 0);// 行列
        layout->addWidget(lineEdits[i], i + 1, 1);
    }

    smallEditor = new QTextEdit;
    smallEditor->setPlainText(tr("This widget takes up about two thirds of the "
                                 "grid layout."));
    //void QGridLayout::addWidget(QWidget *widget, int row, int column, Qt::Alignment alignment = Qt::Alignment())
    layout->addWidget(smallEditor, 0, 2, 4, 1);
//void QGridLayout::setColumnStretch(int column, int stretch)
    layout->setColumnStretch(1, 10);  // 添加一个弹簧
    layout->setColumnStretch(2, 20);
    gridGroupBox->setLayout(layout);
}

void Dialog::createFormGroupBox()
{
    formGroupBox = new QGroupBox(tr("Form layout"));
    QFormLayout *layout = new QFormLayout;
    layout->addRow(new QLabel(tr("Line 1:")), new QLineEdit);
    layout->addRow(new QLabel(tr("Line 2, long text:")), new QComboBox);
    layout->addRow(new QLabel(tr("Line 3:")), new QSpinBox);
    formGroupBox->setLayout(layout);
}
