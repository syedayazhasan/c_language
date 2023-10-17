#include<stdio.h>
int main()
{
    float x1, y1, x2, y2, x3, y3;
    printf("Enter the value of x1\n");
    scanf("%d", &x1);
    printf("Enter the value of y1\n");
    scanf("%d", &y1);
    printf("Enter the value of x2\n");
    scanf("%d", &x2);
    printf("Enter the value of y2\n");
    scanf("%d", &y2);
    printf("Enter the value of x3\n");
    scanf("%d", &x3);
    printf("Enter the value of y3\n");
    scanf("%d", &y3);
    float m1 = (y2-y1)/(x2-x1);
    printf("value of m1 is %f\n", m1);
    float m2 = (y3-y2)/(x3-x2);
    printf("value of m2 is %f\n", m2);
    if(m1 == m2) 
    {n
        printf("straight line");
    }
     return 0;
}