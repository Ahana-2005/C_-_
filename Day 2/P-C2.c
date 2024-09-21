//Write a C program to calculate the Fibonacci series using recursion.
#include <stdio.h>
void fib(int a,int b, int n)
{
    if(n>0)
    {
        int c = a + b;
        printf("%d ", c);
        fib(b, c, n - 1);
    }
    else
        return;
}
int main()
{
    int n;
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("0 1 ");
    fib(0,1,n-2);
}
