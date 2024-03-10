#ifndef ELEVATORSANDFLOORS_H
#define ELEVATORSANDFLOORS_H

#include <QGraphicsScene>
#include "datastructure.h"
#include <list>
#include <QDebug>


class ElevatorsAndFloors
{
public:
    ElevatorsAndFloors(QGraphicsScene *scene,int width, int height, int nOfFl=5, int nOfEl=3);
    ~ElevatorsAndFloors();
    void updateUi(QGraphicsScene *scene,int nOfFloors, int nOfElevators);
    Rectangle* assignElevator(int floor);

private:
    int nOfFloors;//no of floors we are making
    int nOfElevators;// no of elevators we are making
    int width;//total width available
    int height;//total height available
    void generateUI(QGraphicsScene *scene, int width, int height);
    std::list<DataStructure*> *data;
    void deleteElevatorsAndFloors();
};

#endif // ELEVATORSANDFLOORS_H
