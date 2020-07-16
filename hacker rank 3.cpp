#include<stdio.h>

int max_of_four(int,int,int,int);
int main()
{
    int a,b,c,d;

    scanf("%d %d %d %d",&a,&b,&c,&d);

    max_of_four(a,b,c,d);

}

int max_of_four(int a,int b,int c,int d)
{
    if(a>b && a>c && a>d)
        printf("%d",a);
    if(b>c && b>d)
        printf("%d",b);
    if(c>d)
        printf("%d",c);
    else {
        printf("%d",d);
    }
}
