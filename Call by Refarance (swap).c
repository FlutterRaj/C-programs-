#include<stdio.h>

int swap(int* , int *);
int main()
{
	int a,b;
	printf("enter two value for swap=");
	scanf("%d %d",&a,&b);
	
	swap(&a,&b);

}

int swap(int *a,int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
	
	printf("\n after swap=%d %d",*a,*b);
}
