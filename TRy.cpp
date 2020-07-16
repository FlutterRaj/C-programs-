#include<stdio.h>

int main()
{
	int t=0,a[10],b[10],c[20],i,n1,n2,size,j;
	
	printf("enter size for 1st::");
		scanf("%d",&n1);
		
		printf("\n enter elements on 1st::");
		for(i=0;i<n1;i++)
		{
			scanf("%d",&a[i]);
		}
		
		printf("enter size for 2nd::");
		scanf("%d",&n2);
		
		printf("\n enter elements on 2nd::");
		for(i=0;i<n2;i++)
		{
			scanf("%d",&b[i]);
		}
		
		size=n1+n2;
		
		for(i=0;i<size;i++)
		{
			c[i]=a[i];
			c[n1+i]=b[i];
		}
		
		for(i=0;i<size;i++)
			printf(" %d",c[i]);
			
		
		
	
}
