#include<stdio.h>

int main()
{

int sum=0,n,i,x,k=0;

printf("Enter the range of values you want to sum::");
scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		printf("Enter %d no value for sum::",++k);
		scanf("%d",&x);
		
			sum=sum+x;
	}
	printf("\nSum of %d number is =%d",n,sum);
		
}
