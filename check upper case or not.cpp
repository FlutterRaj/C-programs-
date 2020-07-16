#include<stdio.h>

int main()
{
	char s1;
	
	printf("\n Enter a char value::");
		scanf("%c",&s1);
		
	if(s1>=62 && s1<=90)
		printf("upeer case");
	else
		printf("lower case");
}
