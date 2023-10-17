
//    QUES 1. Any year is input through the keyboard . 
//        write a program to determine weather the year is a leap year or not
//         (cosidering leap year occours after evry four years).

#include<stdio.h>
int main()
{
	int months;
	printf("Enter the months\n");
	scanf("%d",&months);
	
	if(months==28)
	{
		printf("this is a leep year\n");
	}
	else
	{
		printf("this is not a leep year");
	}
	return 0;
}
