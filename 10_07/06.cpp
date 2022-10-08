#include <iostream>
#include <vector>
#include <cstring>

template<class T>
class printer
{
public:
    void out(T value) { std::cout << value << std::endl; }

    template<class U>
    void convert(U value) { std::cout << value << std::endl;}
};

int main()
{
    printer<int> p;
    p.out(3);

    p.convert<double>(3.5);
    return 0;
}