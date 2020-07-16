#include<stdio.h>

int main()
{
	int n,p,s=0,r;
	
	printf("enter value::");
	scanf("%d",&n);
	p=n;
	
	while(n>0)
	{
		r=n%10;
		n=n/10;
		s=s*10+r;
	}
	if(s==p)
	printf("palin");
	else
	printf("not");
}
