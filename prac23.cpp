#include<stdio.h>

int main()
{
	int a[10],n,i;
	
	printf("enter range::");
	scanf("%d",&n);
	
	printf("enter array elements::");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Print elements::");
	for(i=n-1;i>=0;i--)
	{
		printf("\t%d",a[i]);
	}
}
