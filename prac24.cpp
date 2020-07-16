#include<stdio.h>

int main()
{
	int i=0,j,a[10],n,r;
	
	printf("enter range::");
	scanf("%d",&n);
	
	while(n>0)
	{
		r=n%10;
		n=n/10;
		
		a[i++]=r;
	}
	
	for(j=0;j<i;j++)
	{
		if(a[j]%2!=0)
		printf("%d",a[j]);
	}
	
}
