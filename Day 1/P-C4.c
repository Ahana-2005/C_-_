//Write a c program to check whether a string is palindrome or not without using any library functions.
#include<stdio.h>
int main()
{
    char string[40];
    int length=0,flag=1;
    printf("Enter string:");
    gets(string);
    for(int i=0;string[i]!='\0';i++)
    {
        length++;
    }
    for(int i=0;i<length/2;i++)
    {
        if(string[i]!=string[length-1-i])
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not palindrome");
    }
    return 0;
}
