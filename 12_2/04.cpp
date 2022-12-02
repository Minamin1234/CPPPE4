#include <iostream>
#include <iomanip>

int main() {
    std::cout << std::fixed << 123.456 << std::endl;
    std::cout << std::scientific << 123.456 << std::endl;
    return 0;
}