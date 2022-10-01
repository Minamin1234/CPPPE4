#include <iostream>

class sample
{
    int value_;
public:
    void setvalue(int x) { value_ = x; }
    void setvalue(const char* x) {value_ = atoi(x); }
};

int main()
{
    return 0;
}