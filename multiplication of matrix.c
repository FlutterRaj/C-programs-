#include<stdio.h>

int main()
{
	int i,j,r2,c2,r1,c1,a[10][10],b[10][10],sum=0,m[10][10],k;
	
	printf("Enter row and column for 1st matrix::");
	scanf("%d %d",&r1,&c1);
	
	printf("Enter %d values on 1st matrix::\n",r1*c1);
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Enter row and column for 2nd matrix::");
	scanf("%d %d",&r2,&c2);
	
	if(c1!=r2)
	printf("THIS MULTIPLICATION IS NOT POSSIBLE");
	else
	{
		printf("Enter %d values on 2nd matrix::\n",r2*c2);
			for(i=0;i<r2;i++)
		{
				for(j=0;j<c2;j++)
				{
					scanf("%d",&b[i][j]);
				}
		}
		
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				sum=0;
				for(k=0;k<r2;k++)
				{
					sum=sum+a[i][k]*b[k][j];
					
						m[i][j]=sum;
				}
			}
		}
		
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%d ",m[i][j]);
			}
					printf("\n");
		}
	}
}
