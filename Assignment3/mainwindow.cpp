

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "rectangle.h"
#include <QGraphicsScene>
#include <QPropertyAnimation>
#include <QGraphicsItemAnimation>
#include <QDebug>
#include "stdio.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    scene(new QGraphicsScene(this)), // Initialize QGraphicsScene
    groundFloor(new Rectangle(100, 100)),
    firstFloor(new Rectangle(100, 100)),
    secondFloor(new Rectangle(100, 100))
{
    //qDebug() << this->ui->graphicsView->width();
    ui->setupUi(this);

    firstFloor->setPos(0, 100);
    secondFloor->setPos(0, 200);

    ui->graphicsView->setScene(scene); // Set the scene to the graphics view

    scene->addItem(groundFloor);
    scene->addItem(firstFloor);
    scene->addItem(secondFloor);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete groundFloor;
    delete firstFloor;
    delete secondFloor;
    delete scene; // Delete QGraphicsScene object
}


