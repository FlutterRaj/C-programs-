#include<stdio.h>
#include<string.h>

int main()
{
	int i,n=0;
	char s1[10];
	
	printf("\n Enter a String::");
		gets(s1);
		
	for(i=0;i<s1[i]!='\0';i++)
	{
		n++;
	}
	printf("LEnght=%d",n);
	return 0;
}
