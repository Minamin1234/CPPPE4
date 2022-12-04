#include <iostream>

class person 
{
public:
    std::string name;
    int age;
    person(const std::string& s, int n) : name(s), age(n) {}
    friend std::ostream& operator<<(std::ostream& os, person& x) {
        os  << x.name << ":" << x.age << std::endl;
    }
};

int main() {
    person x("Mike", 25);
    std::cout << x << std::endl;
    return 0;
}