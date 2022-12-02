#include <iostream>
#include <iomanip>

int main(){
    std::cout << "Hello, world!" << std::endl;
    std::cout << std::setw(4) << std::setfill('0') << 3 << std::endl;
    return 0;
}