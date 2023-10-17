#include<stdio.h>
int main()
{
	int l;
	printf("Enter the length\n");
	scanf("%d",&l);
	
	int b;
	printf("Enter the breadth\n");
	scanf("%d",&b);
	
	int a;
	int p;
	
	// Area of a rectangle.
	  
	a = l*b;
	printf("area of rectangle:%d\n",a);
	
    //	perameter of a rectangle.
	p = 2*(l+b);
	
	printf("perameter of rectangle:%d\n",p);
	
	if(a>p)
   {
   	printf("Area of rectangle is grater than of perameter");
   }
	
    return 0; 
	
}
