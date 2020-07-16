#include<stdio.h>
#include<conio.h>

int call()
{
	int n;
	
	printf("What stack you want to use ? 1 o 2	::");
		scanf("%d",&n);
		
		return n;
}

int main()
{
	int f;
	f=call();
		if(f==1)
			printf("1");
}
