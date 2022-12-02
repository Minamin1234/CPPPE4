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
    std::stringstream ss;

    ss << "Hello, world" << std::endl;
    ss << 1 << "," << 2 << "," << 3 << std::endl;

    std::string dest = ss.str();
    return 0;
}