#include<stdio.h>

int main()
{
	int n,no,sp,i,j;
	
	printf("Enter range::");
		scanf("%d",&n);
			no=n;
			
	for(i=1;i<=n;i++)
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
