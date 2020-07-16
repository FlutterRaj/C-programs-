#include<stdio.h>

int main()
{
	float item_cost[10];
	int sell_cost[10];
	float total_cost=0;
	int i,j,n;
	
	printf("\n Enter How many items you want to add ?? ");
		scanf("%d",&n);
		
	for(i=0;i<n;i++)
	{
		printf("\n Enter %d no item cost price::",i+1);
			scanf("%f",&item_cost[i]);
		printf("\n Enter how many items you sold ?? ",i);
			scanf("%d",&sell_cost[i]);
	}
	
	for(i=0;i<n;i++)
	{
		total_cost= total_cost+(item_cost[i]*sell_cost[i]);
	}
	
	printf("\n Your Net Income is :: %.2f",total_cost);

}
