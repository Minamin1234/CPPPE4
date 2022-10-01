#include <iostream>

class base
{
public:
    virtual void print() {std::cout << "base" << std::endl; }
};

class derived : public base
{
public:
    void print() { std::cout << "derived" << std::endl; }
};

int main()
{
    derived dr;
    dr.print();
    return 0;
}