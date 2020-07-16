#include<stdio.h>
int main()
{
	int k[10][10],i,j,a[10][10],r,c,b[10][10];
	
	printf("enter row and column::");
	scanf("%d %d",&r,&c);
	
	printf("enter value on 1st matrix::");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		
		scanf("%d",&a[i][j]);
		
	    }
	}
	
	printf("enter value on 2nd matrix::");
	
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
		
		k[i][j]=a[i][j]+b[i][j];
		
	    }

	}
	
	printf("SUM OF TWO MATRIX IS::\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		
		printf("\t%d",k[i][j]);
		
	    }
	    printf("\n");
	}
	
	printf("TRANSPOSE OF MATRIX IS::\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		
		printf("\t%d",k[j][i]);
		
	    }
	    printf("\n");
	}
}
