#include<stdio.h>

int main()
{
	int n,r,a[10],i=0,j;
	
	printf("enter a value::");
	scanf("%d",&n);
	
	while(n>0)
	{
		r=n%10;
		n=n/10;
		
		a[i++]=r;
	}
	
	for(j=0;j<i;j++)
	{
		if(a[j]%2==0)
		printf(" %d",a[j]);
	}
	
}
