#include <iostream>

template<class Iter, class Pred>
void transform(Iter first, Iter last, Pred pred) {
    while(first != last) {
        *first = pred(*first);
        ++first;
    }
}

struct twice {
    int operator()(int value) { return value * 2; }
};

int main() {
    int v[] = { 2, 4, 6, 8, 10 };
    transform(v, v + 5, twice());
    for(int i = 0;i < 5;i++) {
        std::cout << v[i] << std::endl;
    }
}