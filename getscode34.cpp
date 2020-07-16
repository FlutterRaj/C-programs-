#include<stdio.h>

int main()
{
	int a[10][10],b[10][10],m[10][10];
	int r1,c1,r2,c2;
	int sum=0;
	int i,j,k;
	
	printf("Enter row and column for 1st matrix::\n");
	scanf("%d %d",&r1,&c1);
	
	printf("Enter %d elements on 1st Matrix::\n",r1*c1);
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		
	printf("Enter row and column for 2nd matrix::\n");
	scanf("%d %d",&r2,&c2);
	
	if(c1 != r2)
	{
		printf("Not possible multiplication...");
    }
		
	else
		{
			printf("Enter %d elements on 2nd Matrix::\n",r2*c2);
			
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
	    
	    
		printf("Multiplication of two matrix is=\n");		
			for(i=0;i<r2;i++)
				{
					for(j=0;j<c2;j++)
					{	
						printf("%d ",m[i][j]);
					}
					printf("\n");
				}
		}

}
