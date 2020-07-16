#include<stdio.h>

int main()
{
	int c=0,i,n;
	
	printf("Enter a value to check prime or Not::");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		c++;
	}
	if(c==2)
	printf("PRIME");
	else
	printf("NOT PRIME");
	
}
