//Write a c++ program to implement tower of Hanoi
#include <iostream>
using namespace std;

void towerOfHanoi(int n, char frod, char trod, char arod) {
    if (n == 0) {
        return;
    }
    towerOfHanoi(n - 1, frod, arod, trod);
    cout << "Move disk:" << n << " from rod:" << frod << " to rod:" << trod << endl;
    towerOfHanoi(n - 1, arod, trod, frod);
}

int main() {
    int n=3;
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}
