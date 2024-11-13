//Write a C++ program to hybrid inheritance with respect to the university examination system
#include<iostream>
using namespace std;
class subject{
public:
    string sub;
    subject(){
        cout<<"Enter your subject : ";
        cin>>sub;
    }
};
class gpa1:public subject{
public:
    float gp1;
    gpa1(){
        cout<<"Enter your grade point : ";
        cin>>gp1;
    }
};
class gpa2:public subject{
public:
    float gp2;
    gpa2(){
        cout<<"Enter your grade point : ";
        cin>>gp2;
    }
};
class exam:public gpa1,public gpa2{
public:
    string name;
    exam(){
        cout<<"Enter your name >> "<<endl;
        cin>>name;
    }
    void display(){
        cout<<"Student : "<<name<<endl;
        cout<<"Subject 1 : "<<gpa1::sub<<"  Grade point :"<<gp1<<endl;
        cout<<"Subject 2 : "<<gpa2::sub<<"  Grade point :"<<gp2<<endl;
    }
};
int main(){
    exam x;
    x.display();
}
