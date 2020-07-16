#include<stdio.h>

int main()
{
	int i,j,n;
	
	printf("enter series");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("\t%d",i*j);
		}
		printf("\n");
	}
}
