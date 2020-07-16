#include<stdio.h>

int main()
{
	int se,i,n,a[10],flag=0;
	
	printf("Enter range::");
		scanf("%d",&n);
		
		printf("ENter %d elements:",n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		
		printf("Enter An elemet for search::");
			scanf("%d",&se);
			
		for(i=0;i<n;i++)
		{
			if(a[i]==se)
				flag=1;
		}
		if(flag==1)
			printf("FOUND");
		else
			printf("Not");
}
