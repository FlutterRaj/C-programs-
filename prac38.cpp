#include<stdio.h>

int main()
{
	int n,no,sp,i,j;
	char x;
	printf("enter rows::");
	scanf("%d",&n);
	
	//printf("enter char::");
	//scanf("%c",x);
	
	no=n;
	
	for(i=1;i<=n;i++)
	{
		for(sp=1;sp<=no;sp++)
		{
			printf(" ");
		}
		no--;
		
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
