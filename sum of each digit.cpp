#include<stdio.h>

int main()
{
	int p,sum=0,r,n;
	
	printf("Enter a value to sum::");
		scanf("%d",&n);
		p=n;
		
	while(n!=0)
	{
		r=n%10;
		n=n/10;
		sum=sum+r;
	}
	printf("sum of %d is=%d",p,sum);
	
}
