// Vehicle header file
// Vehicle takes two arguments: miles_traveled and top_speed
// Go takes three arguments: Person &driver, int_hours, and int_speed

#ifndef VEHICLE_H_
#define VEHICLE_H_

#include <sstream>
#include "person.h"

class Vehicle
{
protected:
    int miles_traveled_;

private:
    int top_speed_;

public:
    Vehicle();
    Vehicle(int miles_traveled, int top_speed) : miles_traveled_(miles_traveled), top_speed_(top_speed) {}
    int GetMilesTraveled();
    void Go(Person &driver, int hours, int speed);

    friend std::ostream &operator<<(std::ostream &os, Vehicle v);
};

#endif
