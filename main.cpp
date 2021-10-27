#include <iostream>
#include <vector>
#include "teacher.h"

//enum ParseResult
//{
//    SUCCESS = 0,
//    ERROR_OPENING_FILE = -1,
//    ERROR_READING_FILE = -3
//};

//ParseResult readFileContents()
//{
//    if (!openFile())
//        return ERROR_OPENING_FILE;
//    if (!readfile())
//        return ERROR_READING_FILE;

//    return SUCCESS; // если всё прошло успешно
//}

int main(int argc, char *argv[])
{


    Teacher vasia;
    vasia.setName(argv[1]);
    vasia.setSubject(argv[2]);
    vasia.setAge(atoi(argv[3]));
    vasia.setZp(atoi(argv[4]));
    //    Teacher taras;
    //    taras.setName("Taras");
    //    taras.setZp (19000);
    //    taras.setSubject ("Deutch");

    //    Teacher natalia;
    //    natalia.setName("Natalia");
    //    natalia.setSubject ("English");
    //    natalia.setZp (19500);

    //    Teacher orest;
    //    orest.setName("Orest");
    //    orest.setZp (22000);
    //    orest.setSubject ("French");

    std::vector <Teacher> students;
    //    students.push_back(taras);
    //    students.push_back(natalia);
    //    students.push_back(orest);
    students.push_back(vasia);
    //    for (Teacher &element: students)
    //    {
    //        std::cout <<  element.getName()  << std::endl;
    //        std::cout <<  element.getSubject()  << std::endl;
    //        std::cout <<  element.getAge() << std::endl;
    //        std::cout <<  element.getZp() << "\n" << std::endl;
    //    }
    std::ofstream out;          // поток для записи
    out.open("C:\\Users\\Natalya\\Desktop\\c++\\Classes\\newthread.txt"); // окрываем файл для записи
    if (out.is_open())
    {    for (Teacher &element: students)
        {
            out <<  element.getName()  << std::endl;
            out <<  element.getSubject()  << std::endl;
            out <<  element.getAge() << std::endl;
            out <<  element.getZp() << "\n" << std::endl;
        }
        out.close();
    }
    std::string line;

    std::ifstream in("C:\\Users\\Natalya\\Desktop\\c++\\Classes\\newthread.txt"); // окрываем файл для чтения
    if (in.is_open())
    {
        while (getline(in, line))
        {
            std::cout << line << std::endl;
        }
    }
    in.close();
}




