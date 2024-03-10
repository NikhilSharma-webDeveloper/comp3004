#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "rectangle.h"
#include "elevatorsandfloors.h"

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

private slots:
    void onChangeDimensionClicked();
    void upElevatorRequested();
    void downElevatorRequested();
    void printUpdatesOnConsole(QString update);
    void moveElevator(int floor);

};
#endif // MAINWINDOW_H
