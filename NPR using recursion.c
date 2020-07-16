#include<stdio.h>

int fact(int);
int main()
{
	int r,f,n,a,b;
	
	printf("enter a value of N::");
	scanf("%d",&n);
	
	printf("enter a value of R::");
	scanf("%d",&r);
	
	a=fact(n);
	b=fact(n-r);
	
	f=a/b;
	printf("NPR=%d",f);
}

int fact(int n)
{

if(n==0 || n==1)
return 1;
else
return (n*fact(n-1));
}
