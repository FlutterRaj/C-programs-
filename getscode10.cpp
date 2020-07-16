#include<stdio.h>

int main()
{
	int i,a=0,b=1,c,n;
	
	printf("Enter Range::");
	scanf("%d",&n);
	
	printf("Fibonacci series are=0 1");
	
	for(i=1;i<=n-2;i++)
	{
		c=a+b;
		a=b;
		b=c;
	
	printf(" %d",c);
   }
	  
}
