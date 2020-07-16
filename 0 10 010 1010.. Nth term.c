#include<stdio.h>

void main()
{
	int i,j,n;
	
	printf("enter range");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=i;j>=0;j--)
		{
			if(j%2==0)
			printf("0");
			else
			printf("1");
		}
		printf("\n");
	}
}
