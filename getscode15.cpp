#include<stdio.h>

int main()
{
	int n,i,j,t,min,a[10];
	
	printf("Enter range::");
	scanf("%d",&n);
	
	printf("Enter %d elemets for sorting::",n);
	
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
			}
			if(min!=i)
			{
				t=a[min];
				a[min]=a[i];
				a[i]=t;
			}
	}
	
	printf("After sorting::\n");
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
}
