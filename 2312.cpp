#include<stdio.h>

int fact(int n);
int main()
{
	int n,f;
	
	printf("\n Enter a value for checkk Factorial::");
		scanf("%d",&n);
		
		f=fact(n);
			printf("\n Factorial=%d",f);
}

int fact(int n)
{
	if(n==0 || n==1 )
		return 1;
	else	if(n==2)
			return 2;
			else
				return(n*fact(n-1));
}
