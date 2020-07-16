#include<stdio.h>

void sum();
void main()
{              
 sum();              	
 sum();
}

void sum()
{
	int a,b;
	
	printf("enter two value");
	scanf("%d %d",&a,&b);
	
	printf("sum=%d",a+b);
}
