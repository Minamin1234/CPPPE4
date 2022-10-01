#include <iostream>

class base
{
public:
    void print() {std::cout << "base" << std::endl; }
};

class derived : public base
{
public:
    void print() override { std::cout << "derived" << std::endl; }
};

int main()
{
    return 0;
}
//error: only virtual member functions can be marked 'override'