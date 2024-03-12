

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
#include "worker.h"


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
    ui->spinBoxFloors->setMaximum(4);
    ui->elevatorSelectedSpinBox->setMinimum(1);
    ui->elevatorSelectedSpinBox->setMaximum(3);
    connect(ui->changeDimensionBtn, SIGNAL(clicked(bool)), this, SLOT(onChangeDimensionClicked()));
    connect(ui->pushButtonUp, SIGNAL(clicked(bool)), this, SLOT(upElevatorRequested()));
    connect(ui->pushButtonDown, SIGNAL(clicked(bool)), this, SLOT(downElevatorRequested()));
    connect(ui->one, SIGNAL(clicked(bool)), this, SLOT(elevatorToDestination()));
    connect(ui->two, SIGNAL(clicked(bool)), this, SLOT(elevatorToDestination()));
    connect(ui->three, SIGNAL(clicked(bool)), this, SLOT(elevatorToDestination()));
    connect(ui->four, SIGNAL(clicked(bool)), this, SLOT(elevatorToDestination()));
    connect(ui->five, SIGNAL(clicked(bool)), this, SLOT(elevatorToDestination()));
    connect(ui->six, SIGNAL(clicked(bool)), this, SLOT(elevatorToDestination()));
    connect(ui->seven, SIGNAL(clicked(bool)), this, SLOT(elevatorToDestination()));
    connect(ui->eight, SIGNAL(clicked(bool)), this, SLOT(elevatorToDestination()));
    connect(ui->nine, SIGNAL(clicked(bool)), this, SLOT(elevatorToDestination()));
    connect(ui->ten, SIGNAL(clicked(bool)), this, SLOT(elevatorToDestination()));
    enableButtonsOnElevator(5);
}

MainWindow::~MainWindow()
{
    cleanupThreads();
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
    ui->spinBoxFloors->setMaximum(nOfFloors-1);
    printUpdatesOnConsole(update);
    ui->elevatorSelectedSpinBox->setMaximum(nOfElevators);
    enableButtonsOnElevator(nOfFloors);
}

void MainWindow::upElevatorRequested() {
    //lets say if we are already handling the request for the floor system will not allocate new elevator for same request
    if(floorsRequested.indexOf(ui->spinBoxFloors->value())!=-1){
        QString update ="Please Use the Elevator Present on floor number: "+QString::number(ui->spinBoxFloors->value()) ;
        printUpdatesOnConsole(update);
        return;
    }
    floorsRequested.append(ui->spinBoxFloors->value());
    pushButtonUpShine();
    QThread* thread = new QThread(this);
    workerThreads.append(thread);
    Worker* worker = new Worker(ui,completeUI,ui->spinBoxFloors->value());
    worker->moveToThread(thread);

    // Connect signals to update UI
    connect(worker, &Worker::consoleUpdate, this, &MainWindow::printUpdatesOnConsole);
    connect(worker, &Worker::moveElevatorAnimation, this, &MainWindow::moveElevatorAnimation);
    connect(worker, &Worker::pushButtonUpNormal, this, &MainWindow::pushButtonUpNormal);
    connect(thread, &QThread::finished, worker, &QThread::deleteLater);

    thread->start();
    // Connect the thread's started signal to the worker's processing slot
    connect(thread, &QThread::started, worker, &Worker::upElevatorRequested);
}


void MainWindow::downElevatorRequested() {
    if(floorsRequested.indexOf(ui->spinBoxFloors->value())!=-1){
        QString update ="Please Use the Elevator Present on floor number: "+QString::number(ui->spinBoxFloors->value()) ;
        printUpdatesOnConsole(update);
        return;
    }
    floorsRequested.append(ui->spinBoxFloors->value());
    QThread* thread = new QThread(this);
     workerThreads.append(thread);
    Worker* worker = new Worker(ui,completeUI,ui->spinBoxFloors->value());
    worker->moveToThread(thread);

    // Connect signals to update UI
    connect(worker, &Worker::consoleUpdate, this, &MainWindow::printUpdatesOnConsole);
    connect(worker, &Worker::moveElevatorAnimation, this, &MainWindow::moveElevatorAnimation);
    connect(thread, &QThread::finished, worker, &QThread::deleteLater);

    thread->start();
    // Connect the thread's started signal to the worker's processing slot
    connect(thread, &QThread::started, worker, &Worker::downElevatorRequested);

}

void MainWindow::printUpdatesOnConsole(QString update) {
    QDateTime currentDateTime = QDateTime::currentDateTime();
    QString formattedDateTime = currentDateTime.toString("yyyy-MM-dd hh:mm:ss");
    ui->consoleOutput->append(formattedDateTime+"  "+update);
    ui->consoleOutput->textCursor().movePosition(QTextCursor::End);
}


void MainWindow::moveElevatorAnimation(const QPointF& targetPos, Rectangle* ele){
    QPropertyAnimation* animation=new QPropertyAnimation(ele,"pos");
    connect(animation, &QPropertyAnimation::valueChanged,this, [this](){
        ui->graphicsView->scene()->update();
    });
    animation->setDuration(1000);
    animation->setStartValue(ele->pos());
    animation->setEndValue(targetPos);
    animation->start(QAbstractAnimation::DeleteWhenStopped);
}

void MainWindow::cleanupThreads() {
    for (QThread *thread : workerThreads) {
        if (thread->isRunning()) {
            thread->quit(); // Request thread to quit
        }
        delete thread; // Delete thread object
    }
    workerThreads.clear(); // Clear the list
}

void MainWindow::pushButtonUpShine(){
    ui->pushButtonUp->setStyleSheet("background-color: lightblue;");
}
void MainWindow::pushButtonUpNormal(){
    qDebug()<<"Called to";
    ui->pushButtonUp->setStyleSheet("background: none;");
}

void MainWindow::elevatorToDestination(){
        int selectedEle=ui->elevatorSelectedSpinBox->value();
        int currentFloor=ui->spinBoxFloors->value();

        QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());
        Rectangle *elevator=nullptr;
        int targetFloor=0;

         elevator=completeUI->checkElevatorPosition(currentFloor,selectedEle);

        if(elevator==nullptr){
            QString update ="Elevator number "+QString::number(selectedEle)+ " is not on Floor: "+QString::number(currentFloor);
            printUpdatesOnConsole(update);
            return;
        }else{
            QString update ="Elevator: "+QString::number(selectedEle)+" asked to move to floor number "+QString::number(1);
        }

                if (clickedButton) {
                    if (clickedButton == ui->one) {
                        targetFloor=1;
                        elevator=completeUI->checkElevatorPosition(1,selectedEle);
                    } else if (clickedButton == ui->two) {
                        targetFloor=2;
                         elevator=completeUI->checkElevatorPosition(2,selectedEle);
                    } else if (clickedButton == ui->three) {
                        targetFloor=3;
                         elevator=completeUI->checkElevatorPosition(3,selectedEle);
                    } else if (clickedButton == ui->four) {
                        targetFloor=4;
                        elevator=completeUI->checkElevatorPosition(4,selectedEle);
                    } else if (clickedButton == ui->five) {
                        targetFloor=5;
                        elevator=completeUI->checkElevatorPosition(5,selectedEle);
                    } else if (clickedButton == ui->six) {
                        targetFloor=6;
                        elevator=completeUI->checkElevatorPosition(6,selectedEle);
                    } else if (clickedButton == ui->seven) {
                        targetFloor=7;
                        elevator=completeUI->checkElevatorPosition(7,selectedEle);
                    } else if (clickedButton == ui->eight) {
                        targetFloor=8;
                        elevator=completeUI->checkElevatorPosition(8,selectedEle);
                    } else if (clickedButton == ui->nine) {
                        targetFloor=9;
                        elevator=completeUI->checkElevatorPosition(9,selectedEle);
                    } else if (clickedButton == ui->ten) {
                        targetFloor=10;
                        elevator=completeUI->checkElevatorPosition(10,selectedEle);
                    }
        }
}


void MainWindow::enableButtonsOnElevator(int nOfEnable){
    for(int i=1;i<=10;i++){
        if(nOfEnable>=i){
            switch (i) {
                case 1:
                    ui->one->setEnabled(true);
                    break;
                case 2:
                    ui->two->setEnabled(!false);
                    break;
                case 3:
                    ui->three->setEnabled(!false);
                    break;
                case 4:
                    ui->four->setEnabled(!false);
                    break;
                case 5:
                    ui->five->setEnabled(!false);
                    break;
                case 6:
                    ui->six->setEnabled(!false);
                    break;
                case 7:
                    ui->seven->setEnabled(!false);
                    break;
                case 8:
                    ui->eight->setEnabled(!false);
                    break;
                case 9:
                    ui->nine->setEnabled(!false);
                    break;
                case 10:
                    ui->ten->setEnabled(!false);
                    break;
                default:
                    // Handle the case where i is not in the range 1 to 10
                    // For example, you can print an error message or handle it as needed
                    break;
            }
        }else{
            switch (i) {
                case 1:
                    ui->one->setEnabled(false);
                    break;
                case 2:
                    ui->two->setEnabled(false);
                    break;
                case 3:
                    ui->three->setEnabled(false);
                    break;
                case 4:
                    ui->four->setEnabled(false);
                    break;
                case 5:
                    ui->five->setEnabled(false);
                    break;
                case 6:
                    ui->six->setEnabled(false);
                    break;
                case 7:
                    ui->seven->setEnabled(false);
                    break;
                case 8:
                    ui->eight->setEnabled(false);
                    break;
                case 9:
                    ui->nine->setEnabled(false);
                    break;
                case 10:
                    ui->ten->setEnabled(false);
                    break;
                default:
                    // Handle the case where i is not in the range 1 to 10
                    // For example, you can print an error message or handle it as needed
                    break;
            }

        }
    }
}
