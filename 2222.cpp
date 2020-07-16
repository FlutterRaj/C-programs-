#include<stdio.h>

int main()
{
	int n,a[10],key,i,j;
	
	printf("\n Enter a range::");
		scanf("%d",&n);
		
		printf("\n Enter %d elements::",n);
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
			
		for(i=1;i<n;i++)
		{
			key=a[i];
			j=i-1;
			
			while(j>=0 && a[j]>key)
			{
				a[j+1]=a[j];
				j=j-1;
			}
			a[j+1]=key;
		}
		
		printf("\n After sorting elements are::");
			for(i=0;i<n;i++)	
				printf("\t%d",a[i]);
}
