

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
#include <QMessageBox>
#include <QTimer>



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
    ui->spinBoxFloors->setMinimum(1);
    ui->elevatorSelectedSpinBox->setMinimum(1);
    ui->elevatorSelectedSpinBox->setMaximum(3);
    ui->elevatorSelectedForWeight->setMinimum(1);
    ui->elevatorSelectedForWeight->setMaximum(3);
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
    connect(ui->pushButtonOpenDoor,SIGNAL(clicked(bool)), this,SLOT(pushButtonOpenDoor()));
    connect(ui->pushButtonCloseDoor,SIGNAL(clicked(bool)), this,SLOT(pushButtonCloseDoor()));
    connect(ui->fireButton, SIGNAL(clicked(bool)), this, SLOT(fire()));
    connect(ui->powerOutageButton, SIGNAL(clicked(bool)), this, SLOT(powerOutage()));
    connect(ui->helpButton,SIGNAL(clicked(bool)), this, SLOT(helpButtonPressed()));
    connect(ui->submitWeight,SIGNAL(clicked(bool)), this, SLOT(submitWeight()));
    connect(ui->pushButtonBlockDoor,SIGNAL(clicked(bool)), this, SLOT(blockDoor()));
    connect(ui->pushButtonBlockDoor_2,SIGNAL(clicked(bool)), this, SLOT(unBlockDoor()));
    ui->elevatorSelectedForDoorBlock->setMinimum(1);
    ui->elevatorSelectedForDoorBlock->setMaximum(3);
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
    ui->spinBoxFloors->setMaximum(nOfFloors);
    printUpdatesOnConsole(update);
    ui->elevatorSelectedSpinBox->setMaximum(nOfElevators);
    ui->elevatorSelectedForWeight->setMaximum(nOfElevators);
    ui->elevatorSelectedForDoorBlock->setMaximum(nOfElevators);
    enableButtonsOnElevator(nOfFloors);
}

void MainWindow::upElevatorRequested() {
    //lets say if we are already handling the request for the floor system will not allocate new elevator for same request
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
    workerThreads.removeOne(thread);

}


void MainWindow::downElevatorRequested() {

    floorsRequested.append(ui->spinBoxFloors->value());
    pushButtonDownShine();
    QThread* thread = new QThread(this);
    workerThreads.append(thread);
    Worker* worker = new Worker(ui,completeUI,ui->spinBoxFloors->value());
    worker->moveToThread(thread);

    // Connect signals to update UI
    connect(worker, &Worker::consoleUpdate, this, &MainWindow::printUpdatesOnConsole);
    connect(worker, &Worker::moveElevatorAnimation, this, &MainWindow::moveElevatorAnimation);
    connect(worker, &Worker::pushButtonDownNormal, this, &MainWindow::pushButtonDownNormal);
    connect(thread, &QThread::finished, worker, &QThread::deleteLater);

    thread->start();
    // Connect the thread's started signal to the worker's processing slot
    connect(thread, &QThread::started, worker, &Worker::downElevatorRequested);
    workerThreads.removeOne(thread);


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
            thread->terminate();
            thread->wait();
        }
        delete thread; // Delete thread object
    }
    workerThreads.clear(); // Clear the list
}

void MainWindow::pushButtonUpShine(){
    ui->pushButtonUp->setStyleSheet("background-color: lightblue;");
}
void MainWindow::pushButtonUpNormal(){
    ui->pushButtonUp->setStyleSheet("background: none;");
}

void MainWindow::pushButtonDownShine(){
    ui->pushButtonDown->setStyleSheet("background-color: lightblue;");
}
void MainWindow::pushButtonDownNormal(){
    ui->pushButtonDown->setStyleSheet("background: none;");
}

void MainWindow::elevatorToDestination(){
        int selectedEle=ui->elevatorSelectedSpinBox->value();
        int currentFloor=ui->spinBoxFloors->value();

        QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());
        Rectangle *elevator=nullptr;
        int targetFloor=0;

         elevator=completeUI->checkElevatorPosition(currentFloor-1,selectedEle);

        if(elevator==nullptr){
            QString update ="Elevator Number "+QString::number(selectedEle)+ " is not on Floor Number: "+QString::number(currentFloor);
            printUpdatesOnConsole(update);
            return;
        }else{
            if(elevator->getDoorOpen()==false){
                QString update ="Please Open door of Elevator Number: "+QString::number(selectedEle)+ " on Floor Number: "+QString::number(currentFloor);
                printUpdatesOnConsole(update);
                return;
            }
            /*QThread::msleep(3000)*/;
            if (clickedButton) {
                if (clickedButton == ui->one) {
                    targetFloor=1;
                } else if (clickedButton == ui->two) {
                    targetFloor=2;
                } else if (clickedButton == ui->three) {
                    targetFloor=3;
                } else if (clickedButton == ui->four) {
                    targetFloor=4;
                } else if (clickedButton == ui->five) {
                    targetFloor=5;
                } else if (clickedButton == ui->six) {
                    targetFloor=6;
                } else if (clickedButton == ui->seven) {
                    targetFloor=7;
                } else if (clickedButton == ui->eight) {
                    targetFloor=8;
                } else if (clickedButton == ui->nine) {
                    targetFloor=9;
                } else if (clickedButton == ui->ten) {
                    targetFloor=10;
                }
            }
            QString update ="Elevator: "+QString::number(selectedEle)+" asked to move to floor number "+QString::number(targetFloor);
            printUpdatesOnConsole(update);
            elevator->setRequestToMove(true);
            elevator->setFree(false);
            QThread* thread = new QThread(this);
            workerThreads.append(thread);
            Worker* worker = new Worker(ui,completeUI,targetFloor, elevator);
            worker->moveToThread(thread);

            // Connect signals to update UI
            connect(worker, &Worker::consoleUpdate, this, &MainWindow::printUpdatesOnConsole);
            connect(worker, &Worker::moveElevatorAnimation, this, &MainWindow::moveElevatorAnimation);

            thread->start();
            // Connect the thread's started signal to the worker's processing slot
            connect(thread, &QThread::started, worker, &Worker::moveElevatorToFloor);
            workerThreads.removeOne(thread);
            floorsRequested.removeOne(currentFloor);

        }
}

void MainWindow::pushButtonOpenDoor(){
    int selectedEle=ui->elevatorSelectedSpinBox->value();
    Rectangle *currentEle=completeUI->getElevator(selectedEle);
    QString update="Requested To Open Door of Elevator Number: "+QString::number(currentEle->getElevatorNumber());
    printUpdatesOnConsole(update);
    QThread* thread = new QThread(this);
    workerThreads.append(thread);
    Worker* worker = new Worker(ui,completeUI,ui->spinBoxFloors->value(),currentEle);
    worker->moveToThread(thread);

    // Connect signals to update UI
    connect(worker, &Worker::consoleUpdate, this, &MainWindow::printUpdatesOnConsole);
    connect(worker, &Worker::moveElevatorAnimation, this, &MainWindow::moveElevatorAnimation);
    connect(thread, &QThread::finished, worker, &QThread::deleteLater);

    thread->start();
    // Connect the thread's started signal to the worker's processing slot
    connect(thread, &QThread::started, worker, &Worker::overrideTimer);
    workerThreads.removeOne(thread);

}

void MainWindow::pushButtonCloseDoor(){
    int selectedEle=ui->elevatorSelectedSpinBox->value();
    Rectangle *currentEle=completeUI->getElevator(selectedEle);
    if(currentEle->getWeight()>250){
        QString update="Door Cannot be Closed for Elevator Number: "+QString::number(currentEle->getElevatorNumber())+" Please reduce the Weight";
        printUpdatesOnConsole(update);
        return;
    }

    if(currentEle->getDoorBlocked()==true){
        QString update="Door for Elevator Number: "+QString::number(currentEle->getElevatorNumber())+ " is Blocked Please Unblock it. Message Played in Elevator";
        printUpdatesOnConsole(update);
        return;
    }
    QString update="Bell Rangs, Door Closing for elevator "+QString::number(currentEle->getElevatorNumber());
    currentEle->setDoorOpen(false);
    currentEle->setDoorOver(false);
    if(currentEle->getRequestToMove()==false){
        currentEle->setFree(true);
    }
    printUpdatesOnConsole(update);
}

void MainWindow::fire(){
    cleanupThreads();
    QString update="Fire Reported in Building !!!. Moving All the Elevators to Floor 1";
    printUpdatesOnConsole(update);

     for(int i=0;i<completeUI->getNoOfElevators();i++){
        Rectangle *ele=completeUI->getElevator(i+1);
        ele->setEmergency(true);
        if(ele->getFloor()!=0){
            QThread* thread = new QThread(this);
            workerThreads.append(thread);
            Worker* worker = new Worker(ui,completeUI,ui->spinBoxFloors->value(),ele);
            worker->moveToThread(thread);

            // Connect signals to update UI
            connect(worker, &Worker::consoleUpdate, this, &MainWindow::printUpdatesOnConsole);
            connect(worker, &Worker::moveElevatorAnimation, this, &MainWindow::moveElevatorAnimation);
            connect(thread, &QThread::finished, worker, &QThread::deleteLater);

            thread->start();
            // Connect the thread's started signal to the worker's processing slot
            connect(thread, &QThread::started, worker, &Worker::fire);
            workerThreads.removeOne(thread);
        }
     }


}

void MainWindow::powerOutage(){
    cleanupThreads();
    QString update="Power Outage Reported in Building !!!. Moving All the Elevators to Floor 1";
    printUpdatesOnConsole(update);
     for(int i=0;i<completeUI->getNoOfElevators();i++){
        Rectangle *ele=completeUI->getElevator(i+1);
        ele->setEmergency(true);
        if(ele->getFloor()!=0){
            QThread* thread = new QThread(this);
            workerThreads.append(thread);
            Worker* worker = new Worker(ui,completeUI,ui->spinBoxFloors->value(),ele);
            worker->moveToThread(thread);

            // Connect signals to update UI
            connect(worker, &Worker::consoleUpdate, this, &MainWindow::printUpdatesOnConsole);
            connect(worker, &Worker::moveElevatorAnimation, this, &MainWindow::moveElevatorAnimation);
            connect(thread, &QThread::finished, worker, &QThread::deleteLater);

            thread->start();
            // Connect the thread's started signal to the worker's processing slot
            connect(thread, &QThread::started, worker, &Worker::powerOutage);
            workerThreads.removeOne(thread);
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

void MainWindow::helpButtonPressed() {
    int selectedEle = ui->elevatorSelectedSpinBox->value();
    QString update = "Received Help Call From Elevator Number " + QString::number(selectedEle);
    printUpdatesOnConsole(update);

    QMessageBox* msgBox = new QMessageBox(this);
    msgBox->setWindowTitle("HELP!!!!!!");
    msgBox->setText("Help Button Pressed From Elevator Number: " + QString::number(selectedEle) + " Do you want to Connect");
    msgBox->setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);

    // Flag to track if the timeout occurred
    bool timeoutOccurred = false;

    // Create a timer to close the message box after 5 seconds
    QTimer* timer = new QTimer(this);
    connect(timer, &QTimer::timeout, [=, &timeoutOccurred]() {
        if (!timeoutOccurred) {
            QString timeoutMsg = "No response received. Initiating 911 call.";
            printUpdatesOnConsole(timeoutMsg);
            timeoutOccurred = true; // Set the flag to true to indicate timeout occurred
        }
        timer->stop(); // Stop the timer
        msgBox->close(); // Close the message box
    });
    timer->start(5000); // Start the timer for 5 seconds

    // Connect the button clicked signal to close the message box and print messages
    connect(msgBox, &QMessageBox::buttonClicked, [=, &timeoutOccurred](QAbstractButton* button){
        timer->stop(); // Stop the timer when the user responds to the message box
        if (msgBox->standardButton(button) == QMessageBox::Ok) {
            QString connectMsg = "Connected.";
            printUpdatesOnConsole(connectMsg);
        } else {
            QString cancelMsg = "911 call is placed.";
            printUpdatesOnConsole(cancelMsg);
        }
        msgBox->close(); // Close the message box
    });

    // Set the size of the message box to 50% of the current window's size
    int width = this->width() / 2;
    int height = this->height() / 2;
    msgBox->resize(width, height);

    msgBox->exec(); // Show the message box
}

void MainWindow::submitWeight(){
    int selectedElevator = ui->elevatorSelectedForWeight->value();
    QString str = ui->lineEditForWeight->text();
    bool flag = true;
    double weight = str.toDouble(&flag);

    if (!flag) {
        QString errorMsg = "Invalid Weight Value. Only integer or double values are allowed.";
        printUpdatesOnConsole(errorMsg);
        return;
    }else{
        Rectangle* elevator=completeUI->getElevator(selectedElevator);
        elevator->setWeight(weight);
        QString update = "Weight Of Elevator Number " + QString::number(elevator->getElevatorNumber())+ " is "+QString::number(weight)+ " KG";
        printUpdatesOnConsole(update);
    }

}

void MainWindow::blockDoor(){
    int selectedElevator=ui->elevatorSelectedForDoorBlock->value();
    Rectangle* elevator=completeUI->getElevator(selectedElevator);
    elevator->setDoorBlocked(true);
    QString update = "Door Of Elevator Number " + QString::number(elevator->getElevatorNumber())+ " is Blocked";
    printUpdatesOnConsole(update);
}

void MainWindow::unBlockDoor(){
    int selectedElevator=ui->elevatorSelectedForDoorBlock->value();
    Rectangle* elevator=completeUI->getElevator(selectedElevator);
    elevator->setDoorBlocked(false);
    QString update = "Door Of Elevator Number " + QString::number(elevator->getElevatorNumber())+ " is unBlocked";
    printUpdatesOnConsole(update);
}
