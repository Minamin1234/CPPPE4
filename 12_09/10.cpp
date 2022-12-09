#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = { 3, 1, 4, 1, 5 };
    std::sort(v.begin(), v.end(), std::greater<int>());

    for (auto i = 0;i < v.size(); ++i) {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}