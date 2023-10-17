
// FIND THE VOLUME OF SPHERE .
// FORMULA OF VOLUME OF SPHERE ( 4*3.14*r*r*r/3 ).

#include<stdio.h>
int main()
{
	 
	float pi = 3.1415;
	
	float r ;
	printf("Enter the value of r\n");
	scanf("%f",&r);
	
	float volume;
	
	volume =  4*pi*r*r*r/3;
	
	printf("the volume of sphere is: %f",volume);
	
	return 0;
	
	
}
