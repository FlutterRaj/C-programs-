#include<stdio.h>
#include<string.h>

void reverse(char[], int, int);
    int main()
    {
        char str1[20];
        scanf("%s", str1);
        
        int i,j;
        reverse(str1,i,j);
}

void reverse(char str1[],int i,int j)
{
	int c=0,x=0;
	char str2[20];
	for(i=0;str1[i]!='\0';i++)
	{
		c++;
	}
	printf("Length=%d",c);
	
		for(i=c-1;i>=0;i--)
	{
		str2[x++]=str1[i];
	}
		str2[x]='\0';
	
	printf("\n Reverse=%s",str2);
		
		
}
