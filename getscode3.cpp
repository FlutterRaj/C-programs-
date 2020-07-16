#include<Stdio.h>

int main()
{
	int c=1,r,n,p,s=0;
	
	printf("Enter  value for cheak amstrong or not::");
	scanf("%d",&n);
	p=n;
	
	while(n!=0)
	{
		r=n%10;
		n=n/10;
		
		c=r*r*r;
		s=s+c;
	}
	printf("VALUE=%d",s);
	if(s==p)
	printf("amstrong  value");
	else
	printf("not amstrong");
}
