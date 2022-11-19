#include <iostream>
#include <list>

int main(){
    std::list<int> l;
    l.push_back(3);
    l.push_front(10);
    for(std::list<int>::iterator it = l.begin();
        it != l.end();++it){
            std::cout << *it << std::endl;
        }
    return 0;
}