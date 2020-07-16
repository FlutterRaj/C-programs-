#include<stdio.h>

int main()
{
	int i,j,sp,no,num;
	
	printf("enter a value::");
	scanf("%d",&no);
	num=no;
	
	for(i=1;i<=5;i++)
	{
		for(sp=1;sp<=i;sp++)
		{
			printf(" ");
		}
			
			for(j=5;j>=i;j--)
			{
				printf("*");
			}
			
	printf("\n");
		
	}
}
