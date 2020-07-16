#include<stdio.h>
int main()
{
   int a,b,c,m1,m2,m3,m4;
   
   printf("enter 3 num::");
   scanf("%d %d %d",&a,&b,&c);
   
   /*m1=(a>b)?a:b;
   m2=(b>c)?b:c;
   m3=(m1>m2)?m1:m2;*/
   
   if(a>b && a>c)
   printf("max=%d",a);
   
   else if(b>c && b>a)
   printf("max=%d",b);
   
   else
   printf("max=%d",c);
}
