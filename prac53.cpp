#include<stdio.h>
#include<string.h>

int main()
{
	int l,l1;
    char s1[10],s2[10],s3[10];
    
    printf("enter a string value::");
    gets(s1);
    
    printf("enter 2nd string value::");
    gets(s2);
    
    l=strcmp(s1,s2);
    
    if(l==0)
    {
    l1=strlen(s1);
    printf("Length=%d",l1);
    }
    
    else
    {
    strcat(s1,s2);
    printf("\nAfter merge=%s",s1);
    
    l1=strlen(s1);
    printf("\nAfter merge ; Length is=%d",l1);
    
    strrev(s1);
    printf("\nAfter reverse=%s",s1);
    
    strcpy(s3,s1);
    printf("\nAfter copy to s3:: %s",s3);
    }
    
}
