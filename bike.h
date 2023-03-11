// Bike header file
// Bike constructor should only allow 2 wheels

#ifndef BIKE_H_
#define BIKE_H_

#include "wheeled_vehicle.h"

class Bike : public WheeledVehicle
{
public:
    Bike(int miles_traveled, int top_speed) : WheeledVehicle(miles_traveled, top_speed, 2) {}
};

#endif
