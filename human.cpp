#include "human.h"











Human::Human()
{
    age=0;
}

int Human::getAge() const
{
    return age;
}

void Human::setAge(int newAge)
{
    age = newAge;
}

const std::string &Human::getName() const
{
    return name;
}

void Human::setName(const std::string &newName)
{
    name = newName;
}
