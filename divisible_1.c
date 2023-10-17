#include<stdio.h>
int main()
{
    int n;

    printf("Enter the number \n");
    scanf("%d",&n);


    if(n%5==0)
    {
         if(n%3==0)
         {
            printf(" the number is divisible by 5 or 3\n");
         }

        else
         {
        printf("not valid");
         }
     
    }
    //else if(n%3==0)
     // {
     //   printf("the number is divisible by 3");
      //}
     return 0;
}