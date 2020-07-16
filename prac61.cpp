#include<stdio.h>

int main()
{
	int p,f,i,s=0,n,r;
	
	printf("Enter a value::");
	scanf("%d",&n);
	p=n;
	
	while(n>0)
	{
		r=n%10;
		n=n/10;
		f=1;
		
		for(i=1;i<=r;i++)
		{
			f=f*i;
		}
		s=s+f;
	}
	if(s==p)
	printf("Krishna murti number::");
	else
	printf("not");
	
}
