#include<stdio.h>

int main()
{
	int n,i,f=1,*ptr;
	
	while(1)
		
	printf("enter value");
	scanf("%d",&n);

	ptr=&n;
	
	for(i=1;i<=*ptr;i++)
	{
		f=f*i;
	}
	
	printf("\n Factorial=%d",f);
}
