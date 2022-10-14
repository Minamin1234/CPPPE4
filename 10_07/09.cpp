#include <iostream>
#include <vector>
#include <cstring>

template<class T,int N>
int size(T (&ar)[N]) { return N;}

template<class T>
int size(const T& container) { return container->size(); }

int main()
{
    int x[10];
    std::cout << size(x) << std::endl;
    /*
    コンテナの方
    std::vector<int> v = {1,2,3,4,5};
    std::cout << size(&v) << std::endl;
    */
    return 0;
}