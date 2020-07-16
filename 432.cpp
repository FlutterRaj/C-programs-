#include<Stdio.h>
int checkprime(int);

int main()
{
	int n,i;
	
	printf("\n Enter a number::");
		scanf("%d",&n);
	
	int flag=0;
	for(i=2;i<=n/2;++i)
	{
		if(checkprime(i)==1)
		{
			if(checkprime(n-i)==1)
			{
				printf("\n %d = %d + %d",n,i,n-i);
				flag=1;
			}
		}
	}
	if(flag==0)
		printf("\n Can't Express");
}

int checkprime(int n)
{
	int i,c=0;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
			c++;
	}
	if(c==0)
		return 1;
	else
		return 0;
}
