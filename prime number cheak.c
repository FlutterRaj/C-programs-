#include<stdio.h>


int main()
{
	int n,i,c=0;
	
	printf("enter a value to cheak prime number or not=");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			
			c++;
		}
	}
	
	//prime numbers are only divisible by 1 and that's number;
	
	if(c==2)
	printf("\nyour number is a prime number");
	else
	printf("not");
	
}
