#include<stdio.h>

main()
{
	int i,n,max,min,a[1000];
	
	printf("enter range");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	min=max=a[0];
	
	for(i=0;i<n;i++)
	{
		if(min>a[i])
		min=a[i];
		if(max<a[i])
		max=a[i];	
	}
	
	printf("\n min value is=%d \n max vallue is=%d",min,max);
}
