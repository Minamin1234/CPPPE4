#include <iostream>
#include <string>

using namespace std;

//(10) (9)のプログラムにおいて、usingキーワードを用いて、
//myspace::f()を単にf()として呼び出せるようにせよ。

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

using namespace myspace;

int main()
{
    f();
    return 0;
}