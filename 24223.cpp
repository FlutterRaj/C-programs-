#include<stdio.h>

int main()
{
	int ary[4]={1,2,3,4};
	
	int *p;
	
	p=ary+3;
	*p=10;
	
	printf("\n %d",ary[3]);
}
