#include <iostream>

class Base
{
public:
    virtual void printMessage()
    {
        std::cout << "This is a message from the Base class!" << std::endl;
    }
};

class Derived : public Base
{
public:
    void printMessage() override
    {
        std::cout << "This is a message from the Derived class!" << std::endl;
    }
};

int main()
{
    Base *b = new Derived();
    b->printMessage(); // This will call the Base class's printMessage() because the
    delete b;
    return 0;
}