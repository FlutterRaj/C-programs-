#include<stdio.h>

int main()
{
	int r,c,a[10][10],b[10][10],k[10][10],i,j;
	
	printf("Enter row and column");
	scanf("%d %d",&r,&c);
	
	printf("ENTER VALUES ON FIRST MATRIX::");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("ENTER VALUES ON SECOND MATRIX::");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	//printf("SUM OF TWO MATRIX");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			k[i][j]=a[i][j]+b[i][j];
		}
	}
	
	printf("SUM OF TWO MATRIX::\n;");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t%d",k[i][j]);
		}
		printf("\n");
	}
}
