#include<stdio.h>

int unorder(int arr[],int size,int data);

int main()
{
	int size,arr[20];
	
	printf("\n Length::");
		scanf("%d",&size);
		int i,f,se;
		for(i=0;i<size;i++)
			scanf("%d",&arr[i]);
		printf("\n which element you want to search::");
			scanf("%d",&se);
		f=unorder(arr,size,se);
			if(f==1)
				printf("\n FOUND");
			else
				printf("\n NOT FOUND");
}

int unorder(int arr[],int size,int data)
{
	int index,i;
	for(i=0;i<size;i++)
	{
		if(arr[i]==data)
		{
			index=i;
			break;
		}
	}
	return index;
}

