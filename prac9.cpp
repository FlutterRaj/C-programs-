#include<stdio.h>

int main()
{
	int c=1,n,s=0,p,r;
	
	printf("enter a  value::");
	scanf("%d",&n);
	p=n;
	
	while(n>0)
	{
		r=n%10;
		n=n/10;
		c=r*r*r;
		s=s+c;
	}
	if(s==p)
	printf("ammstrong");
	else
	printf("not");
}
