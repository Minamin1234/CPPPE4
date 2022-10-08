#include <iostream>
#include <vector>
#include <cstring>

int main()
{
    int x[11];
    std::cout << sizeof(x) / sizeof(x[0]) << std::endl;
    return 0;
}