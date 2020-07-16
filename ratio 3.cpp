#include<stdio.h>

int main()
{
	int i,j,min,a[10],t,n;
	
	printf("Nter the Range::::::");
		scanf("%d",&n);
		
		printf("Enter %D elements::",n);
			for(i=0;i<n;i++)
				scanf("%d",&a[i]);
				
			for(i=0;i<n;i++)
			{
				min=i;
				
				for(j=i+1;j<n;j++)
				{
					if(a[j]>a[min])
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
				scanf("%d",a[i]);
			}
}
