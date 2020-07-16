#include<stdio.h>
int main()
{
	int c=0,i,j=0;
	char s1[10],s2[10];
	
	printf("enter string value::");
	scanf("%s",s1);
	
	for(i=0;s1[i]!='\0';i++)
	{
		c++;
	}
	
	printf("LENGTH=%d",c);
	
	for(i=c-1;i>=0;i--)
	{
		s2[j++]=s1[i];
	}
	s2[j]='\0';
	
	for(i=0,j=0;i<c,j<c;i++,j++)
	{
	
	if(s2[j]==s1[i])
	{

	printf("\npalindrome");
	break;
}
	else 
	{
	
	printf("\nnot");
	break;
}
    }
	//printf("\nAFTER REVERSE=%s",s2);
}
