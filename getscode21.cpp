#include<stdio.h>

int main()
{
	int l,u,i,j;
	
	printf("Enter start value::");
	scanf("%d" ,&l);
	
	printf("Enter last value::");
	scanf("%d",&u);
	
	
	for(i=l;i<=u;i++)
	{
			for(j=2;j<=i;j++)
			{
				if(i%j==0)
				{
					break;
				}
			}
				if(i==j)
				printf("\t%d",j);
			
	}
}
