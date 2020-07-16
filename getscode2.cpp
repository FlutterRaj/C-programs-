#include<stdio.h>
int main()
{
	int n,p,r,s=0;
	
	printf("Enter a value for cheak neon or not::");
	scanf("%d",&n);
	
p=n*n;

while(p!=0)
{
	r=p%10;
	p=p/10;
	s=s+r;
}
printf("value=%d",s);

if(s==n)
printf("neon number");
else
printf("not");
}
