#include<stdio.h>

int main()
{
	int a,b,c;
	char op;
	
	printf("enter two value::");
	scanf("%d %d",&a,&b);
	
	printf("enter operation::");
	scanf(" %c",&op);
	
	switch(op)
	{
		case '+': c=a+b;
		printf("sum=%d",c);
		break;
		
		case '-': c=a-b;
		printf("sub=%d",c);
		break;
		
		case '*': c=a*b;
		printf("Multi=%d",c);
		break;
		
		case '/': c=a/b;
		printf("Divison=%d",c);
		break;
		
		default: printf("wrong input");
	}
}
