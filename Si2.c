#include<stdio.h>
int main()
{
	float p,rate,time ,si;
	printf("Enter the p\n");
	scanf("%f",&p);
		 
	printf("Enter the rate\n");
	scanf("%f",&rate);

	printf("Enter the time\n");
	scanf("%f",&time);
	
	si = p*rate*time/100;
	
	printf("the value of si is:%f",si);
	
	return 0;
	
	
}
