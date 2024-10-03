//Write a c++ program to implement the constructor,copy constructor,default constructor, parameterised constructor, destructor,constructor with default arguments in one program.
#include <iostream>
using namespace std;

class Example {
private:
    int value;
public:
    Example() : value(0) {
        cout << "Default constructor called, value = " << value << endl;
    }
    Example(int v) : value(v) {
        cout << "Parameterized constructor called, value = " << value << endl;
    }
    Example(int v, bool flag) : value(flag ? v : 0) {
        cout << "Constructor with default arguments called, value = " << value << endl;
    }
    Example(const Example &obj) : value(obj.value) {
        cout << "Copy constructor called, value = " << value << endl;
    }
    ~Example() {
        cout << "Destructor called, value = " << value << endl;
    }
    void display() const {
        cout << "Value: " << value << endl;
    }
};
int main() {
Example obj1; 
Example obj2(10);
Example obj3(20, true); 
Example obj4 = obj2;
obj1.display();
obj2.display();
obj3.display();
obj4.display();
return 0;
}
