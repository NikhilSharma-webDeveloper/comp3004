#include "worker.h"
#include <QThread>
#include <QDebug>

Worker::Worker(Ui::MainWindow *ui,ElevatorsAndFloors* completeUi, int floor,QObject *parent) : QObject(parent), ui(ui),floor(floor),completeUi(completeUi){}


void Worker::upElevatorRequested() {
        QString update = "Up Button Pressed At Floor: ";
        update.append(QString::number(floor));
        emit consoleUpdate(update);
        Rectangle *currentEle=moveElevator(floor);
        update="Elevator Reached At Floor: "+QString::number(floor);
        emit consoleUpdate(update);
        QThread::msleep(1000);
        emit pushButtonUpNormal();
        update="Bell Rangs, Door Opens";
        emit consoleUpdate(update);
}

void Worker::downElevatorRequested() {
        QString update = "Down Button Pressed At Floor: ";
        update.append(QString::number(floor)); // Convert int to QString
        emit consoleUpdate(update);
        moveElevator(floor);
        QThread::msleep(1000);
        update=" Elevator Reached At Floor: "+QString::number(floor);

}


void Worker::setFloor(int f){
    floor=f;
}

void Worker::setElevatorsAndFloor(ElevatorsAndFloors* completeUi){
    this->completeUi=completeUi;
}

Rectangle* Worker::moveElevator(int floor){
    Rectangle *elevator=completeUi->assignElevator();
    while(elevator==nullptr){
        QThread::msleep(2000);
        qDebug()<<"Running";
        elevator=completeUi->assignElevator();
    }
    elevator->setFree(false);
    elevator->setFloor(floor);
    QString update= "Elevator Number : "+(QString::number(1+(elevator->getElevatorNumber())))+" is moving to "+(QString::number(floor))+ " floor";
    emit consoleUpdate(update);
    QPointF pos=calculatePos(elevator->getHeight(), elevator->getXPos(), floor);
    moveElevatorAnimation(pos,elevator);
    QThread::msleep(500);
    return elevator;

}

void Worker::moveElevator(int floor, Rectangle *elevator){
    elevator->setFree(false);
    elevator->setFloor(floor);
    QString update= "Elevator Number : "+(QString::number(1+(elevator->getElevatorNumber())))+" is moving to "+(QString::number(floor))+ " floor";
    emit consoleUpdate(update);
    QPointF pos=calculatePos(elevator->getHeight(), elevator->getXPos(), floor);
    moveElevatorAnimation(pos,elevator);
    QThread::msleep(500);

}

QPointF Worker::calculatePos(qreal size,int xAxis, int floor){
   int resultHeight=(size+10)*(completeUi->getNoOfFloors()-floor-1);
   QPointF result(xAxis,resultHeight);
   return result;
}
