#include<stdio.h>

int main()
{
	int max,min,i,n,a[10];
	
	printf("enter a range");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=max=a[0];
	
	for(i=0;i<n;i++)
	{
		if(min>a[i])
		min=a[i];
		
		if(max<a[i])
		max=a[i];
	}
	printf("Max=%d \n min=%d",max,min);
}
