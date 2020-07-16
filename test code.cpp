#include<stdio.h>

int main()
{
	int i,n,k=0;
	
	printf("Enter a value to check prime or not::");
		scanf("%d",&n);
	
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
			k++;
	}
	if(k==1)
		printf("prime");
	else
		printf("not prime");
}
