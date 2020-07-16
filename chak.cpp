#include<stdio.h>
int main()
{
    int n;
    long int fact;  /* n is the number whose factorial we have to find and fact is the factorial */
    scanf("%d",&n);
    
    int i;
    fact=1;

for(i=1;i<=n;i++)
{
  fact=fact*i;
}
printf("The Factorial of %d is : %ld",n,fact);

}
