#include<stdio.h>


int global =100;
void func1();
void main()
{
	int local = 10;
	
	printf("LOCAL VAR IS=%d",local);
	printf("\nGLOBAL VAR IS=%d",global);
	func1();
}

void func1()
{
	printf("\nGLOBAL VARIABLE INSIDE FUNC=%d",global);
}
