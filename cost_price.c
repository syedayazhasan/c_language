
// QUES.3 if cost price and selling price of an item is input through the keyboard 
//       write a program to determine weather the seller has made profit or incuured loss
//       also determine how much profit he made or lose he incurred.
#include<stdio.h>
int main()
{
	int cost_price;
	printf("Enter the cost price\n");
	scanf("%d",&cost_price);
	
	int selling_price;
	printf("Enter the selling price\n");
	scanf("%d",&selling_price);
	
	int profit = selling_price - cost_price;
	printf("the profit is:%d\n",profit);
	
	int loss = cost_price - selling_price;
	printf("the loss is: %d\n",loss);
	
	return 0;
	
	
}
