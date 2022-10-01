#include <iostream>

class base
{
public:
    int variable;
};

class sub1 : public virtual base {};
class sub2 : public virtual base {};

class subsub : public sub1,public sub2
{
public:
    void show()
    {
        std::cout << this->variable << std::endl;
    }
};

int main()
{

    return 0;
}