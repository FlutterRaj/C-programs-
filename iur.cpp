#include<stdio.h>

int main()
{
	int n,i,j,no=15;
	
	printf("Enter range::");
	scanf("%d",&n);
	
	for(i=5;i>=1;i--)
	{
		//no=5;
		for(j=1;j<=i;j++)
		{
			printf(" %d",no--);
		}
		printf("\n");
	}
}
