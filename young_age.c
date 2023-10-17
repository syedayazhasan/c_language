#include<stdio.h>
int main()
{
    int ram,sham,ajay;
    printf("Enter the age of ram\n");
    scanf("%d",&ram);
    printf("Enter the age of sham\n");
    scanf("%d",&sham);
    printf("Enter the age of ajay\n");
    scanf("%d",&ajay);

    if(ram<sham && ram<ajay )
    {
        printf("ram is a younger\n");
    }
    else if(sham<ajay && sham<ram)
    {
        printf("sham is younger\n");
    }
    else if(ajay<sham&& ajay<ram)
   {
       printf("ajay is younger\n");
   }
      return 0;
}