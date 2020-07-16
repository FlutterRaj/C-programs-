#include<stdio.h>

int main()
{
	int n;
	float k=1,c=1;
	
	printf("Enter your anual income::");
		scanf("%d",&n);
		
	if(n<=100000)
	{
		printf("NIL");
	}
	else if(n<200000)
	{
		k= (n*10)/100;
		printf("Your anunal income is %d,\n your tax rate(10%) is ::%.2f",n,k);
	}
	else
	{
		c= (n*20)/100;
		printf("Your anunal income is %d,\n your tax rate(10%) is ::%.2f",n,c);
	}
}

