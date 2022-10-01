#include <iostream>

class base
{
public:
    int foo_;
    int bas_;
protected:
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
    
    return 0;
}