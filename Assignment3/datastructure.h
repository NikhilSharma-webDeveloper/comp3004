#ifndef DATASTRUCTURE_H
#define DATASTRUCTURE_H


#include <QGraphicsScene>
#include "rectangle.h"
#include <list>
#include <QDebug>

class DataStructure
{
public:
    DataStructure(QGraphicsScene *scene, int x, int y, int width, int height, int nOfFloors);
    void updateUI();
    ~DataStructure();
    bool isFree();
    void setFree(bool=true);

private:
    int xAxis;//position of elevator on xaxis
    int yAxis;//position of elevator on yaxis
    bool free;
    Rectangle *elevator;
    std::list<Rectangle*> *floors;
    void createElevator(QGraphicsScene *scene, int width, int height,int nOfFloors);
    void createFloors(QGraphicsScene *scene, int width, int height, int nOfFloors);
    void destroyFloorsAndElevator();
};

#endif // DATASTRUCTURE_H
