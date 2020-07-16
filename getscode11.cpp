#include<stdio.h>

int prime(int);
int main()
{
	int f,n;
	
	printf("Enter a value for cheak prime::");
	scanf("%d",&n);
	
	f=prime(n);
	
	if(f==1)
	printf("PRIME");
	else
	printf("NOT");
}

int prime(int n)
{
	int c=0,i;
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		c++;
	}
	if(c==2)
	return 1;
	else
	return 0;
	
}
