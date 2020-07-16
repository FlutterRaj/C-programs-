#include<stdio.h>

int main()
{
	int n,i;
	
	printf("Enter a value for Check FACTORS::");
	scanf("%d",&n);
	
	printf("Factors of %d is=",n);
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		printf("\t%d",i);
	}
}
