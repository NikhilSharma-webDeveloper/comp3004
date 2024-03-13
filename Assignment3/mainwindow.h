#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include "rectangle.h"
#include "elevatorsandfloors.h"
#include "worker.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    ElevatorsAndFloors *completeUI;
    void cleanupThreads();
    QList<QThread*> workerThreads;
    QList<int> floorsRequested;
//    QList<Rectangle*> activelevators;
    void pushButtonUpShine();
    void pushButtonUpNormal();
    void enableButtonsOnElevator(int);
    void pushButtonDownShine();
    void pushButtonDownNormal();


private slots:
    void onChangeDimensionClicked();
    void upElevatorRequested();
    void downElevatorRequested();
    void printUpdatesOnConsole(QString update);
    void moveElevatorAnimation(const QPointF& targetPos,Rectangle*);
    void elevatorToDestination();
    void pushButtonOpenDoor();
    void pushButtonCloseDoor();
    void fire();
    void powerOutage();
    void helpButtonPressed();
    void submitWeight();
    void blockDoor();
    void unBlockDoor();



};
#endif // MAINWINDOW_H
