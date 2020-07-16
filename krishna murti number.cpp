#include<stdio.h>

int main()
{
	int f,i,n,p,r,s=0;
	
	printf("enter a num:");
	scanf("%d",&n);
	p=n;
	
	while(n>0)
	{
		f=1;
		
		r=n%10;
		n=n/10;
		
		for(i=1;i<=r;i++)
		{
			f=f*i;
		}
		
		s=s+f;
	}
	
	
	if(s==p)
	printf("krishna murti");
	else
	printf("not");
}
