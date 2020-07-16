#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,t,n,a[10];
	
	printf("enter range");
	scanf("%d",&n);
	
	printf("Enter array::");
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
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
}
