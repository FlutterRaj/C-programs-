#include<stdio.h>

int main()
{
	int t,i,j,n,a[10],min;
	
	printf("Enter a range::");
	scanf("%d",&n);
	
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
			{
				min=j;
			}
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

