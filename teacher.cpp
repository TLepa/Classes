#include "teacher.h"



Teacher::Teacher()
{
    zp=0;
}

int Teacher::getZp() const
{
    return zp;
}

void Teacher::setZp(int newZp)
{
    zp = newZp;
}

const std::string &Teacher::getSubject() const
{
    return subject;
}

void Teacher::setSubject(const std::string &newSubject)
{
    subject = newSubject;
}
//Задание-данніе приходят с консоли через комнад лайн парсер
