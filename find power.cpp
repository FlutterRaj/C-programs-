#include <stdio.h>
int main()
{
int base, exponent;
long int result;
scanf("%d", &base);
scanf("%d", &exponent);

result=1;

while( exponent  !=0)
{
	result *= base;
	exponent--;
	}	
	
	printf("%d",result);
}
