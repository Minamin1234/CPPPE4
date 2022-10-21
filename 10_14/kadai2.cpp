#include <iostream>

using std::cout;
using std::endl;
using std::cin;

class Duck
{
public:
    Duck() { }
    void touched()
    {
        cout << "ガーガー" << endl;
    }
};

class Dog
{
public:
    std::string phrase;
    Dog() { }
    void touched()
    {
        cout << "ワンワン" << endl;
    }
};

class Human
{
public:
    Human() {}
    template<class T> void touch(T any)
    {
        any.touched();
    }
};

int main()
{
    Human human;
    Duck duck;
    Dog dog;

    human.touch(duck);
    human.touch(dog);

    return 0;
}