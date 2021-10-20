#include <iostream>
#include <vector>
#include "Human.h"
#include "Teacher.h"



int main()
{
    Teacher taras;
    taras. setZp (19000);
    taras. setSubject ("Deutch");
    Teacher natalia;
    natalia. setSubject ("English");
    natalia. setZp (19500);
    Teacher orest;
    orest. setZp (22000);
    orest. setSubject ("French");
    std::vector <Teacher> students;
    students.push_back(taras);
    students.push_back(natalia);
    students.push_back(orest);

    for (auto const &element: students)
    {
        std::cout <<  element. name  << std::endl;
        std::cout <<  element. getSubject()  << std::endl;
        std::cout <<  element. age << std::endl;
        std::cout <<  element. getZp() << "\n" << std::endl;
    }
}




