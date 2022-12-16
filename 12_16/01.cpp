#include <iostream>
#include <vector>
#include <iterator>

int main() {
    std::vector<int> v = { 3, 1, 4, 1, 5};
    std::vector<int> dest(5);

    std::copy(v.begin(), v.end(), dest.begin());

    int array[5] = {};
    std::copy(v.begin(), v.end(), array);
    
    std::copy(array, array + 5, std::ostream_iterator<int>(std::cout, " "));
    return 0;
}