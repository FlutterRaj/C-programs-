#include<stdio.h>

int global=100;

int func1();
int main()
{
	int local=10;
	
	printf("\n__Local variables__=%d",local);
	printf("\n__Global variables inside__=%d",global);
	func1();
}

int func1()
{
	printf("\n__Global variables outside__=%d",global);
}
