#include <iostream>
#include <string>

using namespace std;
//(2) 授業スライド p6 にあるプログラムを作成し、実行せよ。

void swap(int& x,int& y)
{
    int tmp = x;
    x = y;
    y = tmp;
}

int main()
{
    int x = 2,y = 3;
    swap(x,y);
    cout << x << " " << y << endl;
    return 0;
}