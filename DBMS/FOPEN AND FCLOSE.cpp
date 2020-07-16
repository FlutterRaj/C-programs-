#include<stdio.h>

int main()	{
	
	FILE *fp;
	char ch;
	
	fp= fopen("Raj.txt","w");
	
	printf("\ Enter Line ::");
		while((ch=getchar())!=EOF)
		{
			putc(ch,fp);
		}
		fclose(fp);
		
		printf("\n OUtput::");
		
		fp= fopen("Raj.txt","r");
		while((ch=getc(fp))!=EOF)	
		{
			printf("%c",ch);
		}
		fclose(fp);
}
