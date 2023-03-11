#include "truck.h"

Truck::Truck()
{
    WheeledVehicle(0, 0, 4);
}

// Determines if person has driven more than kMaxDrivingHours with Go method
void Truck::Go(Person &driver, int hours, int speed)
{
    int hours_without_sleep = driver.GetHoursWithoutSleep();

    if (hours > (kMaxDrivingHours - hours_without_sleep))
    {
        hours = kMaxDrivingHours - hours_without_sleep;
    }
    driver.AddHours(hours);
    WheeledVehicle::Go(driver, hours, speed - (speed * 1));
}
