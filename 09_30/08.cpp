#include <iostream>

class base 
{
public:
    int variable;
};

class sub1 : public base {};
class sub2 : public base {};

class subsub : public sub1,public sub2
{
public:
    void show()
    {
        //subsub::variableがあいまいです。
        std::cout << this->variable << std::endl;
    }
};

int main()
{
    return 0;
}