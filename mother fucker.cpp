#include<stdio.h>

void func(int x,int y,int *ps,int *pd,int *pp);

int main(void)
{
	int a,b,sum,diff,prod;
	a=6;
	b=4;
	func(a,b,&sum,&diff,&prod);
	printf("\n sum=%d \n Difference=%d \n Product=%d",sum,diff,prod);
}
void func(int x,int y,int *ps,int *pd,int *pp)
{
	*ps=x+y;
	*pd=x-y;
	*pp=x*y;
}

