#include<stdio.h>

int main()
{
	int i,j,n;
	
	printf("enter range::");
	scanf("%d",&n);
	
	
	for(i=1;i<=n;i++)
	{
		for(j=i;j>=1;j--)
		{
			if(j%2==0)
			printf("0");
			else
			printf("1");
		}
		printf("\n");
	}
}
