#include <iostream>

class Animal
{
public:
    Animal() { }
    virtual void touched() { }
};

class Duck : public Animal
{
public:
    Duck() { }
    void touched() override {
        std::cout << "ガーガー" << std::endl;
    }
};

class Dog : public Animal
{
public:
    Dog() { }
    void touched() override {
        std::cout << "ワンワン" << std::endl;
    }
};

class Cat : public Animal
{
public:
    Cat() { }
    void touched() override {
        std::cout << "ニャーニャー" << std::endl;
    }
};

class Tiger : public Animal
{
public:
    Tiger() { }
    void touched() override {
        std::cout << "ガオ" << std::endl;
    }
};

class Human
{
public:
    Human() { }
    void touch(Animal &any){
        any.touched();
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