#include<stdio.h>

int func(int a,int b,int c)
{
	if((a>=b)&&(c<b))
	return b;
	else
		if(a>=b)
			return func(a,c,b);
			else
				return func(b,a,c);
}

int main()
{
	int a,b,c,result;
	
	scanf("%d %d %d",&a,&b,&c);
	
	result=func(a,b,c);
		printf("\n Result=%d",result);
}
