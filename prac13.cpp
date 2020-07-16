#include<stdio.h>

int main()
{
	int n,i;
	printf("enter a value");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		printf("\t%d",i);
	}
}
