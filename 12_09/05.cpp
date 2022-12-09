#include <iostream>
#include <vector>
#include <iterator>
#include <deque>
#include <list>

template<class InIter>
int sum(InIter first, InIter last) {
    int result = 0;
    while (first != last) {
        result += *first;
        ++first;
    }
    return result;
}

int main() {
    std::vector<int> v;
    v.push_back(2);
    v.push_back(4);
    std::cout << sum(v.begin(), v.end()) << std::endl;

    std::deque<int> q;
    q.push_back(2);
    q.push_back(4);
    std::cout << sum(q.begin(), q.end()) << std::endl;

    std::list<int> l;
    l.push_back(2);
    l.push_back(4);
    std::cout << sum(l.begin(), l.end()) << std::endl;

    std::istream_iterator<int> first(std::cin);
    std::istream_iterator<int> last;
    std::cout << sum(first, last) << std::endl;
    return 0;
}