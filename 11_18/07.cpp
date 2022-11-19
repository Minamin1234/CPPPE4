#include <iostream>
#include <vector>
#include <deque>
#include <list>

int main(){
    std::deque<int> q;
    q.push_back(3);
    q.push_back(10);
    for(std::deque<int>::size_type i = 0;i < q.size();++i){
        std::cout << q[i] << std::endl;
    }
    for(std::deque<int>::iterator it = q.begin();
        it != q.end();++it){
            std::cout << *it << std::endl;
        }

    std::vector<int> v = {3,1,4,1,5};

    v.push_back(9);
    v.push_back(2);

    for(std::vector<int>::size_type i = 0;i < v.size();i++){
        std::cout << v[i] << ", ";
    }
    for(std::vector<int>::iterator it = v.begin();
        it != v.end();++it){
            std::cout << *it << std::endl;
        }

    std::list<int> l;
    l.push_back(3);
    l.push_front(10);
    for(std::list<int>::iterator it = l.begin();
        it != l.end();++it){
            std::cout << *it << std::endl;
        }
    return 0;
}