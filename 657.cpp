#include<stdio.h>

int main()
{
	int arr[20];
	int n,i,j,k;
	
	printf("\n Enter Range::");
		scanf("%d",&n);
	
	printf("\n Enter %d elements::",n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				for(k=j;k<n;k++)
				{
					arr[k]=arr[k+1];
				}
				n--;
				j--;
			}
		}
	}
	
	for(i=0;i<n;i++)
		printf("\n%d",arr[i]);
		
}
