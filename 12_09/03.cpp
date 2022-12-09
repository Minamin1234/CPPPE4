#include <iostream>
#include <vector>
#include <iterator>

int main() {
    std::vector<int> v;
    std::back_insert_iterator<std::vector<int>> it(v);
    
    *it = 3; ++it;
    *it = 1; ++it;
    *it = 4; ++it;

    for (auto it = v.begin();
        it != v.end(); ++it) {
            std::cout << *it << ' ';
        }
    return 0;
}