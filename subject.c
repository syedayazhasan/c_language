#include<stdio.h>
int main()
{   
    float sub1,sub2,sub3,sub4,sub5,sum,percentage;
    
    printf("Enter the sub1\n");
    scanf("%f",&sub1);
    
	printf("Enter the sub2\n");
	scanf("%f",&sub2);
	
	printf("Enter the sub3\n");
	scanf("%f",&sub3);
	
	printf("Enter the sub4\n");
	scanf("%f",&sub4);
	
    printf("Enter the sub5\n");
	scanf("%f",&sub5);
	
	sum = sub1+sub2+sub3+sub4+sub5;
	percentage = (sub1+sub2+sub3+sub4+sub5)/5;
	printf("the sum is %.1f and the percentage is %.2f",sum,percentage);
	return 0;
}
