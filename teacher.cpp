#include <Teacher.h>

Teacher::Teacher()
{

Teacher::getZp() const
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
};
