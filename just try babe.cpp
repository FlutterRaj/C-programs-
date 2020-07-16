#include<stdio.h>

char sum(int,int);

int main()
{
	int a,b;
	int f;
	
	scanf("%d %d",&a,&b);
	
	f=sum(a,b);
	
	printf("sum=%d",f);
}

char sum(int a,int b)
{
	float c;
	c=a+b;
	
	return c;
}
