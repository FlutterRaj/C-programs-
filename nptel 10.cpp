#include<stdio.h>

int main()
{
	int n=2000;
	
	if(n%100==0)
	{
			if(n%400==0)
			{
				printf("%d is a leap year",n);
			}
	}
	
	if(n%4==0)
	{
		printf("%d is a leap year",n);
	}
	
}
