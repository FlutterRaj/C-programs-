#include<stdio.h>

int main()
{
	int j,n,a[10],i,flag=0,se;
	
	printf("enter a range");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("enter a search element");
	scanf("%d",&se);
	
	for(j=0;j<n;j++)
	
	{
		if(a[j]==se)
		flag=1;
		break;
	}
	
	if(flag==1)
	printf("Found \n and the position is=%d",j+1);
	else
	printf("not");
}
