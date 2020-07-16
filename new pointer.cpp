#include<stdio.h>

int main()
{
	char a='x',*p1=&a;
	int b=12,*p2=&b;
	float c=12.4, *p3=&c;
	double d=18.43, *p4=&d;
	
	printf("\n sizeof(p1)=%u,sizeof(*p1)=%u",sizeof(p1),sizeof(*p1));
	printf("\n sizeof(p2)=%u,sizeof(*p2)=%u",sizeof(p2),sizeof(*p2));
	printf("\n sizeof(p3)=%u,sizeof(*p3)=%u",sizeof(p3),sizeof(*p3));
	printf("\n sizeof(p4)=%u,sizeof(*p4)=%u",sizeof(p4),sizeof(*p4));

}
