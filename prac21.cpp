#include<stdio.h>

int fact(int);
int main()
{
	int n,f,a,b,c,r;
	
	printf("enter a value Of N and R::");
	scanf("%d %d",&n,&r);
	
	a=fact(n);
	b=fact(r);
	c=fact(n-r);
	f=a/(b*c);
	
	printf("NCR=%d",f);
}

int fact(int n)
{
	int i,f=1;
	
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
