#include <iostream>
#include <vector>
#include <list>

template<class InIter>
int count(InIter first, InIter last) {
    return std::distance(first, last);
}

int main() {
    std::vector<int> v;
    v.push_back(3);
    v.push_back(1);
    std::cout << count(v.begin(), v.end()) << std::endl;

    std::list<int> l;
    l.push_back(3);
    l.push_back(1);
    std::cout << count(l.begin(), l.end()) << std::endl;
    return 0;
}