#include<stdio.h>
int main()
{
	int s=0,n,p,r,c=1;
	
	printf("enter a value::");
	scanf("%d",&n);
	p=n;
	while(p>0)
	{
		r=p%10;
		p=p/10;
		c=r*r*r;
		s=s+c;
	}
	//printf("output=%d",c);
	if(s==n)
	printf("amstrong");
	else
	printf("not");
}
