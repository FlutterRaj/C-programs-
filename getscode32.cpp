#include<stdio.h>

int swap(int*,int*);
int main()
{
	int a,b;
	
	printf("enter two value for swap::");
	scanf("%d %d",&a,&b);
	
	swap(&a,&b);
}

int swap(int *a,int *b)
{
	printf("Two element enter by user is = %d %d \n",*a,*b);
	
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;

	printf("After swap the two elements are= %d %d",*a,*b);
}
