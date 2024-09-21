//Write a C program to access array elements using pointers.
#include <stdio.h>
int main() {
	int n;
	printf("Enter the number of array elements:\n");
	scanf("%d",&n);
	
    int data[n];
    

    printf("Enter elements: ");
    for (int i = 0; i < n; ++i){
        scanf("%d", data + i);
     }

    printf("The elements entered are: \n");
    for (int i = 0; i < n; ++i)
      {
        printf("%d\n", *(data + i));
       }
      return 0;
  }
