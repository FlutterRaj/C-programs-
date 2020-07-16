#include<stdio.h>

int fact(int);
int main()
{
   int f,n;
   
   printf("Enter a value::");
   scanf("%d",&n);
   
   f=fact(n);
   
   printf("FACTORIAL=%d",f);	
}

int fact(int n)
{
	int f=1,i;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
