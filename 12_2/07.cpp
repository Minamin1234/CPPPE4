#include <iostream>
#include <iomanip>
#include <fstream>

int main() {
    std::ifstream fin("input.txt");
    std::string buffer;

    while(getline(fin, buffer)) {
        std::cout << buffer << std::endl;
    }
    fin.close();
    return 0;
}