#include<stdio.h>

int main()
{
	static int a[10][10];
	int sum=0;
	int i,j,r,c;
	
	printf("enter row and column of matrix::\n");
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
				printf("sum of %d row is= %d\n",i,sum);
				sum=0;
		}
		
	    for(j=0;j<c;j++)
		{
			for(i=0;i<r;i++)
			{
				
				sum=sum+a[i][j];
				
			}	
				printf("sum of %d column is= %d\n",j,sum);
				sum=0;
			
		}
	
}
