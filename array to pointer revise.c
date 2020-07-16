#include<stdio.h>
int main()
{
	int a[10],n,i,*ptr;
	
	printf("enter range");
	scanf("%d",&n);
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	ptr=a;
	
	for(i=0;i<5;i++)
	{
	
	printf("%d",*ptr);
	ptr++;
}
}
