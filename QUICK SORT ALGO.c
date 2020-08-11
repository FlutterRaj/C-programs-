#include<stdio.h>

int swap(int *a,int *b);
int quicksort(int a[ ],int l ,int u);
int partitaion(int a[ ],int l ,int u);

int main()
{
	int a[100],i,n,l=0;
	printf("\n Enter a range:: ");
		scanf("%d",&n);
		
		printf("\n Enter %d elements for sorting:: ",n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		
		quicksort(a,l,n-1);
			
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}

int quicksort(int a[ ],int l,int u)
{
	int loc;
	
	if(l<u)
	{
		loc= partitaion(a,l,u);
		quicksort(a,l,loc-1);
		quicksort(a,loc+1,u);
	}

}

int partitaion(int a[ ],int l,int u)
{
	int start,end;
	int pivot;
	
	pivot=a[l];
	start=l;
	end=u;
	
	while(start<end)
	{
		while(a[start]<=pivot)
		{
			start++;
		}
		while(a[end]>pivot)
		{
			end--;
		}
		if(start<end)
		{
			swap(&a[start],&a[end]);
		}
	}	
	swap(&a[l],&a[end]);
	return end;
}

int swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
