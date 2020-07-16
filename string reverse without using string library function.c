#include<Stdio.h>

int main()
{
	int c=0,i,j;
	char s1[10],s2[10];
	
	printf("enter a string value::");
	scanf("%s",s1);
	
	for(i=0;s1[i]!='\0';i++)
	{
		c++;
	}
	
	for(i=c-1;i>=0;i--)
	{
		s2[j++]=s1[i];
	}
		s2[j]='\0';
			
	printf("\n After reverse=%s",s2);
}
