#include <iostream>
#include <vector>
#include <cstring>

template<class T>
int compare(T x,T y)
{
    if(x < y) return -1;
    else if(x > y) return 1;
    return 0;
}

template<>
int compare(const char* s1,const char* s2)
{
    //文字数が等しい場合は？
    int cmp = compare(strlen(s1),strlen(s2));
    if (cmp == 0) return -1;
    return cmp;
}

int main()
{
    std::cout << compare(0,1) << std::endl;
    std::cout << compare(2,-5) << std::endl;
    std::cout << compare(10,10) << std::endl;
    std::cout << compare("hello","world") << std::endl;
    std::cout << compare("hello","hellooooo") << std::endl;
    std::cout << compare("hellooooo","hello") << std::endl;
    return 0;
}