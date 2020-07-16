#include<stdio.h>

int main()
{
	int a[10],s=0,n,m=1,i,*ptr;
	
	printf("enter range::");
	scanf("%d",&n);
	
	printf("Enter %d elements on the array::",n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	ptr=a;
	
	for(i=0;i<n;i++)
	{
		s=s+*ptr;
		m=m* *ptr;
		
		ptr++;
	}
	
	printf("sum of %d elements=%d \n multipliction of %d elements is=%d",n,s,n,m);
}
