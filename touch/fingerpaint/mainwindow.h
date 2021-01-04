
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QList>  // 容器
#include <QMainWindow>

class ScribbleArea; // 涂鸦区域

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow();

protected:
    void closeEvent(QCloseEvent *event) Q_DECL_OVERRIDE;  // 关闭时间，重写 QCloseEvent类包含描述关闭事件的参数。

private slots:
    void open();
    void save();
    void about();

private:
    void createActions(); // 创建动作
    void createMenus();  // 创建菜单
    bool maybeSave();  // 是否保存
    bool saveFile(const QByteArray &fileFormat);  // 保存文件

    ScribbleArea *scribbleArea;  // 涂鸦区域

    QMenu *saveAsMenu;
    QMenu *fileMenu;
    QMenu *optionMenu;
    QMenu *helpMenu;

    QAction *openAct;
    QList<QAction *> saveAsActs;
    QAction *exitAct;
    QAction *printAct;
    QAction *clearScreenAct;
    QAction *aboutAct;
    QAction *aboutQtAct;
};
//! [0]

#endif
