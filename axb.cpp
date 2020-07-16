#include<stdio.h>

int main()
{
	int pow,num,result=1;
	
	printf("\n Enter a num::");
		scanf("%d",&num);
	printf("\n Enter the pow::");
		scanf("%d",&pow);
		
	while(pow!=0)
	{
		result*=num;
		pow--;
	}
	printf("\n Result=%d",result);
}
