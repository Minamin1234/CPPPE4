#include <iostream>
#include <vector>

using namespace std;

template <class T>
T MAX(T x,T y)
{
    return x < y ? y : x;
}

int main()
{
    int a = 3;
    int b = 3;

    cout << MAX(a,b) << endl;
    return 0;
}