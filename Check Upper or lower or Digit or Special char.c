#include<stdio.h>

int main()
{
	char s1;
	
	printf("\n Enter a char::");
		scanf("%c",&s1);
	
	if(s1>=60 && s1<=90)
		printf("\nupper case char");
	else
		if(s1>=97 && s1<=122)
			printf("\nLower case char");
	else
		if(s1>=48 && s1<=57)
			printf("\n Digit");
		else
			printf("\n Special char");
}
