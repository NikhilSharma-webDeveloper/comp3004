#include "datastructure.h"

DataStructure::DataStructure(QGraphicsScene *scene, int x, int y, int width, int height, int nOfFloors, int elevatorNumber): xAxis(x),yAxis(y), free(true)
{

  floors=new std::list<Rectangle*>();
  createFloors(scene,width,height,nOfFloors);
  createElevator(scene, width, height,nOfFloors,elevatorNumber);
}

void DataStructure::createElevator(QGraphicsScene *scene, int width, int height, int nOfFloors, int elevatorNumber){
    elevator=new Rectangle(width-10, height-10,xAxis,(height*nOfFloors),elevatorNumber+1);
    elevator->setPos(xAxis,(height*(nOfFloors-1)));
    elevator->setBackgroundColor(Qt::yellow);
    scene->addItem(elevator);
}

void DataStructure::createFloors(QGraphicsScene *scene, int width, int height, int nOfFloors){
  int startWidth=xAxis;
  int startHeight=yAxis;

  for(int i=0;i<nOfFloors;i++){
      Rectangle *temp=new Rectangle(width,height, startWidth, startHeight);
      temp->setPos(startWidth,startHeight);
      scene->addItem(temp);
      startHeight+=height;
      floors->push_back(temp);
      scene->setSceneRect(scene->sceneRect().united(temp->sceneBoundingRect()));
   }
  }


DataStructure::~DataStructure(){
    destroyFloorsAndElevator();
}


void DataStructure::destroyFloorsAndElevator(){
    delete elevator;
    for (auto it = floors->begin(); it != floors->end(); ++it) {
                delete *it;
     }

     delete floors;
}

Rectangle* DataStructure::getElevator(){
    return elevator;
}
