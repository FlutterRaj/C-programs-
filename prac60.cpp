#include<stdio.h>

int fact(int);
int main()
{
	int f,n;
	
	printf("Enter value for Factorial::");
	scanf("%d",&n);
	
	f=fact(n);
                                        //FACTORIAL WITH RECURSION METHOD//	
	printf("NPR=%d",f);
}

int fact(int n)
{
	if(n==0 || n==1)
	return 1;
	else
	return (n*fact(n-1));
}
