#include<stdio.h>

int main()
{
	int i=100;
	
	repeat:
	
	printf("\t%d",i--);
	
	if(i>=1)
	
	goto repeat;	
	
}
