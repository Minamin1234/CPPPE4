#include <iostream>
#include <vector>

using namespace std;

template<class T1,class T2>
void add(T1 src,T2& dest)
{
    dest.push_back(src);
}

int main()
{
    int x = 3;
    vector<int> v;
    add(x,v);
    cout << v[0] << endl;
    return 0;
}