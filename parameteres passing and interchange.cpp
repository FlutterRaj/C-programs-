#include<stdio.h>

int interchange(int,int);
int main()
{
	int x=10,y=5;
	
	printf("\n M1: x=%d , y=%d",x,y);
	interchange(x,y);
	printf("\n M2: x=%d ,  y=%d",x,y);
}

int interchange(int x,int y)
{
	int temp;
	printf("\n F1: x=%d , y=%d",x,y);
	temp=x;
	x=y;
	y=temp;
	printf("\n F2: x=%d , y=%d",x,y);	
}
