#ifndef HUMAN_H
#define HUMAN_H

#endif // HUMAN_H



class Human
{
public:
    Human();
    ~Human();

int Human::getAge() const
{
    return age;
}

void setAge(int newAge)
{
    age = newAge;
}
private:
int age;
std::string name;
};
