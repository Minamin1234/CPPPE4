#include <iostream>

class color
{
public:
    int red_,green_,blue_;
    color() : red_(0),green_(0),blue_(0) { }
    ~color(){}
};

int main()
{
    color cl;
    std::cout << cl.red_ << "," << cl.green_ << "," << cl.blue_ << std::endl;
    return 0;
}