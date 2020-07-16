#include<stdio.h>

void swap(int *a,int *b);
int main()
{
	int a,b;
	int *p1,*p2;
	
	printf("\n Enter two value for swap::");
		scanf("%d %d",&a,&b);
		
		p1=&a;
		p2=&b;
		
		swap(&a,&b);
}

void swap(int *a,int *b)
{
	int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
	
	printf("After swap value is=%d %d",*a,*b);
}
