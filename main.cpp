#include <iostream>


void print()
{
    std::cout << "Hello. Who are you? How old are you?" << std::endl;
}

void split(std::string &answer, int &age)
{
    answer.erase(0, 5);
    std::string tempAnswer;
    tempAnswer = answer;
    int i = tempAnswer.find(' ');
    tempAnswer.erase(tempAnswer.begin()+i-1, tempAnswer.end());
    int y = answer.find("I am ");
    answer.erase(0, y + sizeof ("I am"));
    answer.erase(answer.begin()+2, answer.end());
    age = atoi(answer.c_str());
    answer = tempAnswer;
}

void answer()
{
    print();
    int age = 0;
    std::string answer;
    getline(std::cin, answer);
    split(answer, age);
    std::cout << answer << " " << age << " is the best age!!!!!!!!!!!!!!";
}

int main()
{
    answer();
}
