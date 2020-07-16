#include <stdio.h>  
long power(int, int);
int main()
{
int pow, num;
long result;

scanf("%d", &num); //The number taken as input from test case data 

scanf("%d", &pow); //The power is taken from the test case 
result = power(num, pow);
printf("%d^%d is %ld\n", num, pow, result);
return 0;
}

long power(int x,int y)
{
	while(y!=0)
	{
		x*=x;
	}
	return x;
}

