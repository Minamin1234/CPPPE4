#include <iostream>
#include <vector>

using namespace std;

template<class T1,class T2>
T2 add(T1 src,T2 dest)
{
    dest.push_back(src);
    return dest;
}

int main()
{
    /*
    追加した後のコンテナを返すようにすればよい。
    */
    int x = 3;
    vector<int> v;
    v = add(x,v);
    cout << v[0] << endl;
    return 0;
}