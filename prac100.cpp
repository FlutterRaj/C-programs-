#include<stdio.h>

int main()
{
	int a[10],i,max,min,s=0;
	
	printf("Enter 5 Sub marks::");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
	min=max=a[0];
	
	for(i=0;i<5;i++)
	{
		if(a[i]>max)
		max=a[i];
		
		if(a[i]<min)
		
		min=a[i];
		
			s=s+a[i];	
	}
	
	printf("SUM OF FIVE SUBJECTS IS=%d \n Max number is=%d \n Min number is=%d \n Avarage marks is=%d",s,max,min,s/5);
}
