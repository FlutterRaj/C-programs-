#include<stdio.h>

int main()
{
	int a,b;
	int ch;
	
	printf("Enter two value::");
	scanf("%d %d",&a,&b);
	
	printf("enter operation::");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
		    printf("sum=%d",a+b);
		    break;
		
		case 2:
			printf("\nsub=%d",a-b);
			break;
			
		case 3:
			printf("\nmulti%d",a*b);
			break;
			
		case 4:
			printf("\ndiv=%d",a/b);
			break;
			
		default: printf("\nwrong input");
	}
}
