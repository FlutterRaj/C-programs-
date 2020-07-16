#include<stdio.h>

int main()
{
	int i,f=1,n;
	
	printf("Enter a value to cheak FACTORIAL::");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	
	printf("Factorial=%d",f);
}
