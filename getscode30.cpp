#include<stdio.h>

int main()
{
	int i,j;
	
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=11;j++)
		{
			if(j<=i || j>=12-i)

			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
