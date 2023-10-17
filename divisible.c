
// Take a input positive integer and if tell it is divisible by 5or not.
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number\n");
	scanf("%d",&n);
	
	if(n%5==0)
	{
		printf("divisible by 5\n");
		
	}
	
	else
	{
		printf("not divisible by 5");
	}
	
	return 0;
}
