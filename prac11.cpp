#include<stdio.h>

int main()
{
	int i,n,j,s,sum=0;
	
	printf("enter a range::");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		s=0;
		
		for(j=1;j<=i;j++)
		{
			s=s+j;
		}

		sum=sum+s;
	}
	printf("sum is=%d",sum);
}
