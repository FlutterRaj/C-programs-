#include <time.h>
#include <stdlib.h>
#include<stdio.h>

int main()
{
	srand(time(NULL));   // Initialization, should only be called once.
	int r = rand();
	int r1= rand();      // Returns a pseudo-random integer between 0 and RAND_MAX.
		printf("\n%d",r*r1);
}
