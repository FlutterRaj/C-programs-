#include<stdio.h>

int main()
{
	int i,*ptr,f=1,n;
	
	printf("enter value::");
	scanf("%d",&n);
	
	ptr=&n;
	
	for(i=1;i<=*ptr;i++)
	{
		f=f*i;
	 
	}
	
	printf("fact=%d",f); 
}
