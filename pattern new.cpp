#include<stdio.h>
int main()
{
	int n,i,j,no=1;
	
	printf("enter a value::");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{	
		for(j=1;j<=i;j++)
		{
			printf("%d",no++);
		}
		printf("\n");
	}
}
