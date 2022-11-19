#include <iostream>
#include <vector>
#include <deque>

int main(){
    std::deque<int> q;
    q.push_back(3);
    q.push_back(10);
    for(std::deque<int>::size_type i = 0;i < q.size();++i){
        std::cout << q[i] << std::endl;
    }
    return 0;
}