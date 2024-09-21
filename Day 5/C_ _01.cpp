//Write a C++ program to calculate the simple interest where the rate of interest has a default value of 15%.
#include <iostream>

using namespace std;
class Interest{
public:void simple(float p,float t,float r=0.15){
    float SI=p*r*t;
    cout<<"The Simple Interest is:"<<SI<<endl;
}
};
int main(){
    float a,b,c;
    cout<<"Enter the principal, time and rate:";
    cin>>a>>b>>c;
    c/=100;
    Interest i;
    i.simple(a,b);
    i.simple(a,b,c);
}
