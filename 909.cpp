#include<STdio.h>
int checkprime(int n);

int main()
{
	int n,i;
	
	printf("\n Enter a value::");
		scanf("%d",&n);
		
		int flag=0;
		for(i=2;i<=n/2;i++)
		{
			if(checkprime(i)==1);
			{
				if(checkprime(n-i)==1)
				{
					printf("\n %d = %d + %d",n,i,n-i);
					flag=1;
				}
			}
		}
		if(flag==0)
			printf("%d cant't be express using sum of two prime numbers..");
}

int checkprime(int n)
{
	int i,yesprime=1;
	
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
			yesprime=0;
	}
	return yesprime;
}
