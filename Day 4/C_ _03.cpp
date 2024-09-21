//Write a c++ program to calculate the average of 5 subjects of 10 students from 2 different sections
#include<iostream>
using namespace std;
class secB;
class secA{
    int a[5][10];
public:
    void getmarks()
    {
        cout<<"SECTION A"<<endl;
        for(int i=0;i<5;i++)
        {
            cout<<"Enter marks for Maths, computer,dsa,english & biology for student"<<i+1<<": ";

            for(int j=0;j<10;j++)
            {
                int n;
                cin>>n;
                a[i][j]=n;
            }
        }

    }
    friend void avg(secA,secB);
};
class secB{
    int a[5][10];
public:
    void getmarks()
    {
        cout<<"SECTION B"<<endl;
        for(int i=0;i<5;i++)
        {
            cout<<"Enter marks for Maths, computer,dsa,english & biology for student"<<i+1<<": ";

            for(int j=0;j<10;j++)
            {
                int n;
                cin>>n;
                a[i][j]=n;
            }
        }

    }
    friend void avg(secA,secB);
};
void avg(secA x,secB y)
{
    int sum[5][10];int average[5][10];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<10;j++)
        {
            sum[i][j]=x.a[i][j]+y.a[i][j];
            average[i][j]=sum[i][j]/2;
        }
    }
    cout<<"AVERAGE MARKS OF BOTH THE CLASSES ARE: "<<endl;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<10;j++)
        {
            cout<<average[i][j]<<"	";

        }
        cout<<endl;
    }
}
int main()
{
    secA x;
    secB y;
    x.getmarks();
    y.getmarks();
    avg(x,y);
}
