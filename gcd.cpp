#include <stdio.h>
int main()
{
   int x, y, GCD; 
   scanf("%d %d", &x, &y); //Two numbers x and y are taken from the test cases
   //You can use any other variable as required 
   //The last part is already written 

int a,b;
a=x,b=y;

while( a != b )
{
  if(a>b)
    a=a-b;
  else
    b=b-a;

}
  GCD=a;

printf("GCD of the numbers %d and %d is %d", x, y,GCD);

	 return 0;
}
