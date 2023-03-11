#include "vehicle.h"

Vehicle::Vehicle()
{
    Vehicle(0, 0);
}

int Vehicle::GetMilesTraveled() { return miles_traveled_; }

// Increases mile_traveled_ by the number of miles traveled (determined by speed)
void Vehicle::Go(Person &driver, int hours, int speed)
{
    if (miles_traveled_ > 0 && hours > 0 && top_speed_ >= speed)
    {
        miles_traveled_ = +miles_traveled_ + (speed * hours);
    }
    else if (hours < 0)
    {
        miles_traveled_ = miles_traveled_;
    }
    else
    {
        speed = top_speed_;
        miles_traveled_ = +miles_traveled_ + (speed * hours);
    }
}

std::ostream &operator<<(std::ostream &os, Vehicle v)
{
    os << "mileage: " << v.GetMilesTraveled();
    return os;
}
