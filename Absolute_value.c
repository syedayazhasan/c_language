
//  Take a integer input and find the absolute value of the integer.
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number\n");
	scanf("%d",&n);
	
	if(n<0)
	n = n*(-1);
{
	printf("The Absolute value is: %d",n);
}	
     return 0;	 
}
