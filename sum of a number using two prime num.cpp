#include <stdio.h>

int checkPrime(int n); //Write the function to check prime number

int main() 
{
int n;
scanf("%d", &n);  //An integer number is taken from the test case

checkPrime(n);
}

int checkPrime(int n)
{
	int i,j;
	
	
	for(i=2;i<n;i++)
	{
		for(j=2;j<i;j++)
		{
			{
				if(i%j==0)
				break;
			}
			
			if(i==j && i+j==n)
			{
				printf("%d = %d + %d\n", n, i, j);
					printf("%d cannot be expressed as the sum of two prime numbers.\n", n);
			}
		}
	}
}

