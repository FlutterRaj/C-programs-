#include<stdio.h>

int main()
{
	int i,se,n,a[10],flag=0;
	
	printf("Enter a value::");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("enter an search element::");
	scanf("%d",&se);
	
	for(i=0;i<n;i++)
	{
		if(a[i]==se)
		{
		flag=1;
		break;
	    }
	}
	if(flag==1)
	printf("found \n The position is=%d",i+1);
	else
	printf("Not found");
}
