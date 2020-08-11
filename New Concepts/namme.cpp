#include<stdio.h>
#include<string.h>

int main(){
	
	char name[20],name1[20];
	int cmp;
	
	printf("\n Enter your Name ::");
		gets(name);
		
	printf("\n Enter same name again ::");
		gets(name1);
		
	printf("\n name1 = %s",name);
	printf("\n name2 = %s",name1);
	
	cmp = strcmp(name,name1);
	printf("\n Comp = %d",cmp);


}
