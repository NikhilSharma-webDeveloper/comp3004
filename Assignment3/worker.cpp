#include "worker.h"
#include <QThread>
#include <QDebug>

Worker::Worker(Ui::MainWindow *ui,ElevatorsAndFloors* completeUi, int floor,Rectangle* currentEle,QObject *parent) : QObject(parent), ui(ui),floor(floor),completeUi(completeUi), currentEle(currentEle){}


void Worker::upElevatorRequested() {
        QString update = "Up Button Pressed At Floor: ";
        update.append(QString::number(floor));
        emit consoleUpdate(update);
        Rectangle *currentEle=moveElevator(floor-1);
        currentEle->setFloor(floor-1);
        update="Elevator Reached At Floor: "+QString::number(floor);
        emit consoleUpdate(update);
        QThread::msleep(1000);
        emit pushButtonUpNormal();
        if(currentEle->getDoorOpen()==false){
            update="Bell Rangs, Door Opening for elevator: "+QString::number(currentEle->getElevatorNumber());
            emit consoleUpdate(update);
            currentEle->setDoorOpen(true);
        }
        QThread::msleep(10000);
        while(currentEle->getDoorOver()==true && currentEle->getWeight()<=250){
           QThread::msleep(3000);
        }

        while(currentEle->getDoorBlocked()==true){
            update="Door for Elevator Number: "+QString::number(currentEle->getElevatorNumber())+ " is Blocked Please Unblock it. Message Played in Elevator";
            emit consoleUpdate(update);
            QThread::msleep(3000);
        }
        currentEle->setDoorOver(false);
        if(currentEle->getDoorOpen()==true && currentEle->getEmergency()==false){
            update="Bell Rangs, Door Closing for elevator "+QString::number(currentEle->getElevatorNumber());
            currentEle->setDoorOpen(false);
            emit consoleUpdate(update);
            if(currentEle->getRequestToMove()==false){
                currentEle->setFree(true);
            }
        }


}

void Worker::downElevatorRequested() {
        QString update = "Down Button Pressed At Floor: ";
        update.append(QString::number(floor)); // Convert int to QString
        emit consoleUpdate(update);
        Rectangle *currentEle=moveElevator(floor-1);
        currentEle->setFloor(floor-1);
        update="Elevator Reached At Floor: "+QString::number(floor);
        emit consoleUpdate(update);
        QThread::msleep(1000);
        emit pushButtonDownNormal();
        if(currentEle->getDoorOpen()==false){
            update="Bell Rangs, Door Opening for elevator: "+QString::number(currentEle->getElevatorNumber());
            emit consoleUpdate(update);
            currentEle->setDoorOpen(true);
        }
        QThread::msleep(10000);
        while(currentEle->getDoorOver()==true && currentEle->getWeight()<=250){
           QThread::msleep(3000);
        }
        while(currentEle->getDoorBlocked()==true){
            update="Door for Elevator Number: "+QString::number(currentEle->getElevatorNumber())+ " is Blocked Please Unblock it. Message Played in Elevator";
            emit consoleUpdate(update);
            QThread::msleep(3000);
        }
        currentEle->setDoorOver(false);
        if(currentEle->getDoorOpen()==true && currentEle->getEmergency()==false ){
            update="Bell Rangs, Door Closing for elevator "+QString::number(currentEle->getElevatorNumber());
            currentEle->setDoorOpen(false);
            emit consoleUpdate(update);
            if(currentEle->getRequestToMove()==false){
                currentEle->setFree(true);
            }
        }

}


void Worker::setFloor(int f){
    floor=f;
}

void Worker::setElevatorsAndFloor(ElevatorsAndFloors* completeUi){
    this->completeUi=completeUi;
}

void Worker::overrideTimer(){
    currentEle->setDoorOpen(true);
    currentEle->setDoorOver(true);
    QThread::msleep(10000);
    while(currentEle->getDoorBlocked()==true){
        QString update="Door for Elevator Number: "+QString::number(currentEle->getElevatorNumber())+" is Blocked Please Unblock it. Message Played in Elevator";
        emit consoleUpdate(update);
        QThread::msleep(3000);
    }
    QString update="Bell Rangs, Door Closing for elevator "+QString::number(currentEle->getElevatorNumber());
    emit consoleUpdate(update);
    currentEle->setDoorOpen(false);
    currentEle->setDoorOver(false);


}

Rectangle* Worker::moveElevator(int floor){
    Rectangle *elevator=completeUi->assignElevator(floor);
    while(elevator==nullptr){
        QThread::msleep(2000);
        qDebug()<<"All Elevators Are Busy right now";
        elevator=completeUi->assignElevator(floor);
    }

    while(elevator->getWeight()>250){
         QString update= "Elevator Number : "+(QString::number((elevator->getElevatorNumber())))+ " is OverWeight. Please Reduce weight to 250 Kg";
         emit consoleUpdate(update);
         QThread::msleep(4000);
    }
    elevator->setFree(false);
    elevator->setFloor(floor);
    QString update= "Elevator Number : "+(QString::number((elevator->getElevatorNumber())))+" is moving to "+(QString::number(floor+1))+ " floor";
    emit consoleUpdate(update);
    QPointF pos=calculatePos(elevator->getHeight(), elevator->getXPos(), floor);
    moveElevatorAnimation(pos,elevator);
    QThread::msleep(500);
    return elevator;

}

void Worker::moveElevator(int floor, Rectangle *elevator){
    while(elevator->getDoorBlocked()==true){
        QString update="Door for Elevator Number: "+QString::number(elevator->getElevatorNumber())+" is Blocked Please Unblock it. Message Played in Elevator";
        emit consoleUpdate(update);
        QThread::msleep(3000);
    }
    while(elevator->getWeight()>250){
         QString update= "Elevator Number : "+(QString::number((elevator->getElevatorNumber())))+ " is OverWeight. Please Reduce weight to 250 Kg";
         emit consoleUpdate(update);
         QThread::msleep(4000);
    }
    QString update= "Elevator Number : "+(QString::number((elevator->getElevatorNumber())))+" is moving to "+(QString::number(floor+1))+ " floor";
    emit consoleUpdate(update);
    QPointF pos=calculatePos(elevator->getHeight(), elevator->getXPos(), floor);
    moveElevatorAnimation(pos,elevator);
    QThread::msleep(500);

}

void Worker::moveElevatorToFloor(){
    Rectangle *elevator=currentEle;
    QThread::msleep(10000);

    while(elevator->getDoorBlocked()==true){
        QString update="Door for Elevator Number: "+QString::number(currentEle->getElevatorNumber())+ " is Blocked Please Unblock it. Message Played in Elevator";
        emit consoleUpdate(update);
         QThread::msleep(3000);
    }

    while(elevator->getDoorOpen()==true){
         QString update="Doors Are Open On Elevator "+QString::number(currentEle->getElevatorNumber())+ " Please Close It";
         emit consoleUpdate(update);
         QThread::msleep(10000);
    }

    while(elevator->getWeight()>250){
         QString update= "Elevator Number : "+(QString::number((elevator->getElevatorNumber())))+ " is OverWeight. Please Reduce weight to 250 Kg";
         emit consoleUpdate(update);
         QThread::msleep(4000);
    }
    QPointF pos=calculatePos(elevator->getHeight(), elevator->getXPos(), floor-1);
    emit moveElevatorAnimation(pos,elevator);
    QThread::msleep(500);
    QString update= "Elevator Number : "+(QString::number((elevator->getElevatorNumber())))+" is moving to "+(QString::number(floor))+ " floor";
    emit consoleUpdate(update);
    elevator->setFloor(floor-1);
    elevator->setRequestToMove(false);
    elevator->setFree(true);
    update= "Elevator Number : "+(QString::number((elevator->getElevatorNumber())))+" arrived to destination Floor Number "+(QString::number(floor));
    emit consoleUpdate(update);
}

QPointF Worker::calculatePos(qreal size,int xAxis, int floor){
   int resultHeight=(size+10)*(completeUi->getNoOfFloors()-floor-1);
   QPointF result(xAxis,resultHeight);
   return result;
}

void Worker::fire(){

         QString message="Fire In Building message Played on Elevator Number "+QString::number(currentEle->getElevatorNumber());
         emit consoleUpdate(message);
         if(currentEle->getFloor()!=0){
             if(currentEle->getDoorOpen()==true){
                 QThread::msleep(2000);
                 message=" Closing Door Of Elevator Number: "+QString::number(currentEle->getElevatorNumber());
                 emit consoleUpdate(message);
                 QThread::msleep(3000);
             }
          moveElevator(0,currentEle);
          message="Elevator Number "+QString::number(currentEle->getElevatorNumber())+" Arrived At Floor number 1. Please Disembark";
          emit consoleUpdate(message);
          currentEle->setEmergency(false);
          currentEle->setFloor(1);
          currentEle->setDoorOpen(false);
          currentEle->setFree(true);

     }
}

void Worker::powerOutage(){
    QString message="Power Outage In Building message Played on Elevator Number "+QString::number(currentEle->getElevatorNumber());
    emit consoleUpdate(message);
    if(currentEle->getFloor()!=0){
        if(currentEle->getDoorOpen()==true){
            QThread::msleep(2000);
            message=" Closing Door Of Elevator Number: "+QString::number(currentEle->getElevatorNumber());
            emit consoleUpdate(message);
            QThread::msleep(3000);
        }
     moveElevator(0,currentEle);
     message="Elevator Number "+QString::number(currentEle->getElevatorNumber())+" Arrived At Floor number 1. Please Disembark";
     emit consoleUpdate(message);
     currentEle->setEmergency(false);
     currentEle->setFloor(1);
     currentEle->setDoorOpen(false);
     currentEle->setFree(true);
}
}
