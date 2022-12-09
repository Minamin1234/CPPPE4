#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

int main() {
    std::vector<int> v = { 3, 1, 4, 1, 5 };
    int c = std::count_if(v.begin(), v.end(),
            std::bind2nd(std::greater<int>(), 3));
    std::cout << c << std::endl;

    return 0;
}