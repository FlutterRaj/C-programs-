#include<Stdio.h>

int main()
{
	int c=0,i;
	char s1[10];
	
	printf("enter a string value::");
	scanf("%s",s1);
	
	for(i=0;s1[i]!='\0';i++)
	{
		c++;
	}
	
	printf("\n Length=%d",c);
}
