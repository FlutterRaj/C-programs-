#include<stdio.h>
#include<process.h>

int main()
{
	int n,a[10],i,se;
	int flag=0;
	
	printf("\n ENter range::");
		scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\n Enter a seatch element::");
		scanf("%d",&se);
	
	for(i=0;i<n;i++)
	{
		if(a[i]==se)
			{
				flag=1;
				exit;
			}
	}
	
	if(flag==1)
		printf("found,\n position=%d",i+1);
		else
			printf("not found ..");
}
