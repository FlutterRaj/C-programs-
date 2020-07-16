#include<stdio.h>
#include<string.h>

int main()
{
	int l,l1;
	char s1[10],s2[10],s3[10];
	
	printf("enter 1st string value::");
	gets(s1);

	
	printf("enter 2nd string value::");
	gets(s2);
	
	l=strcmp(s1,s2);
	if(l==0)
	{
	
	l1=strlen(s1);
	printf("\nlength=%d",l1);
	
	}
	else
	{
		strcat(s1,s2);
		printf("\nafter concartinate=");
		puts(s1);
		
		strrev(s1);
		printf("\nafter reverse=");
		puts(s1);
		
		strcpy(s3,s1);
		printf("\nvalue cpy to s3=");
		puts(s3);
	}
}

