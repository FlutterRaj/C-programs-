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
	int i,j,a[10],k;
	
//	printf("\n%d",n);
	
	for(i=1;i<n;i++)
	{
			for(j=2;j<=i;j++)
			{
				if(i%j==0)
				break;
			}
			
			if(i==j)
			{	
				for(k=0;k<n;k++)
					scanf("%d",&a[k]);
			}
	}
	
	for(k=0;k<n;k++)
		printf("\t%d",a[k]);
}

