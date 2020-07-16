#include<stdio.h>

int main()
{
	int n,a[10],i;
	
	printf("\n Enter range::");
		scanf("%d",&n);
	
	printf("\n Enter elements::");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		
	for(i=0;i<n;i++)
	{
		a[i++]!=a[n--];
			printf("\n%d",a[i]);
	}
}
