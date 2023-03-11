#include "wheeled_vehicle.h"
#include "vehicle.h"

WheeledVehicle::WheeledVehicle()
{
    Vehicle(0, 0);
    num_wheels_ = 0;
}

int WheeledVehicle::GetNumWheels() { return num_wheels_; }

bool WheeledVehicle::GetHasFlat() { return has_flat_; }

void WheeledVehicle::PopTire() { has_flat_ = true; }

void WheeledVehicle::FixFlat() { has_flat_ = false; }

// hours and speed become 0 if the vehicle has a flat
void WheeledVehicle::Go(Person &driver, int hours, int speed)
{
    if (has_flat_ == true)
    {
        Vehicle::Go(driver, 0, 0);
    }
    else
    {
        Vehicle::Go(driver, hours, speed);
    }
}
