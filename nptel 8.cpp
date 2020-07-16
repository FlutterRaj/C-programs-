#include<stdio.h>

int main()
{
	int c=1;
	
	while(c<=5)
	{
		if(c==3)
		break;
		
		printf("%d",c);
		c++;
	}
}
