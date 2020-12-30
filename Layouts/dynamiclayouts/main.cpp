#include <QApplication>

#include "dialog.h"
// 动态布局
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Dialog dialog;
    dialog.show();
    return app.exec();
}
