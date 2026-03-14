#include <iostream>
#include <utility>
#include <string>

int main()
{
    std::string a = "hello world";
    std::string b = "!!!";
    // std::string &&c = std::move(a) + std::move(b);
    std::string c = static_cast<std::string &&>(a) + static_cast<std::string &&>(b);

    std::cout << "The value of c is: " << c << std::endl;
    std::cout << "The value of a is: " << a << std::endl;
    std::cout << "The value of b is: " << b << std::endl;

    return 0;
}