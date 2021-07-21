#include <iostream>
#include <string>


void print()
{
    std::cout << "Hello. Who are you?" << std::endl;
}

void answer()
{
    std::string name;
    int age;
    print();
    std::cin >> name;
    std::cout << "How are you old?" << std::endl;
    std::cin >>  age;
    std::cout << name << " ," <<age<< " is the best age!!!!!!!!!!!!!!"  <<std::endl;
}

int main()
{
    answer();
}
