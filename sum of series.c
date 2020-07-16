#include<stdio.h>

int main()
{
	int  j,s,n,sum=0,i;
	
	printf("enter range");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		s=0;
		
		for(j=1;j<=n;j++)
		{
			s=s+j;
	    }
		sum=sum+s;
	
	}
	
	printf("sum of the series is=%d",sum);
}
