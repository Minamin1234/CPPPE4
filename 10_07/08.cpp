#include <iostream>
#include <vector>
#include <cstring>

template<class T>
class printer
{
public:
    void out(T value) { std::cout << value << std::endl; }
};

template<class T>
class printer<T*>
{
public:
    void out(T* value) { std::cout << *value << std::endl; }
};

int main()
{
    int a = 10;
    int b = 100;
    int *p = &b;
    printer<int> pr;
    std::cout << "a: ";
    pr.out(a);
    std::cout << "b: ";
    pr.out(b);
    
    printer<int*> ppr;
    std::cout << "*p: ";
    ppr.out(p);
    return 0;
}