#include <iostream>

class color
{
public:
    int red_,green_,blue_;
    color()
    {
        this->red_ = 0;
        this->green_ = 0;
        this->blue_ = 0;
    }
    ~color(){}
};

int main()
{
    color cl;
    std::cout << cl.red_ << "," << cl.green_ << "," << cl.blue_ << std::endl;
    return 0;
}