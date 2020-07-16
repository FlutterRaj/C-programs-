#include<stdio.h>
#include<conio.h>

int main()
{
	int se,a[10],n,i,flag=0,j;
	
	printf("enter range");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("enter a search element");
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
	printf("found \n and the position is=%d",i+1);
	else
	printf("not found");
}
