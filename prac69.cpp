#include<stdio.h>

int main()
{
	int i=1;
	
	repeat:
		
		printf("\t%d",i++);
		
		if(i<=100)
		goto repeat;
}
