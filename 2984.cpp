#include<stdio.h>

int fibo(int n);
int main()
{
	int n,f,i;
	
	printf("\n Enter a range::");
		scanf("%d",&n);
		
		for(i=0;i<n;i++)
		{
			f=fibo(i);
			printf("\t%d",f);
		}
}

int fibo(int n)
{
	if(n==0)
		return 0;
		if(n==1)
				return 1;
				else
					return (fibo(n-1)+fibo(n-2));
				
}

