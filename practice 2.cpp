#include<stdio.h>
int main()
{
	int r,i,j,n,a[100];
	
	printf("enter value::");
	scanf("%d",&n);
	
	while(n>0)
	{
		r=n%10;
		n=n/10;
		a[i++]=r;
	}
	
	for(j=0;j<i;j++)
	{
		if(j%2!=0)
		printf(" %d",j);
	}
}
