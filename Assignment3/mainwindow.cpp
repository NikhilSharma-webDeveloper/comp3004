

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


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    scene(new QGraphicsScene(this)) // Initialize QGraphicsScene
{
    ui->setupUi(this);
    int height=this->ui->graphicsView->height()-50;
    int width=this->ui->graphicsView->width()-300;
    completeUI=new ElevatorsAndFloors(scene,width,height, 5,3);
    ui->graphicsView->setScene(scene); // Set the scene to the graphics view
    ui->spinBoxFloors->setMaximum(5);
    connect(ui->changeDimensionBtn, SIGNAL(clicked(bool)), this, SLOT(onChangeDimensionClicked()));
    connect(ui->pushButtonUp, SIGNAL(clicked(bool)), this, SLOT(upElevatorRequested()));
    connect(ui->pushButtonDown, SIGNAL(clicked(bool)), this, SLOT(downElevatorRequested()));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete scene; // Delete QGraphicsScene object
    delete completeUI;
}

void MainWindow::onChangeDimensionClicked(){
    int nOfFloors=ui->nOfFloors->value();
    int nOfElevators=ui->nOfElevators->value();
    completeUI->updateUi(scene, nOfFloors, nOfElevators);
    QString update = "New Number of Floors Are: ";
    update.append(QString::number(nOfFloors)); // Convert int to QString
    update.append(" And Number Of Elevators Are: ");
    update.append(QString::number(nOfElevators)); // Convert int to QString
    ui->spinBoxFloors->setMaximum(nOfFloors);
    printUpdatesOnConsole(update);
}

void MainWindow::upElevatorRequested() {
    int floor = ui->spinBoxFloors->value();
    QString update = "Up Button Pressed At Floor: ";
    update.append(QString::number(floor)); // Convert int to QString
    printUpdatesOnConsole(update);
}

void MainWindow::moveElevator(int floor){
    Rectangle *elevator=completeUI->assignElevator(floor);

}

void MainWindow::downElevatorRequested() {
    int floor = ui->spinBoxFloors->value();
    QString update = "Down Button Pressed At Floor: ";
    update.append(QString::number(floor)); // Convert int to QString
    printUpdatesOnConsole(update);
}

void MainWindow::printUpdatesOnConsole(QString update) {
    QDateTime currentDateTime = QDateTime::currentDateTime();
    QString formattedDateTime = currentDateTime.toString("yyyy-MM-dd hh:mm:ss");
    ui->consoleOutput->append(formattedDateTime+"  "+update);
    ui->consoleOutput->textCursor().movePosition(QTextCursor::End);
}

