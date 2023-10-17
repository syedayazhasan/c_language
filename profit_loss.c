//
//  QUES.3  IF COST PRICE AND SELLING PRICE OF AN ITEM IS INPUT THOURGH THE KEYBOARD
//          WRITE A PROGRAM TO DETERMINE WHATHER THE SELLER HAS MADE PROFIT OR LOSE 
//          ALSO DETERMINE THE HOW MUCH PROFIT HE MADE OR LOSS HE INCURRED.
#include<stdio.h>
int main()
{
	int sp;
	printf("Enter the sp price\n");
	scanf("%d",&sp);
	
	int cp;
	printf("Enter the cp price\n");
	scanf("%d",&cp);
	
	if(sp>cp)
	{
		printf("profit\n");
	}
	
	else if(cp>sp)
	{
		printf("loss\n");
	}	
	else if(sp==cp)
	{
		printf("no profit no loss\n");
	}
	
	else
	{
		printf("nothing");
	}
	return 0;
}
