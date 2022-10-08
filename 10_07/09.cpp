#include <iostream>
#include <vector>
#include <cstring>

template<class T,int N>
int size(T (&ar)[N]) { return N;}

template<class T>
int size(const T& container) { return container.size(); }

int main()
{
    int x[10];
    std::cout << size(x) << std::endl;
    return 0;
}