#include<stdio.h>

int main()
{
	int s=0,m=1,a[10],i,n,*ptr;
	
	printf("enter range::");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	ptr=a;
	
	for(i=0;i<n;i++)
	{
		//printf("\t%d",*ptr);
		s=s+*ptr;
		m=m* *ptr;
		ptr++;
	}
	printf("sum=%d \n multi=%d",s,m);
}
