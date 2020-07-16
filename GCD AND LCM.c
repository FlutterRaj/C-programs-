#include<stdio.h>

void main()
{
	int lcm,a,b,n,m;
	
	printf("Enter Two values::");
	scanf("%d %d",&a,&b);
	n=a,m=b;
	
	while(a!=b)
	{
		if(a>b)
		a=a-b;
		else
		b=b-a;
	}
	printf("\n GCD=%d",a);
	
	lcm=n*m/a;
	printf("\n LCM=%d",lcm);
	
}

