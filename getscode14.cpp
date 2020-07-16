#include<stdio.h>

int main()
{
	int a[10],n,t,i,j;
	
	printf("Enter a range::");
	scanf("%d",&n);
	
	printf("Enter %d elemets for sorting::",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("After sorting::\n");
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
}
