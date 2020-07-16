#include<stdio.h>
int main()
{
	int lcm=0,a,b,c,d;
	
	printf("enter two value");
	scanf("%d %d",&a,&b);
	c=a,d=b;
	
	while(a!=b)
	{
		if(a>b)
		a=a-b;
		else
		b=b-a;
	}
	lcm=c*d/a;
	
	printf("GCD=%d\n LCM=%d",a,lcm);
}
