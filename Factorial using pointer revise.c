#include<stdio.h>
int main()
{
	int i,n,f=1,*ptr;
	
	printf("enter a value to cheak factorail::");
	scanf("%d",&n);
	
	ptr=&n;
	
	for(i=1;i<=*ptr;i++)
	{
		f=f*i;
	}
	
	//printf("\n Factorail=%d",f);
}
