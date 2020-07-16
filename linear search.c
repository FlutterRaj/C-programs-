#include<stdio.h>

int main()
{
	int n,a[10],se,flag=0,i;
	
	printf("enter a range");
	scanf("%d",&n);
	
	printf("enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("enter an search element");
	scanf("%d",&se);
	
	for(i=0;i<n;i++)
	{
			if(se==a[i])
			{
			flag=1;
			break;
			}
			
	}
	if(flag==1)
	printf("found \n and the
	 position is=%d",i+1);
	else
	printf("not foound");
}
