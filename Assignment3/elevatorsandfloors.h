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

private:
    int nOfFloors;
    int nOfElevators;
    void generateUI(QGraphicsScene *scene, int width, int height);
    std::list<DataStructure*> *data;
    void deleteElevatorsAndFloors();
};

#endif // ELEVATORSANDFLOORS_H
