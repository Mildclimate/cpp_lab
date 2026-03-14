#ifndef CLASSES_HPP
#define CLASSES_HPP

#include <string>

class Student
{
public:
    Student();
    ~Student();
    void printName();
    std::string name;
};

struct NextString
{

    std::string nextString;
    void printString();
};

#endif