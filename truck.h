// Truck header file
// Modified go to only allow person to drive if they hav not driven more than kMaxDrivingHours
// If requested number of hours exceeds kMaxDrivingHours, then only drive remaining hours
// Add number of hours driven in the Go method of the Truck class

#ifndef TRUCK_H_
#define TRUCK_H_

#include "wheeled_vehicle.h"

class Truck : public WheeledVehicle
{
public:
    Truck();

    static const int kMaxDrivingHours = 10;

    Truck(int miles_traveled, int top_speed) : WheeledVehicle(miles_traveled, top_speed, 4){};

    void Go(Person &driver, int hours, int speed);
};

#endif
