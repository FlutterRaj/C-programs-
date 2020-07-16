#include<stdio.h>
#include<math.h>

long long convert(int n);

int main()
{
	int n;
		printf("\n Enre a Decimal num::");
			scanf("%d",&n);
		printf("%d is decimal = %lld in binary",n,convert(n));
}

long long convert(int n)
{
	long long bin=0;
	
	int rem,i=1;
	
	while(n!=0)
	{
		rem=n%2;
		n=n/2;
		bin+= rem*i;
		i*=10;
	}
	return bin;
}
