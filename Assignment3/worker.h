#ifndef WORKER_H
#define WORKER_H

#include <QMainWindow>
#include <QObject>
#include <QPushButton>
#include "elevatorsandfloors.h"
#include "mainwindow.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "rectangle.h"
#include <QGraphicsScene>
#include <QPropertyAnimation>
#include <QGraphicsItemAnimation>
#include <QDebug>
#include "stdio.h"
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsTextItem>
#include <QString>
#include <QDateTime>
#include <QThread>
#include "rectangle.h"



class Worker : public QObject {
    Q_OBJECT

public:
    explicit Worker(Ui::MainWindow *ui,ElevatorsAndFloors* completeUi, int floor,Rectangle* currentEle=nullptr,QObject *parent = nullptr);
    void setFloor(int);
    void setElevatorsAndFloor(ElevatorsAndFloors* completeUi=nullptr);
    QPointF calculatePos(qreal size,int xAxis, int floor) ;

private slots:


public slots:
    void upElevatorRequested();
    void downElevatorRequested();
    void moveElevator(int floor, Rectangle *elevator);
    void moveElevatorToFloor();
    void overrideTimer();
    void fire();
    void powerOutage();
    // Add more process functions for different button types
signals:
    void moveElevatorAnimation(const QPointF& targetPos, Rectangle* ele);
    void consoleUpdate(const QString &message);
    void pushButtonDownNormal();
    void pushButtonUpNormal();


private:
    int floor;
    ElevatorsAndFloors* completeUi;
    Rectangle* moveElevator(int floor);
    Ui::MainWindow *ui;
    Rectangle *currentEle;


};



#endif // WORKER_H
