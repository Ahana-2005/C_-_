//Write a C++ program to count the number of faculties in the department and display their details. 
#include <iostream>
#include <string>
using namespace std;

class Faculty {
    static int count;
    int number;
    string name;
    float salary;
    string id;

public:
    Faculty(string name, float salary, string id) {
        this->number = ++count;
        this->name = name;
        this->salary = salary;
        this->id = id;
    }

    static int getCount() {
        return count;
    }

    void displayDetails() const {
        cout << "Faculty Number: " << number << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "Faculty ID: " << id << endl;
    }
};

int Faculty::count = 0;

int main() {
    char choice;
    Faculty* faculties[100]; 
    int index = 0;

    do {
        string name, Fac_id;
        float salary;
        cout << "\nEnter details for faculty " << index + 1 << ":" << endl;
        cout << "Name: ";
        cin.ignore(); 
        getline(cin, name);
        cout << "Salary: ";
        cin >> salary;
        cout << "Faculty ID: ";
        cin.ignore(); 
        getline(cin, Fac_id);

        faculties[index++] = new Faculty(name, salary, Fac_id);

        cout << "Do you want to add another faculty? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "\nTotal number of faculties: " << Faculty::getCount() << endl;

    cout << "\nDetails of faculties:\n" << endl;
    for (int i = 0; i < index; i++) {
        faculties[i]->displayDetails();
        cout << endl;
    }

    
    for (int i = 0; i < index; i++) {
        delete faculties[i];
    }

    return 0;
}
