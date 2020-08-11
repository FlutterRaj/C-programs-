#include<stdio.h>
#include<conio.h>
void quick(int n[25],int first,int last)
{
	int i,j,pivot,temp;
	if (first<last)
	{
		pivot=first;
		i=first;
		j=last;
		while(i<j)
		{
			while(n[i]<=n[pivot] && i<last)
			i++;
			while(n[j]>n[pivot])
			j--;
			if(i<j)
			{
				temp=n[i];
				n[i]=n[j];
				n[j]=temp;
			}
		}
	 temp=n[pivot];
 		n[pivot]=n[j];
 		n[j]=temp;
	 quick(n,first,j-1);
	 quick(n,j+1,last);
	}
}
int main()
{
	int i,c,n[25];
	printf("\n How many elements are you going to   	enter: ");
	scanf("%d",&c);
	printf("\n Enter %d elements: ",c);
	for(i=0;i<c;i++)
	scanf("%d",&n[i]);
	quick(n,0,c-1);
	printf("\n Order of sorted elements: ");
	for(i=0;i<c;i++)
	printf(" %d",n[i]);
	return 0;
}
