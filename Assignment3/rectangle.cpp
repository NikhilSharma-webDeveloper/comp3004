#include "rectangle.h"

Rectangle::Rectangle(qreal w, qreal h,int x,int y, QGraphicsObject *parent) : QGraphicsObject(parent), width(w), height(h),x(x),y(y), brushColor(Qt::transparent)
{

}

QRectF Rectangle::boundingRect() const{
    return QRectF(-width/2,-height/2,width,height);
}

void Rectangle::paint(QPainter *painter, [[maybe_unused]] const QStyleOptionGraphicsItem *option, [[maybe_unused]] QWidget *widget)
{

    Q_UNUSED(option);
    Q_UNUSED(widget);
    // Draw cuboid using QPainter
    painter->setPen(Qt::black);
    painter->setBrush(brushColor);
    painter->drawRect(-width / 2, -height / 2, width, height);

}


// Method to set the background color of the rectangle
void Rectangle::setBackgroundColor(const QColor &color) {
    brushColor = color; // Set the brush color directly
    update(); // Call update to trigger repainting of the item with the new brush color
}
