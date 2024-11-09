//write a cpp program to overload binary (+) operator
#include <iostream>
using namespace std;
class Complex {
private:
    float real, imag;
public:
    void setDetails() {
        cout << "Enter Real part: ";
        cin >> real;
        cout << "Enter Imaginary part: ";
        cin >> imag;
    }
    Complex operator + (const Complex& other) {
        Complex temp;
        temp.real = this->real + other.real;
        temp.imag = this->imag + other.imag;
        return temp;
    }
    void displayDetails() const {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }
};
int main() {
    Complex c1, c2, result;
    cout << "Enter details for first complex number:" << endl;
    c1.setDetails();
    cout << "Enter details for second complex number:" << endl;
    c2.setDetails();
    result = c1 + c2;
    cout << "\nResult of adding the two complex numbers:" << endl;
    result.displayDetails();
    return 0;
}
