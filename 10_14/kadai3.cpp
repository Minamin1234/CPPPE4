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
    void touch(Duck &dk)
    {
        dk.touched();
    }

    void touch(Dog &dg)
    {
        dg.touched();
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