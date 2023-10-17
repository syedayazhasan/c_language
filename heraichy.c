#include<stdio.h>
int main()
{
	//float i = 13/4;
    //rintf("%f",i);
	//return 0;
	int i = 2; 
	int j = 3;
	int k,l;
	float a,b;
	
	k = i/j*j;
	l = j/i*i;
	a = i/j*j;
	b = j/i*i;
	
	printf(" %d\n %d\n %f\n %f\n ",k,l,a,b);
	
	return 0;
}
