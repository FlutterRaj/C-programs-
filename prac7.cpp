#include<stdio.h>

int main()
{
	int n,p,s=0,r;
	
	printf("enter a value::");
	scanf("%d",&n);
	
	p=n*n;
	
	while(p!=0)
	{
		r=p%10;
		p=p/10;
		s=s+r;
		
	}
	if(s==n)
	printf("neon number");
	else
	printf("not");
}
