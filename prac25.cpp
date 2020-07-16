#include<stdio.h>

int main()
{
	int max,min,a[10],i,j,n;
	
	printf("enter a range");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	min=max=a[0];
	
	for(i=0;i<n;i++)
	{
		if(a[max]<a[i])
		
		max=a[i];
		
		if(a[min]>a[i])
		min=a[i];
	}
	
	printf("min=%d \n max=%d",min,max);
}
