#include<stdio.h>

int main()
{
	int a=87,*p1=&a;
	
	float b=4.5,*p2=&b;
	
	printf("\n value of p1=address of a=%p",p1);
	printf("\n value of p2=address of b=%p",p2);
	printf("\n Address of p1=%p",&p1);
	printf("\n Address of p2=%p",&p2);
	printf("\n value of a= %d %d %d",a,*p1,(&a));
	printf("\n value of b= %.lf %.lf %.lf",b,*p2,(&b));
}
