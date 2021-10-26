#include <iostream>
#include <vector>
#include "teacher.h"



int main()
{
    Teacher taras;
    taras.setName("Taras");
    taras.setZp (19000);
    taras.setSubject ("Deutch");

    Teacher natalia;
    natalia.setName("Natalia");
    natalia.setSubject ("English");
    natalia.setZp (19500);

    Teacher orest;
    orest.setName("Orest");
    orest.setZp (22000);
    orest.setSubject ("French");

    std::vector <Teacher> students;
    students.push_back(taras);
    students.push_back(natalia);
    students.push_back(orest);

    for (Teacher &element: students)
    {
        std::cout <<  element.getName()  << std::endl;
        std::cout <<  element.getSubject()  << std::endl;
        std::cout <<  element.getAge() << std::endl;
        std::cout <<  element.getZp() << "\n" << std::endl;
    }
}




