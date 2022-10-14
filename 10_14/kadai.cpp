#include <iostream>

using std::cout;
using std::endl;
using std::cin;

class Animals
{
public:
    Animals() {}
    virtual void on_touched() {}
};

class Duck : public Animals
{
public:
    Duck() {}
    void on_touched() override
    {
        cout << "ガーガー" << endl;
    }
};

class Dog : public Animals
{
public:
    Dog() {}
    void on_touched() override
    {
        cout << "ワンワン" << endl;
    }
};

class Human : public Animals
{
public:
    Human() {}
    void touch(Animals &target)
    {
        target.on_touched();
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