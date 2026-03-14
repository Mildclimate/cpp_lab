#include <memory>
#include <iostream>

// user defined types
class UDF
{
public:
    UDF()
    {
        std::cout << "UDF constructor called!" << std::endl;
    };
    ~UDF()
    {
        std::cout << "UDF destructor called!" << std::endl;
    };
};

int main()
{
    std::shared_ptr<UDF> ptr1 = std::make_shared<UDF>();
    {
        std::shared_ptr<UDF> ptr2 = ptr1;
        std::cout << "the ref count is: " << ptr1.use_count() << std::endl;
        // ptr2 will be destroyed at the end of this block, and the ref count will decrease by 1
    }
    std::cout << "the ref count is: " << ptr1.use_count() << std::endl;
    return 0;
}