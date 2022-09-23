#include <iostream>
#include <stdlib.h>

using namespace std;
//(5) 以下のプログラムを作成せよ。また、実行結果がどうなるか予想した後に実行せよ。

//newによってメモリが確保されたにもかかわらず、
//関数終了後に解放が行われていない。

//gccのg++によるコンパイル。実行が完了して何も起こっていないように見える。
//が、wandboxでの実行では処理が中断されてしまった。
void hoge()
{
    int* p = new int[100000];
    for(int i = 0;i < 100000;i++)
    {
        p[i] = 0;
    }
}
int main()
{
    for(int i = 0;i < 10000;i++)
    {
        hoge();
    }
    return 0;
}