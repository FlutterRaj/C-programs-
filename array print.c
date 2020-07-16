
#include<stdio.h>

 void main()
{
	int a[20],i,n,min,max;
	
	printf("enter range");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
	
		scanf("%d",&a[i]);
	
    }
    min=max=a[0];
    
    for(i=0;i<n;i++)
    {
    	if(a[i]<min)
    	min=a[i];
    	if(a[i
		]>max)
    	max=a[i];
	}
	
	printf("max=%d \n min=%d",max,min);
}

