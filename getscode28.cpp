#include<stdio.h>

int main()
{
	int i,j,sp,no,num;
	
	printf("enter a value::");
	scanf("%d",&no);
	num=no;
	
	for(i=1;i<=no;i++)
	{
		for(sp=1;sp<=num;sp++)
		{
			printf(" ");
			}	num--;
			
			for(j=1;j<=i;j++)
			{
				printf("*");
			}
			printf("\n");
		
			
	}
}
