#include <iostream>
#include <iomanip>
#include <fstream>

int main() {
    std::ifstream fin("input.txt");
    std::ofstream fout("output.txt");

    char c;
    while (fin >> c) fout << c << std::endl;

    fin.close();
    fout.close();
    return 0;
}