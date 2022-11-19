#include <iostream>
#include <vector>

int main(){
    std::vector<int> v = {3,1,4,1,5,9,2,6};
    int cnt = 0;
    for(auto it = v.begin();
        (it = find(v.begin(),v.end(),1)) != v.end();it++){
            v.remove(it);
            cnt++;
        }
    std::cout << "Removed: " << cnt << std::endl;
    for(auto it = v.begin();it != v.end();it++){
        std::cout << *it << " ";
    }
    return 0;
}