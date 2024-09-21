//A train is moving from Sealdah to Barasat. One of the passengers wants to go to Madhyamgram station. After a certain time, the train stop at a station. Write a c program to check whether that passenger has reached Madhyamgram or not.
#include <stdio.h>
int main()
{
    int arr[11]={1,2,3,4,5,6,7,8,9,10,11};
    int element=9;
    int count=0;
    int start=0;
    int stop=sizeof(arr)/ sizeof(int );
    while(2)
    {
        int mid=start+((stop-start)/2);
        if (arr[mid]==element)
        {
            printf("He has reached Madhyamgram.");
            break;
        }
        else if(arr[mid]>element)
        {
            stop=mid-1;
        }
        else
        {
            start=mid+1;
        }
        count++;
        if(count>stop)
        {
            printf("He boarded wrong train!");
            break;
        }
    }
}
