#include<stdio.h>

int main()
{
	int i,j,n;
	
	printf("enter rnage::");
	scanf("%d",&n);
 	
	for(i=1;i<=n;i++)
	{
		for(j=5;j>=i;j--)
		{
			printf("%d",j);
		}
		printf("\n");
    }   
}
