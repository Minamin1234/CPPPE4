#include <iostream>

class base
{
public:
    int foo_;
    int bas_;
    int bar_;
private:
};

class derived : public base
{
public:
    void func()
    {
        foo_ = 1;
        bar_ = 2;
        bas_ = 3;
    }
};

int main()
{
    derived dv;
    dv.func();
    std::cout << dv.foo_ << "," << dv.bar_ << "," << dv.bas_ << std::endl;

    derived *e = new derived();
    (*e).func();
    std::cout << e->foo_ << "," << e->bar_ << "," << e->bas_ << std::endl;
    return 0;
}