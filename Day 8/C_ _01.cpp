//write a cpp program to implement virtual function.
#include <iostream>
using namespace std;
class Animal {
public:
    virtual void sound() {
        cout << "Btech CSE" << endl;
    }
};
class Dog : public Animal {
public:
    void sound() override {
        cout << "Ahana Bhattacharyya" << endl;
    }
};
class Cat : public Animal {
public:
    void sound() override {
        cout << "Section C" << endl;
    }
};

int main() {
    Animal* animalPtr;
    Dog dog;
    Cat cat;
    animalPtr = &dog;
    animalPtr->sound();
    animalPtr = &cat;
    animalPtr->sound(); 

    return 0;
}

