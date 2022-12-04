#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>

template<class Type, class Source>
Type lexial_cast(Source src) {
    std::stringstream inner;
    inner << src;
    Type dest;
    inner >> dest;
    return dest;
}

int main() {
    std::string s = lexial_cast<std::string>(120);
    int x = lexial_cast<int>("123");
    std::cout << "s: " << s << ",x: " << x << std::endl;
    return 0;
}