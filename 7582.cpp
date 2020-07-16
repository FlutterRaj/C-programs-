#include<stdio.h>

void bubble_sort(int a[],int n);
int main()
{
	int i,j,a[10],n,tmp;
	
	printf("\n Enter a range::");
		scanf("%d",&n);
		
		printf("\n Enter %d elements..\n",n);
			for(i=0;i<n;i++)
				scanf(" %d",&a[i]);
				
			bubble_sort(a,n);
}
				
void bubble_sort(int a[],int n)
{
	int i,j,tmp;
	for(i=0;i<n;i++)
		{
			for(j=0;j<n-1;j++)
			{
				if(a[j]>a[j+1])
				{
					tmp=a[j];
					a[j]=a[j+1];
					a[j+1]=tmp;
				}
			}
		}
		printf("\n Sorted array::");
			for(i=0;i<n;i++)
				printf(" %d\t",a[i]);
}


