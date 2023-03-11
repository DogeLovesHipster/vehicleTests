/*
name_: string
hours_without_sleep_: int
___
Person(name: String)
AddHours(hours: int)
GetHoursWithoutSleep(): int
Sleep()
*/

#ifndef PERSON_H_
#define PERSON_H_

#include <string>

class Person
{
private:
    std::string name_ = "Person";
    int hours_without_sleep_ = 0;

public:
    Person(std::string name);
    int AddHours(int hours);
    int GetHoursWithoutSleep();
    void Sleep();
};

#endif
