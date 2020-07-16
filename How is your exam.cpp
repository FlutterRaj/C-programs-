#include<stdio.h>

int main()
{
	int i;
	
	char s[]= "How is your exam";
	
	for(i=0;s[i]!='\0';++i)
	{
		//if(s[i]%3==0)
		if(i%2==0)
			printf("%c",s[i]);
	}
	return 0;
}
