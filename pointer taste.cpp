#include<stdio.h>

int main()
{
	int a=10,b=20;
	int *p1,*p2;
	
	p1=&a;
	p2=&b;
	
	printf("\n Address of a=%p",&a);
	printf("\n value of a=%d",a);
	printf("\n value of p1=%p",p1);
	printf("\n p1 point to a=%d",*p1);
	printf("\n Address of b=%p",&b);
	printf("\n value of b=%d",b);
	printf("\n value of b=%p",p2);
	printf("\n p2 point to b=%d",*p2);
}
