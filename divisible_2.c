#include<stdio.h>
int main()
{
    int n;

    printf("Enter the number \n");
    scanf("%d",&n);


    if(n%5==0 || n%3==0)
    {
        if(n%15!=0)
        {
            printf("the number is divisible by 5 or 3 but not 15");
        }
         else{
            printf("The number is divisible 15");
         }
        
          
     
    }
    return 0;
}