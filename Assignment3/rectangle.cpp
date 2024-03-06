#include "rectangle.h"

Rectangle::Rectangle(qreal w, qreal h, QGraphicsObject *parent) : QGraphicsObject(parent), width(w), height(h)
{

}

QRectF Rectangle::boundingRect() const{
    return QRectF(-width/2,-height/2,width,height);
}

void Rectangle::paint(QPainter *painter, [[maybe_unused]] const QStyleOptionGraphicsItem *option, [[maybe_unused]] QWidget *widget)
{
    // Draw cuboid using QPainter
    painter->setPen(Qt::black);
    painter->setBrush(Qt::NoBrush);
    painter->drawRect(-width / 2, -height / 2, width, height);
//    painter->drawLine(-width / 2, -m_height / 2, -width / 2 - m_depth / 2, -m_height / 2 - m_depth / 2);
//    painter->drawLine(width / 2, -m_height / 2, width / 2 - m_depth / 2, -m_height / 2 - m_depth / 2);
//    painter->drawLine(width / 2, m_height / 2, width / 2 - m_depth / 2, m_height / 2 - m_depth / 2);
//    painter->drawLine(-width / 2, m_height / 2, -width / 2 - m_depth / 2, m_height / 2 - m_depth / 2);
//    painter->drawLine(-width / 2 - m_depth / 2, -m_height / 2 - m_depth / 2, width / 2 - m_depth / 2, -m_height / 2 - m_depth / 2);
//    painter->drawLine(width / 2 - m_depth / 2, -m_height / 2 - m_depth / 2, width / 2 - m_depth / 2, m_height / 2 - m_depth / 2);
//    painter->drawLine(width / 2 - m_depth / 2, m_height / 2 - m_depth / 2, -width / 2 - m_depth / 2, m_height / 2 - m_depth / 2);
//    painter->drawLine(-width / 2 - m_depth / 2, m_height / 2 - m_depth / 2, -width / 2 - m_depth / 2, -m_height / 2 - m_depth / 2);

}


