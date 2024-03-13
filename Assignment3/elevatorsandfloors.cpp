#include "elevatorsandfloors.h"
#include "worker.h"

ElevatorsAndFloors::ElevatorsAndFloors(QGraphicsScene *scene, int width, int height, int nOfFl, int nOfEl) : nOfFloors(nOfFl), nOfElevators(nOfEl), width(width), height(height)
{
    data=new std::list<DataStructure*>();
    generateUI(scene, width, height);
}

void ElevatorsAndFloors::generateUI(QGraphicsScene *scene, int width, int height){
    int x=0;

    for(int i=0;i<nOfElevators;i++){
        DataStructure *temp=new DataStructure(scene,x,0,(width/nOfElevators), height/nOfFloors, nOfFloors,i);
        data->push_back(temp);
        x+=(width/nOfElevators);
    }
}

ElevatorsAndFloors::~ElevatorsAndFloors(){
   deleteElevatorsAndFloors();
   delete data;
}

void ElevatorsAndFloors::deleteElevatorsAndFloors(){
    for (auto it = data->begin(); it != data->end(); ++it) {
                delete *it;
     }
  data->clear();
}

void ElevatorsAndFloors::updateUi(QGraphicsScene *scene,int nOfFloors, int nOfElevators){
    deleteElevatorsAndFloors();
    this->nOfElevators=nOfElevators;
    this->nOfFloors=nOfFloors;
    generateUI(scene, width,height);
}


int ElevatorsAndFloors::getNoOfFloors(){
    return nOfFloors;
}

Rectangle* ElevatorsAndFloors::assignElevator(int floor){
    Rectangle *temp=nullptr;
    for (auto it = data->begin(); it != data->end(); ++it) {

        if((*it)->getElevator()->getFloor()==floor && (*it)->getElevator()->getDoorOpen()==true ){
            temp=(*it)->getElevator();
            break;}
         if((*it)->getElevator()->isFree()){
               temp=(*it)->getElevator();
               break;
           }
     }
    return temp;
}

Rectangle* ElevatorsAndFloors::checkElevatorPosition(int floor, int elevator){
    auto l_front = data->begin();
    std::advance(l_front, elevator-1);
    if((*l_front)->getElevator()->getFloor()==floor){
        return (*l_front)->getElevator();
    }else{
        return nullptr;
    }
}

Rectangle* ElevatorsAndFloors::getElevator(int number){
    auto l_front = data->begin();
    std::advance(l_front, number-1);
    return (*l_front)->getElevator();

}

int ElevatorsAndFloors::getNoOfElevators(){
    return nOfElevators;
}

