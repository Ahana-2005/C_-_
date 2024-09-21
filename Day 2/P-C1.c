//Write a C program which will add two distance given in feet and inches using structures.If the inches sum is >12, the feet sum will add by one and the inches sum will reduce by 12.
#include<stdio.h>

int main()
{
	struct distance
	{
		int inches;
		int feet;
	};
	struct distance d1,d2,d3;
  printf("Enter the two distances in feet:\n");
  scanf("%d %d",&d1.feet,&d2.feet);
  printf("Enter the two distances in inches:\n");
  scanf("%d %d",&d1.inches,&d2.inches);
  d3.feet=d1.feet+d2.feet;
  d3.inches=d1.inches+d2.inches;
    if(d3.inches>12)
    {
    	d3.feet++;
    	d3.inches-=12;
	}
	printf("The value in feet:%d\n",d3.feet);
	printf("The value in inches:%d\n",d3.inches);
     
}
