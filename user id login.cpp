#include<stdio.h>
#include<string.h>

int fact(int n);

int main()
{
	int n,flag1=0,flag2=0,i;
	char admin[100][100]={"Raj","rAj","raJ","raj","RAJ","RaJ","Rahul","rahul"};
	char admin_pass[100][100]={"#rajkar","rahul123"};
	char key[100];
	char pass[100];
	
	printf("\n Enter your name ::");	
		gets(key);
	printf("\n Enter your password ::");
		gets(pass);
				
		for(i=0;i<9;i++)
		{
			if(strcmp(admin[i],key)==0)
			{
				flag1=1;
				break;
			}
		}
		
			for(i=0;i<2;i++)
		{
			if(strcmp(admin_pass[i],pass)==0)
			{
				flag2=1;
				break;
			}
		}
		
		if(flag1==0 || flag2==0)
		{
			printf("\n Sorry .. No entry");
				printf("\n not matched on database.."); }
		else
		{
			printf("\n\n You sucessfully logged in sir.");
			printf("\n\n Now Enter a value for factorial::");
				scanf("%d",&n);
				
				int f=fact(n);
					printf("\nFactorial of %d is  %d",n,f);
		}
}
int fact(int n)
{
	if(n==0 || n==1)
		return 1;
	else
		return (n*fact(n-1));
}
