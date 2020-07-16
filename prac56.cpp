#include<stdio.h>

int main()
{
	int max,min,i,j,a[10],n;
	
	printf("enter range::");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	min=max=a[0];
	
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
		
		if(a[i]<min)
		min=a[i];
	}
	
	printf("min=%d \n max=%d",min,max);
}
