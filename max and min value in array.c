#include<stdio.h>

int main()
{
	int a[10],n,i,j,max,min;
	
	printf("enter range::::");
	scanf("%d",&n);
	
	printf("enter array elemennts");
	for(i=0;i<n;i++)
	{
			scanf("%d",&a[i]);
	}
	
	min=max=a[0];
	
	for(i=0;i<n;i++)
	{
		if(a[i]>a[max])
		{
		
		max=a[i];
		
		}
		
		if(a[i]<a[min])
		{
			
			min=a[i];
		}
		
	}
	
	printf("\n max value=%d \n min value=%d",max,min);
}
