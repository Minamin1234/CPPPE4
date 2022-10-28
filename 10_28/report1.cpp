#include <iostream>

class Animal
{
public:
    Animal() { }
    virtual void touched() { }
};

class Duck
{
public:
    Duck() { }
    void touched() {
        std::cout << "ガーガー" << std::endl;
    }
};

class Dog
{
public:
    Dog() { }
    void touched() {
        std::cout << "ワンワン" << std::endl;
    }
};

class Cat
{
public:
    Cat() { }
    void touched() {
        std::cout << "ニャーニャー" << std::endl;
    }
};

class Tiger
{
public:
    Tiger() { }
    void touched() {
        std::cout << "ガオ" << std::endl;
    }
};

class Human
{
public:
    Human() { }
    void touch(Duck t) {
        t.touched();
    }

    void touch(Dog t) {
        t.touched();
    }

    void touch(Cat t) {
        t.touched();
    }

    void touch(Tiger t) {
        t.touched();
    }
};

int main(int argc, char* argv[]) {
    Human human;
    Duck duck;
    Dog dog;
    Cat cat;
    Tiger tiger;

    human.touch(duck);
    human.touch(dog);
    human.touch(cat);
    human.touch(tiger);
    return 0;
}