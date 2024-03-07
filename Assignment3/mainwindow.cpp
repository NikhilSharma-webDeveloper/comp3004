

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


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    scene(new QGraphicsScene(this)) // Initialize QGraphicsScene
{
    ui->setupUi(this);
    int height=this->ui->graphicsView->height()-20;
    int width=this->ui->graphicsView->width()-20;
    completeUI=new ElevatorsAndFloors(scene,width,height, 5,3);
    ui->graphicsView->setScene(scene); // Set the scene to the graphics view
}

MainWindow::~MainWindow()
{
    delete ui;
    delete scene; // Delete QGraphicsScene object
    delete completeUI;
}


