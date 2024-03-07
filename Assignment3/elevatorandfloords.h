#ifndef ELEVATORANDFLOORDS_H
#define ELEVATORANDFLOORDS_H

#include <QGraphicsScene> // Include the necessary header for QGraphicsScene
#include <list> // Include the header for std::list
#include "Floor.h" // Assuming Floor class is defined in this header
#include "Elevator.h" // Assuming Elevator class is defined in this header

class ElevatorAndFloorDs
{
public:
    ElevatorAndFloorDs();
    void addElevatorAndFloors(int nOfEle, int nOfFloors, QGraphicsScene *scene);

private:
    std::list<Floor> floors; // Use std::list instead of just list
    Elevator elevator;
};

#endif /* ELEVATORANDFLOORDS_H */
