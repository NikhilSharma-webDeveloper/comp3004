#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <QGraphicsItem>
#include <QPainter>
#include <QObject>
#include <QPointF>

class Rectangle : public QGraphicsObject{
public:
    Rectangle(qreal w, qreal h,int x, int y,int number=0,int floor=0, QGraphicsObject *parent=nullptr);
    QRectF boundingRect() const override;
    void paint(QPainter *painter, [[maybe_unused]] const QStyleOptionGraphicsItem *option, [[maybe_unused]] QWidget *widget= nullptr) override;
    void setBackgroundColor(const QColor &color );
    int getElevatorNumber();
    qreal getHeight();
    int getXPos();
    void setFloor(int);
    int getFloor();
    bool isFree();
    void setFree(bool=true);

private:
    qreal width;
    qreal height;
    int x;
    int y;
    int floor;
    int number;
    bool free;
    QColor brushColor;
};

#endif // RECTANGLE_H
