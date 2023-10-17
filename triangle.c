#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("Enter the numer of a\n");
	scanf("%d",&a);
	printf("Enter the numer of b\n");
	scanf("%d",&b);
	printf("Enter the numer of c\n");
	scanf("%d",&c);
	
	if(a+b>c && b+c>a && c+a>b)
	{
		printf("valid triangle");
	}
	else
	{ 
		printf("invalid triangle");
		
	}
	return 0; 
	
}
