#include <QApplication>
#include "myloginview.h"
int main(int argc,char* agrv[])
{
    QApplication app(argc,agrv);

    myLoginView view;
    view.show();
    return app.exec();


}
