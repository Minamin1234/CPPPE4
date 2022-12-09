#include <iostream>
#include <vector>
#include <iterator>

int main() {
    std::vector<int> v;
    std::ostream_iterator<int> it(std::cout, "\n");

    for(int i = 0;i < 10;++i) {
        *it = i;
        ++it;
    }
    return 0;
}