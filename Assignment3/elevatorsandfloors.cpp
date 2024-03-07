#include "elevatorsandfloors.h"

ElevatorsAndFloors::ElevatorsAndFloors(QGraphicsScene *scene, int width, int height, int nOfFl, int nOfEl) : nOfFloors(nOfFl), nOfElevators(nOfEl)
{
    data=new std::list<DataStructure*>();
    generateUI(scene, width, height);
}

void ElevatorsAndFloors::generateUI(QGraphicsScene *scene, int width, int height){
    int x=0;
    for(int i=0;i<nOfElevators;i++){
        DataStructure *temp=new DataStructure(scene,x,0,width/nOfElevators, height/nOfFloors, nOfFloors);
        data->push_back(temp);
        x+=(width/nOfElevators);
    }
}

ElevatorsAndFloors::~ElevatorsAndFloors(){
   deleteElevatorsAndFloors();
}

void ElevatorsAndFloors::deleteElevatorsAndFloors(){
    for (auto it = data->begin(); it != data->end(); ++it) {
                delete *it;
     }
     delete data;
}
