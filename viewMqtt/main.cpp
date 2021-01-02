#include <QApplication>
#include "uimain.h"
int main(int argc, char* argv[])
{
    QApplication app(argc,argv);
    UIMain *mainUi = new UIMain;
    mainUi->startApp();

    return app.exec();

}
