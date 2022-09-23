#include <iostream>
#include <string>

using namespace std;

//(9) 授業スライドp14のプログラムは省略されている。myspaceの中のf()は、"This is myspace"
//、yourspaceの中のf()は、"This is yourspace"と出力されるように、f()を完成させ、さらに、
//main()の中でそれぞれ、myspace::f()、yourspace::f()として呼び出すプログラムを作成し、実行せよ。

namespace myspace
{
    void f()
    {
        cout << "This is myspace" << endl;
    }
}

namespace yourspace
{
    void f()
    {
        cout << "This is yourspace" << endl;
    }
}

int main()
{
    myspace::f();
    yourspace::f();
    return 0;
}