#include<stdio.h>
#include<conio.h>

int fact(int);

int main()
{
	int f,n;
	
	printf("enter range::");
	scanf("%d",&n);
	
	f=fact(n);
	
	printf("FACTORIAL=%d",f);
}

int fact(int n)
{
	if(n==0 || n==1)
	return 1;
	else
	return (n*fact(n-1));
}
