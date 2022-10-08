#include <iostream>
#include <vector>
#include <cstring>

template <class T>
bool equal(T x,T y)
{
    return x == y;
}

template <>
bool equal(const char* x,const char* y)
{
    return strcmp(x,y) == 0;
}

int main()
{
    int x = 1;
    int y = 1;
    const char* s1 = "Hello";
    const char* s2 = "World!";
    std::cout << "x == y: " << equal(x,y) << std::endl;
    std::cout << "s1 == s2: " << equal(s1,s2) << std::endl;
    return 0;
}