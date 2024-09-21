//On a sunny day, in B-Tech CSE Section C, XYZ sir has entered the class and checked whether Akash Kumar is present or not. Write a c program for it.
#include <stdio.h>
int main()
{
    int arr[] ={23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,
                57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,
                91,92,93,94,95,96};
    int element = 39;
    int count = 0;
    int start = 0;
    int stop = sizeof(arr) / sizeof(int);
    while (2) {
        int mid = start + ((stop - start) / 2);
        if (arr[mid] == element)
        {
            printf("Akash is present.");
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
            printf("Akash is absent");
            break;
        }
    }
}
