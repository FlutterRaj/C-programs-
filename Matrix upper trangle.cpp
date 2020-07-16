#include<stdio.h>

int main()
{
	int a[10][10],i,j,n;
	
	printf("\n Enter a range::");
		scanf("%d",&n);
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("\t%d",a[i][j]);
			}
			printf("\n");
		}
}
