#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>

int main() {
    std::stringstream ss;

    ss << "Hello, world" << std::endl;
    ss << 1 << "," << 2 << "," << 3 << std::endl;

    std::string dest = ss.str();
    return 0;
}