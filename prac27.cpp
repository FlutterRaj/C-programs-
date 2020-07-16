#include<stdio.h>

int main()
{
	int i,c=0;
	char s1[10];
	
	printf("enter a string value::");
	scanf("%s",s1);
	
	for(i=0;s1[i]!='\0';i++)
	{
		c++;
	}
	
	printf("Length=%d",c);
}
