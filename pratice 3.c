#include<stdio.h>

int main()
{
	int number;
	number=1;
	
	repeat:
		
		printf("\n%d",number++);
		
		if(number<=15)
		goto repeat;
}

