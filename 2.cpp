#include<stdio.h>

int sum(int,int);
int main()
{
	int f,a,b;
	a=10;
	b=9;
	
	f=sum(a,b);
		printf("%d",f);
}

int sum(int d,int f)
{
	int c;
	c=d+f;
	return c;
}
