#include <iostream>

class color
{
public:
    int red_,green_,blue_;
    color(int r,int g,int b) : red_(r),green_(g),blue_(b) {}
    ~color(){}
};

int main()
{
    color cl(1,1,1);
    std::cout << cl.red_ << "," << cl.green_ << "," << cl.blue_ << std::endl;
    return 0;
}