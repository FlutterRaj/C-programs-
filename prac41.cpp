#include<stdio.h>

int main()
{
	int i,j;
	
	for(i=65;i<=68;i++)
	{
		for(j=65;j<=71;j++)
		{
			if(j<=133-i || j>=3+i)
			{
				printf("%c",j);
			}
		    //if()
			else
			printf(" ");
		}
		printf("\n");
	}
}
