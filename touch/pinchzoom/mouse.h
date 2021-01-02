
#ifndef MOUSE_H
#define MOUSE_H

#include <QGraphicsObject>

//! [0]
class Mouse : public QGraphicsObject
{
    Q_OBJECT

public:
    Mouse();

    QRectF boundingRect() const Q_DECL_OVERRIDE;
    QPainterPath shape() const Q_DECL_OVERRIDE;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
               QWidget *widget) Q_DECL_OVERRIDE;

protected:
    void timerEvent(QTimerEvent *event) Q_DECL_OVERRIDE;

private:
    qreal angle;
    qreal speed;
    qreal mouseEyeDirection;
    QColor color;
};
//! [0]

#endif
