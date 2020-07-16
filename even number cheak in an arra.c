#include<stdio.h>

int main()
{
	int r,a[10],n,i=0,j;
	
	printf("enter value for cheak even numbers::");
	scanf("%d",&n);

	while(n>0)
	{
		r=n%10;
		n=n/10;
		
		a[i++]=r;
	}	
	
	printf("Even numbers are=\n");
	for(j=-0;j<i;j++)
	{
		if(a[j]%2==0)
		printf("%d",a[j]);
	}
	
}
	
	
