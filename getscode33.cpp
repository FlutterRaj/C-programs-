#include<stdio.h>

int main()
{
	int n,f=1,*ptr,i;
	
	printf("enter value::");
	scanf("%d",&n);
	
	ptr= &n;
	
	for(i=1;i<=*ptr;i++)
	{
		f=f*i;
	}
	
	printf("factorial of %d is=%d",*ptr,f);
}
