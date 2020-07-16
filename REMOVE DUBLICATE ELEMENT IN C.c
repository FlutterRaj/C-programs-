#include<stdio.h>

int main()
{
	int arr[20]={1,2,2,33,22,44,44,5};
	int i,j,k,n=8;
	
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
	{
		printf("%d\t",arr[i]);
	}
}
