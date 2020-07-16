#include<stdio.h>
#define func1(a,b)a>b?b:a
#define func2(a,b);{temp=a;a=b;b=temp;}

int main()
{
	int a=3,b=5,temp;
	
	if((3+func1(a,b))>b)
	func2(a,b);
	printf("%d %d",a,b);
}
