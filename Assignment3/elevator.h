#ifndef ELEVATOR_H
#define ELEVATOR_H

#include "rectangle.h"

class Elevator
{
public:
    Elevator();
    Rectangle *elevator;

private:
    int floor;
    bool direction; //false for down and true for up

};

#endif // ELEVATOR_H
