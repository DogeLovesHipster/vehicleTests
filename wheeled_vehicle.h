// Wheeled Vehicle header file
// has_flat_ newly instantiated, initally false
// Go method should have no effect if has_flat_ = true
// FixFlat should change has_flat_ to false

#ifndef WHEELED_VEHICLE_H_
#define WHEELED_VEHICLE_H_

#include "vehicle.h"

class WheeledVehicle : public Vehicle
{
private:
    int num_wheels_;

protected:
    bool has_flat_ = false;

public:
    WheeledVehicle();
    WheeledVehicle(int miles_traveled, int top_speed, int num_wheels) : Vehicle(miles_traveled, top_speed)
    {
        num_wheels_ = num_wheels;
    };
    int GetNumWheels();
    bool GetHasFlat();
    void PopTire();
    void FixFlat();
    void Go(Person &driver, int hours, int speed);
};

#endif
