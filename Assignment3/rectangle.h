#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <QGraphicsItem>
#include <QPainter>
#include <QObject>
#include <QPointF>

class Rectangle : public QGraphicsObject{
public:
    Rectangle(qreal w, qreal h,int x, int y, QGraphicsObject *parent=nullptr);
    QRectF boundingRect() const override;
    void paint(QPainter *painter, [[maybe_unused]] const QStyleOptionGraphicsItem *option, [[maybe_unused]] QWidget *widget= nullptr) override;


private:
    qreal width;
    qreal height;
    int x;
    int y;
};

#endif // RECTANGLE_H
