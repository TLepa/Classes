#include <iostream>
#include <string>
std::string name;
int age;

void print()
{
std::cout << "Hello. Who are you?" << std::endl;
}

void answer()
{
    print();
    std::cin >> name;
    std::cout << "How are you years old?" << std::endl;
    std::cin>>age;
    std::cout<<name +" ,"<<age<< " is the best age!!!!!!!!!!!!!!"<<std::endl;
}

int main()
{
answer();
}
