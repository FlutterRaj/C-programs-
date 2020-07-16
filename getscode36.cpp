#include<stdio.h>

int main()
{
	int i,j,sum=0,r,c;
	int a[10][10];
	
	printf("Enter row and column for matrix::\n");
	scanf("%d %d",&r,&c);
	
	printf("Enter %d elements on Matrix::\n",r*c);
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
				sum=sum+a[i][j];
			}
			printf("%d Row sum is=%d\n",i,sum);
			sum=0;
		}	
		sum=0;
		
		for(j=0;j<c;j++)
		{
			for(i=0;i<r;i++)
			{
				sum=sum+a[i][j];
			}
			printf("%d column sum is=%d\n",j,sum);
			sum=0;
		}
}
