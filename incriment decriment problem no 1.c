#include<stdio.h>

int main()
{
	int x=10,y=5;
	
	x++;
	++x;
	y--;
	x=x+5;
	y=++y;
	
	printf("\n%d %d",x++,y++);
	printf("\n%d %d",++x,y);
	printf("\n%d %d",x,y);
}
