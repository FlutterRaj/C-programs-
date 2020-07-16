#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char s1[10],s2[10],s3[10];
	int l,l1;
	
	printf("Enter 1st string value::");
	gets(s1);
	
	printf("enter 2ns string value::");
	gets(s2);
	
	l=strcmp(s1,s2);
	
	if(l==0)
	{
		l1=strlen(s1);
		printf("LENGTH=%d",l1);
	}
	else
	{
		strcat(s1,s2);
		printf("\n AFTER MERGE=%s",s1);
		//puts(s1);
		
		l1=strlen(s1);
		printf("\n LENGTH=%d",l1);
		
		strrev(s1);
		printf("\n AFTER REVERSE=%s",s1);
		
		strcpy(s3,s1);
		printf("\n after cpy to s3=%s",s3);
	}
}
