#include<stdio.h>

union bba
{
	float marks;
	int roll;
};

struct bca
{
	float marks;
	int roll;
};

int main(void)
{
	struct bca std1;
	union bba std2;
	
	printf("\nsize of struct::%d", sizeof(std1));
	printf("\nsize of unin::%d",sizeof(std2));
}
