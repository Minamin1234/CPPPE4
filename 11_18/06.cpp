#include <iostream>
#include <queue>

int main(){
    std::queue<int> q;
    q.push(3);
    q.push(1);

    while(!q.empty()){
        std::cout << q.front() << std::endl;
        q.pop();
    }
    return 0;
}