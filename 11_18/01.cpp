#include <iostream>
#include <vector>

int main(){
    std::vector<int> v;
    v.push_back(3);
    v.insert(v.begin(),10);
    for(std::vector<int>::size_type i = 0;i < v.size();i++){
        std::cout << v[i] << std::endl;
    }
    return 0;
}