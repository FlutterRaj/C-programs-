#include<stdio.h>

int quicksort(int a[ ],int l,int u);
int partition(int a[ ],int l,int u);
int swap(int *a,int *b);

int main()
{
	int a[10]={5,-4,3,222,8,84,1,-4};
	int l=0,n=8,i;
	
	quicksort(a,l,n-1);
	
	printf("\n after sorted elemets are::");
		for(i=0;i<n;i++)
			printf("%d\t",&a[i]);
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
			start++;
			
		while(a[end]>key)
			end--;
			
		if(start<end)
			swap(&a[start],&a[end]);
			
		swap(&a[l],&a[end]);
	}
}

int swap(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}
