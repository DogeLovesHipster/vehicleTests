#include <string>

#include "person.h"

Person::Person(std::string name) { return; }

int Person::AddHours(int hours_) { return hours_; }

int Person::GetHoursWithoutSleep() { return hours_without_sleep_; }

void Person::Sleep() { return; }
