#include<stdio.h>

int main()
{
	int i,j,matrix[5][5];
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i<j)
				matrix[i][j]=0;
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}
}
