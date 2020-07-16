#include<stdio.h>
int main()
{
	int i,j,a[10][10],r,c;
	
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
	printf("ORIGINAL MATRIX IS::\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		
		printf("\t%d",a[i][j]);
		
	    }
	    printf("\n");
	}
	printf("TRANSPOSE OF MATRIX IS::\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		
		printf("\t%d",a[j][i]);
		
	    }
	    printf("\n");
	}
}
