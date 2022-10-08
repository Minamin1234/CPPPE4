#include <iostream>
#include <vector>

using namespace std;

template<class T1,class T2>
void add(T1 src,T2 dest)
{
    dest.push_back(src);
}

int main()
{
    /*
    vector型が参照渡しとして引数を取らない場合、コンテナがコピーされる形で渡される(値渡し)
    よって、コピーされたコンテナに対してpush_backしている。
    そして、vには値は入っていないので範囲外エラー等が出る。
    */
    int x = 3;
    vector<int> v;
    add(x,v);
    cout << v[0] << endl;
    return 0;
}