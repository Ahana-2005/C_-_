//Write a c++ program to implement reversed floyed triangle.
#include <iostream>

using namespace std;
class floyed{
public:void triangle(int N){
    int count=N*(N+1)/2;
        for (int i = 0; i < N; i++) {
            for (int j = i; j >=0 ; j--) {
                cout<<count--<<" ";
            }
            cout<<endl;
        }
}
};
int main(){
    floyed f;
    int n=4;
    f.triangle(n);
}
