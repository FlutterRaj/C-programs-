#include<stdio.h>

int main()
{
	int n,p,r,s=0;
	
	printf("Enter a value for cheak palin or not::");
	scanf("%d",&n);
	p=n;
	
	while(n>0)
	{
		r=n%10;
		n=n/10;
		s=s*10+r;
	}
	if(s
	==p)
	printf("palindrome number");
	else
	printf("not palin");
	
}
