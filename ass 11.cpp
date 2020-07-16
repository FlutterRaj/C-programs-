#include<stdio.h>

int main()
{
	int i,j,min,n,a[10],t;
	
	printf("\n Enter range::");
		scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	for(i=0;i<n;i++)
	{
		min=i;
			for(j=i+1;j<n;j++)
			{
				if(a[min]>a[j])
				{
					min=j;
				}
				if(a[min]!=a[i])
				{
					t=a[min];
					a[min]=a[i];
					a[i]=t;
				}
			}
			
	}
	
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}
