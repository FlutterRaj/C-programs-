#include<stdio.h>

int main()
{
	int number;
	number=1;
	
	repeat:
		
	printf("\t%d",number);
	number++;
	
	if(number<=100)
	goto repeat;
	}
