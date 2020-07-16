#include<stdio.h>
int fact(int);
int main()
{
	int f,n;
	
	printf("Enter a value::");
	scanf("%d",&n);
	
	f=fact(n);

}

int fact(int n)
{
	int i;
	
	printf("\nFactors are::");
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		printf(" %d",i);
	}
}
