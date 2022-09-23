#include <iostream>

using namespace std;

//(4) 以下の入出力となるように、print_value()を作成せよ。

template<typename type> void print_value(type val)
{
    cout << val << endl;
}
/*
void print_value(int x)
{
    cout << x << endl;
}

void print_value(float x)
{
    cout << x << endl;
}

void print_value(double x)
{
    cout << x << endl;
}

void print_value(bool x)
{
    cout << x << endl;
}

void print_value(char* x)
{
    cout << x << endl;
}
*/
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