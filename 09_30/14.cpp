#include <iostream>

class RGB
{//private
    int R,G,B;
    RGB() : R(0),G(0),B(0) {}
    RGB(int r,int g,int b) : R(r),G(g),B(b) {}
};

struct rgb
{//public
    int R,G,B;
    rgb() : R(0),G(0),B(0) {}
    rgb(int r,int g,int b) : R(r),G(g),B(b) {}
};

int main()
{
    //RGB(int r,int g,int b)にアクセスできません。
    RGB c(10,10,10);
    rgb s(1,2,3);
    return 0;
}