#include <iostream>
#include <string>

using namespace std;

//(1) 以下のプログラムを作成せよ。また、実行結果がどうなるか予想した後に、実行せよ。

//どちらの引数も参照渡しではないので、引数として取った変数には反映されない。
void swap(int a,int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    int x = 2,y = 3;
    swap(x,y);
    cout << x << " " << y << endl;
    return 0;
}