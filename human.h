#ifndef HUMAN_H
#define HUMAN_H
#include<string>
#include <iostream>
#include <fstream>


class Human
{
public:
Human();
    int getAge() const;
    void setAge(int newAge);

    const std::string &getName() const;
    void setName(const std::string &newName);

private:
    int age;
    std::string name;
};
#endif // HUMAN_H
