

#include <iostream>
#include <vector>

class Human
{
    int age;
    std::string name;
};

class Teacher : public Human
{
public:
    int getZp() const;
    void setZp(int newZp);

    const std::string &getSubject() const;
    void setSubject(const std::string &newSubject);

private:
    int zp;
    std::string subject;
};

int main()
{
    Teacher taras;
    taras.setZp(19000);
    taras.setSubject("Deutch");
    Teacher natalia;
    natalia.setSubject("English");
    natalia.setZp(19500);

    Teacher orest;
    orest.setZp(22000);
    orest.setSubject("French");
    std::cout<<taras.getZp()<<std::endl;
    std::cout<<natalia.getZp()<<std::endl;
    std::cout<<orest.getZp()<<std::endl;
    std::cout<<taras.getSubject()<<std::endl;
    std::cout<<natalia.getSubject()<<std::endl;
    std::cout<<orest.getSubject()<<std::endl;

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
