#include<Stdio.h>

int main()
{
	int i,c=0,j=0;
	char s1[10],s2[10];
	
	printf("enter a string value::");
	scanf("%s",s1);
	
	for(i=0;s1[i]!='\0';i++)
	{
		c++;
	}
	
	printf("Length=%d",c);
	
	for(i=c-1;i>=0;i--)
	{
		s2[j++]=s1[i];
	}
	
	s2[j]='\0';
	
	printf("\nReverse=%s",s2);
	
	for(i=0,j=0 ; i<c,j<c ; i++,j++)
	{
		if(s1[i]==s2[j])
		{
			printf("\npalindrome");
			break;
		}
		else
		printf("\nnot palindrome");
		break;
	}
}
