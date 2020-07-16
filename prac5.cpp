#include<stdio.h>

int main()
{
	int min,n,a[10],i,j,t;
	
	printf("Enter range::.");
	scanf("%d",&n);
	
	printf("\nEnter array elements::");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[min]>a[j])
			min=j;
			
			if(min!=i)
			{
				t=a[min];
				a[min]=a[i];
				a[i]=t;
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
	
}
