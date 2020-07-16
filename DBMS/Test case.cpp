#include<stdio.h>

int main()	{
	FILE *fp;
	int ch;
	
	fp=fopen("D:/File/file.txt","r");
	
	if(fp==NULL)	
		printf("\n No File present");
	else
		printf("\n File Ready for open");
		
		printf("\n");
	while((ch=fgetc(fp))!=EOF)
	{
		printf(" %c",ch);
	}
}
