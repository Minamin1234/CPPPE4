#include <iostream>
#include <vector>

template <class T>
T plus(T x) { return (x+1);}

template <class T>
void print(T value) { std::cout << value << std::endl;}

int main()
{
    int x = plus<int>(1);
    print(x);
    double y = plus(1.5);
    print(y);
    return 0;
}