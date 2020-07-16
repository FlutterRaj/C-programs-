#include<stdio.h>

int fact(int);
int main()
{
	int n,i,f;
	
	printf("Enter an range");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		f=fact(i);
		
		printf("\t%d",f);
	}
}

int fact(int n)
{
	if(n==0)
	return 0;
	if(n==1)
	return 1;
	else
	return (fact(n-1)+fact(n-2));
}
