#include "rectangle.h"

Rectangle::Rectangle(qreal w, qreal h,int x,int y,int number,int floor, QGraphicsObject *parent) : QGraphicsObject(parent), width(w), height(h),x(x),y(y), number(number),brushColor(Qt::transparent)
{
    free=true;
    this->floor=floor;
    doorOpen=false;
    requestToMove=false;
    doorOver=false;
    emergency=false;
    weight=150;
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

int Rectangle::getElevatorNumber(){
    return number;
}

qreal  Rectangle::getHeight(){
    return height;
}

int Rectangle::getXPos(){
    return x;
}

void Rectangle::setFree(bool m){
    free=m;
}

bool Rectangle::isFree(){
    return free;
}

void Rectangle::setFloor(int f){
    floor=f;
}
int Rectangle::getFloor(){
    return floor;
}

bool Rectangle::getDoorOpen(){
    return doorOpen;
}
bool Rectangle::setDoorOpen(bool open){
     this->doorOpen=open;
}

bool Rectangle::getRequestToMove(){
    return requestToMove;
}
bool Rectangle::setRequestToMove(bool s){
     requestToMove=s;
}

void Rectangle::setDoorOver(bool b){
    doorOver=b;
}

bool Rectangle::getDoorOver(){
    return doorOver;
}


bool Rectangle::setEmergency(bool e){
    emergency=e;
}

bool Rectangle::getEmergency(){
    return emergency;
}

void Rectangle::setWeight(double w){
    weight=w;
}
double Rectangle::getWeight(){
    return weight;
}
