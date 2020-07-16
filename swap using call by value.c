#include<Stdio.h>

void swap(int,int);
int main()
{
	int a,b;
	
	printf("enter two value::");
	scanf("%d %d",&a,&b);
	
	swap(a,b);
	
}

void swap(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("After swap two values are=%d %d",a,b);
}
