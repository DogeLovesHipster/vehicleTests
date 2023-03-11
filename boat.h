// Boat header file
// Extra private class that takes name_ of boat that stores name of boat

#ifndef BOAT_H_
#define BOAT_H_

#include <string>
#include "vehicle.h"

class Boat : public Vehicle
{
private:
    std::string name_;

public:
    Boat(std::string name, int miles_traveled, int top_speed) : Vehicle(miles_traveled, top_speed), name_(name) {}
    std::string GetName();
    void SetName(std::string name_);
};

#endif
