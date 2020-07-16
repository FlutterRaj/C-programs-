#include<stdio.h>

int main()
{
	int j,i,s=0,n,sum=0;

	
	printf("enter a value");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		s=0;
		for(j=1;j<=i;j++)
		{
			s=s+j;
		}
			sum=sum+s;
			
	} printf("sum=%d",sum);
}
