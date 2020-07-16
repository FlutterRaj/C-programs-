#include<stdio.h>

int fact(int n);

main()	{
	
//	int n,f;
	int f=fact(10);
//	printf("\n Enter a value ::");
//		scanf("%d",&n);
//		
//		f=fact(n);
			printf("\n Factorial of 5 is %d",f);
}

int fact(int n)	{
	if(n==0 || n==1)
		return 1;
	else 
		return n*fact(n-1);
}
