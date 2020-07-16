#include<stdio.h>

int fact(int);
int main()
{
	int f,n,a,b,c,r;
	
	printf("enter two value::");
	scanf("%d %d",&n,&r);
	
	a=fact(n);
	b=fact(r);
	f=a/b;
	printf("FACTORIAL=%d",f);
}

int fact(int n)
{
	if(n==0 || n==1)
	return 1;
	else
	return (n*fact(n-1));
}
