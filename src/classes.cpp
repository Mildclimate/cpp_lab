#include <iostream>
#include "classes.hpp"

Student::Student()
{
    std::cout << "Student constructor called!" << std::endl;
}
Student::~Student()
{
    std::cout << "Student destructor called!" << std::endl;
}
void Student::printName()
{
    std::cout << "The name of the student is: " << name << std::endl;
}

void NextString::printString()
{
    std::cout << "The next string is: " << nextString << std::endl;
}
