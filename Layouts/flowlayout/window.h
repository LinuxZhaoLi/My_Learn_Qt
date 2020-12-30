#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>

QT_BEGIN_NAMESPACE
class QLabel;
QT_END_NAMESPACE
//! [0]
class Window : public QWidget
{
    Q_OBJECT

public:
    Window();
};
//! [0]

#endif // WINDOW_H
