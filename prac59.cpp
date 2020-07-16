#include<stdio.h>

int fact(int);
int main()
{
	int a,b,c,f,n,r;
	
	printf("Enter value of N and R::");
	scanf("%d %d",&n,&r);
	
	a=fact(n);
	b=fact(n-r);
	f=a/b;
                                        //NCR//	
	printf("NPR=%d",f);
}

int fact(int n)
{
	if(n==0 || n==1)
	return 1;
	else
	return (n*fact(n-1));
}
