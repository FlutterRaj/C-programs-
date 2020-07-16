#include<stdio.h>

int quicksort(int a[ ],int l,int u);
int partition(int a[ ],int l,int u);
int swap(int *a,int *b);

int main()
{
	int a[100],i,n,l=0;
	printf("\n Enter a range::::::::");
		scanf("%d",&n);
		
		
		printf("\n Enter %d elements for sorting::",n);
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
		loc=partition(a,l,u);
		quicksort(a,l,loc-1);
		quicksort(a,loc+1,u);
	}
}
int partition(int a[ ],int l,int u)
{
	int key,start=l,end=u;
	key=a[l];
	
	while(start<end)
	{
		while(a[start]<=key)
		{
			start++;
		}
		while(a[end]>key)
		{
			end--;
		}
			
		if(start<end)
			swap(&a[start],&a[end]);
	}
		swap(&a[l],&a[end]);
		return end;
}


int swap(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}
