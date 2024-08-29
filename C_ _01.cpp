//Write a c++ program to implement ATM management system.
#include <iostream>
using namespace std;
class ATM{
private:
    long ac_no=132534298709;
    int balance=1246379;
    char name[6]="Ahana";
    int pin=12345;
    void withdraw(){
        int amt;
        cout<<"Amount to be withdrew is:";
        cin>>amt;
        balance-=amt;
        cout<<"The amount is withdrawn."<<endl;
    }
    void transfer(){
        int amt;
        cout<<"Amount to be transferred is:";
        cin>>amt;
        int ch;
        cout<<"1.Credit"<<endl<<"2.Debit"<<endl;
        cout<<"Your Choice:"<< endl;
        cin>>ch;
        switch (ch) {
            case 1:
                balance+=amt;
                cout<<"The amount is credited."<<endl;
                break;
            case 2:
                balance-=amt;
                cout<<"The amount is debited."<<endl;
                break;
            default:
                cout<<"ERROR."<<endl;
        }
    }
    void viewbalance(){
        cout<<"The Final balance is:"<<balance<<endl;
    }
public:
    void pin_(){
        int p;
        cout<<"Enter pin:";
        cin>>p;
        if (p==pin){
            while (1) {
                int c;
                cout << "1.Withdraw" << endl << "2.View Balance"<< endl << "3.Transfer" << endl << "4.Exit" << endl;
                cout << "Enter Choice:";
                cin >> c;
                switch (c) {
                    case 1:
                        withdraw();
                        break;
                    case 2:
                        viewbalance();
                        break;
                    case 3:
                        transfer();
                        break;
                    case 4:
                        cout << "END!";
                        exit(0);
                    default:
                        cout << "ERROR!" << endl;
                }
            }
        }
    }
    void display(){
        cout << "Account number:" << ac_no <<endl<< "Name:" << name << endl;
    }
};
int main(){
    ATM a;
    a.display();
    a.pin_();
}