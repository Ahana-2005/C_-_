//Write a c++ program to implement shopping list.
#include<iostream>
using namespace std;
const int n=50;
class items{
private:
    int item_code[n];
    float item_price[n];
    int count;
public:
    void cnt(){
        count=0;
    }
    void getitem(){
        cout<<"Enter item code:";
        cin>>item_code[count];
        cout<<"Enter item price:";
        cin>>item_price[count];
        count++;
    }
    void displaysum(){
        float sum=0;
        for(int i=0;i<count;i++) {
            sum+=item_price[i];
        }
        cout<<"\nTotal Sum:"<<sum<<endl;
    }
    void remove(){
        int a;
        cout<<"Enter item code to be deleted:";
        cin>>a;
        for(int i=0;i<count;i++) {
            if(item_code[i]==a)
                item_price[i]=0;
        }
        cout<<"The item is removed"<<endl;
    }
    void display(){
        cout<<"\nCode   Price\n";
        for(int i=0;i<count;i++){
            cout<<"\n"<<item_code[i];
            cout<<"  "<<item_price[i];
        }
        cout<<endl;
    }
};
int main(){
    items x;
    x.cnt();
    while(1){
        int c;
        cout<<"1.Add item"<<endl<<"2.Display total value"<<endl<<"3.Delete an item"<<endl<<"4.Display bill"<<endl<<"5.Exit"<<endl<<"Enter Choice:";
        cin>>c;
        switch(c){
            case 1:
                x.getitem();
                break;
            case 2:
                x.displaysum();
                break;
            case 3:
                x.remove();
                break;
            case 4:
                x.display();
                break;
            case 5:
                cout<<"END!";
                exit(0);
            default:
                cout<<"ERROR!"<<endl;
        }
    }
}
