#include<Stdio.h>

int main()	{
	
	FILE *fp; int ch;
	fp= fopen("abc.txt","r");
	
	printf("\n Enter data :: ");
	while((ch=getchar())!=EOF)
	{
		putc(ch,fp);	
	}
	
	fclose(fp);
	
	fp= fopen("abc.text","r");
		while((ch=fgetc(fp))!=EOF)
	{
		printf(" %c",ch);
	}
		
		//closing the file pointer
		fclose(fp);
		return 0;	
}
