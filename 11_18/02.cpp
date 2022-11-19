#include <iostream>
#include <vector>

int main(){
    std::vector<int> v = {3,1,4,1,5};

    v.push_back(9);
    v.push_back(2);

    for(std::vector<int>::size_type i = 0;i < v.size();i++){
        std::cout << v[i] << ", ";
    }
    return 0;
}