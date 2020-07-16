#include<stdio.h>

int main()
{
	int i,flag=0,se,n,a[10];
	
	printf("enter range::");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter an ssearch element::");
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
	printf("not");
	
}
