//write a cpp program to implement exception handeling.
#include <iostream>
#include <string>
using namespace std;
class Student{
protected:
    string name;
    int age;
    string registrationNumber;
public:
    void setDetails(string n,int a,string regNum){
        name=n;
        age=a;
        registrationNumber=regNum;
    }
    virtual void displayDetails(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Registration Number:"<<registrationNumber<<endl;
    }
};
class Undergraduate:public Student{
private:
    string course;
public:
    void setCourse(string c){
        course = c;
    }
    void displayDetails() override{
        Student::displayDetails();
        cout<<"Course:"<<course<<endl;
    }
};
class Ugraduate:public Student{
private:
    string cour;
public:
    void setcour(string c){
        cour=c;
    }
    void displayDetails() override{
        Student::displayDetails();
        cout<<"Course:"<<cour<<endl;
    }
};
int main(){
    Undergraduate student1;
    Ugraduate student2;
    student1.setDetails("Ahana Bhattacharyya",19,"AU/2023/0010491");
    student1.setCourse("Computer Science & Engineering");
    student2.setDetails("Kheya Barman",19,"AU/2023/0010056");
    student2.setcour("Computer Science & Engineering");
    Student* studentPtr;
    studentPtr=&student1;
    cout<<"Student 1 Details (Undergraduate):\n";
    studentPtr->displayDetails(); 
    cout<<"\nStudent 2 Details (Undergraduate):\n";
    studentPtr=&student2;
    studentPtr->displayDetails(); 
    return 0;
}
