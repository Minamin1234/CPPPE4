#include <iostream>
#include <string>

using namespace std;

//(4) 以下の入出力となるように、print_value()を作成せよ。

template<typename type> void print_value(type val)
{
    cout << val << endl;
}

int main()
{
    /*
    10
    10.5
    1
    test
    */
    print_value(10);
    print_value(10.5);
    print_value(true);
    print_value("test");
    return 0;
}