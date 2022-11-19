#include <iostream>
#include <stack>

int main(){
    std::stack<int> st;
    st.push(3);
    st.push(1);

    while(!st.empty()){
        std::cout << st.top() << std::endl;
        st.pop();
    }
    return 0;
}