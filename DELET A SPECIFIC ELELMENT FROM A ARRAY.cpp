#include<stdio.h>

int main()
{
	int arr[20];
	int i,j,se,n;
	
	printf("\n RANGE::");
		scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter which positioon you want to delet::");
		scanf("%d",&se);
	
	for(i=se-1;i<n;i++)
	{
		arr[i]=arr[i+1];
	}
	for(i=0;i<n-1;i++)
		printf("\t%d",arr[i]);
}
