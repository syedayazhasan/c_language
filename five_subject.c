
// FIND THE PERCENTAGE OF FIVE SUBJECTS.

#include<stdio.h>
int main()
{

   float physics;
   printf("Enter the number of physics\n");
   scanf("%f",&physics);
   
   float maths;
   printf("Enter the number of maths\n");
   scanf("%f",&maths);
   
   float chemistry;
   printf("Enter the number of chemistry\n");
   scanf("%f",&chemistry);
   
   float English;
   printf("Enter the number of English\n");
   scanf("%f",&English);
   
   float Hindi;
   printf("Enter the number of Hindi\n");
   scanf("%f",&Hindi);
   
   // formula 
   float percentage = physics+maths+chemistry+English+Hindi/5;
  
  printf("the percentage of five subjects: %f",percentage);
  
  return 0;	
	
}
