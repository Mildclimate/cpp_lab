#include <iostream>

class Top
{
public:
    int x;
    Top()
    {
        std::cout << "Top constructor called!" << std::endl;
    };
    Top(int x) : x(1)
    {
        std::cout << "Top constructor with parameter called! x = " << x << std::endl;
    }
};

class Mid : public Top
{
public:
    Mid()
    {
        std::cout << "Mid constructor called!" << std::endl;
    };
    Mid(int x) : Top(x)
    {
        std::cout << "Mid constructor called!" << std::endl;
    }
};

class Bottom : public Mid
{
public:
    Bottom()
    {
        std::cout << "Bottom constructor called!" << std::endl;
    };
    Bottom(int x) : Mid(x)
    {
        std::cout << "Bottom constructor called!" << std::endl;
    }
};

int main()
{
    Bottom b(2);
    return 0;
}