#include<stdio.h>

int main()
{
	int *ptr,a[10],i,n;
	
	printf("Enter a range::");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	ptr=a;
	
	for(i=0;i<n;i++)
	{
		printf(" %d",*ptr);
		ptr++;
	}
}
