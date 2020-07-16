#include<stdio.h>

int main()
{
	int se,i,n,flag=0,a[10],c=0;
	
	printf("\n Enter range::");
		scanf("%d",&n);
		
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Which element you want ??");
		scanf("%d",&se);
		
	for(i=0;i<n;i++)
	{
		if(a[i]==se)
			c++;
	}
	printf("\n Key found %d times..",c);
}
