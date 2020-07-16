#include<stdio.h>

int main()
{
	int n,i;
	unsigned long long result=1;
//	int result=1;
	
	printf("Enter an inte");
	scanf("%d",&n);
	
	for(i=1;i<=n;++i)
	{
		result *= i;
	}
	printf("%llu",result);
}
