#include "datastructure.h"

DataStructure::DataStructure(QGraphicsScene *scene, int x, int y, int width, int height, int nOfFloors): xAxis(x),yAxis(y)
{
  createElevator(scene, width, height);
  floors=new std::list<Rectangle*>();
  createFloors(scene,width,height,nOfFloors);
}

void DataStructure::createElevator(QGraphicsScene *scene, int width, int height){
    elevator=new Rectangle(width, height,xAxis,yAxis);
    elevator->setPos(xAxis,yAxis);
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
      qDebug() << "Done with these";
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
