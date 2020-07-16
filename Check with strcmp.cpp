#include<stdio.h>
#include<string.h>

int main()
{
	int i;
	static char str1[]= "dills";
	static char str2[20];
	static char str3[]= "daffo";
	
	i=strcmp(strcat(str3,strcpy(str2,str1)),"daffodills");
	
	printf("%d",i);
}
