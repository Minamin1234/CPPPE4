#include <iostream>

class color
{
private:
    int red_,green_,blue_;
public:
    color() : red_(0),green_(0),blue_(0) { }
    color(int r,int g,int b) : red_(r),green_(g),blue_(b){}
    int GetR() {return this->red_;};
    int GetG() {return this->green_;}
    int GetB() {return this->blue_;}
    ~color(){}
};

int main()
{
    color cl(10,20,30);
    std::cout << cl.GetR() << "," << cl.GetG() << "," << cl.GetB() << std::endl;
    return 0;
}