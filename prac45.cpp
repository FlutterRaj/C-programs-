#include<stdio.h>

int main()
{
	int i=1;
	
	repeat:
	if(i<=10)
	printf("\t%d",i++);
	
	
	goto repeat;
}
