// Objective 
// 1. Pefrom BUbble sort  

#include<Stdio.h>

int main()
{
	int n,i,j,a[10],t;
	
	printf("\n Enter Range ::");
		scanf("%d",&n);
		
	printf("\n Enter %d elements ..",n);
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	
	printf("\n After Bubble sort ::");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}
