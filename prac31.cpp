#include<stdio.h>

int main()
{
	int i,j,a[10][10],b[10][10],k[10][10],r,c;
	
	printf("Enter row and column::");
	scanf("%d %d",&r,&c);
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			k[i][j]=a[i][j]+b[i][j];
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t%d",k[i][j]);
		}
		printf("\n");
	}
}
