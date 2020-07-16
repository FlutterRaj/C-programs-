#include<stdio.h>

int main()
{
	int n,a=0,b=1,i,c=0;
	
	printf("enter range::");
	scanf("%d",&n);
	
	printf("0 1");
	
	for(i=1;i<=n-2;i++)
	{
		c=a+b;
		a=b;
		b=c;
	
	printf(" %d",c);
}
}
