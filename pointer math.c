int main()
{
	int a,b,*p1,*p2,x,y,z;
	
	a=12;
	b=4;
	
	p1=&a;
	p2=&b;
	
	x= *p1**p2-6;
	y=4-*p2;
	
	printf("\n%u",p1);
	printf("\n%u",p2);
	printf("\n%d %d",a,b);
	printf("\n%d %d",x,y);
	
	*p2=*p2+3;
	*p1=*p2-5;
	z=*p1**p2-6;
	
	printf("\n%d %d",a,b);
	printf("\n%d",z);
}

