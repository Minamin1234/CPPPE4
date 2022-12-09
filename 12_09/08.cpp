#include <iostream>

class functor {
public:
    void operator()(int value) {
        std::cout << value << std::endl;
    }
};

int main() {
    functor f;
    f(3);
    return 0;
}