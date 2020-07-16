#include<stdio.h>
int main()
{
	int n,flag=0,i,a[10],se;
	
	printf("Enter range::");
	scanf("%d",&n);
	
	printf("Enter %d elements::",n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter an element for searching::");
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
	printf("FOUND \n and the position is=%d",i+1);
	else
	printf("NOT FOUND");

}
