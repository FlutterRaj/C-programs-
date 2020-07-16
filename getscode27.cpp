#include<stdio.h>

int main()
{
	int i,j,n;
	
	printf("enter a range::");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=i;j>=1;j--)
		{
			if(j%2==0)
			printf("1");
			else
			printf("0");
		}
		printf("\n");
	}
}
