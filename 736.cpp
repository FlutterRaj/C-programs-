#include<stdio.h>
#include<math.h>
float fun (float x); //Function fun returns the function value of f(x)
void bisection (float *x, float a, float b, int *itr); // This function computes the root of f(x) using bisection method
float c;
float func(float x);
int main ()
{
    int itr = 0, maxmitr=10;
    float x, a=1.0, b=2.0, allerr, x1; // x is the value of root in each iteration, x1 is the final value of the root 
   // a and b are the initial range for calculating the root using bisection method
      
scanf("%f", &allerr);  // allerr is the allowable error taken from test case data 
    bisection (&x, a, b, &itr);
    
    printf("The function used is 2*x*x*x - 3*x - 5");
    printf("a = %f\n",a);
    printf("b = %f\n",b);
    bisection(a,b);
    printf("\n");
    printf("Accurate Root calculated is = %f\n",c);
}
float func(float x)
{
    return 2*x*x*x - 3*x - 5;
}
 
float e=0.001;

 
int bisection(float a,float b)
{
    if(func(a) * func(b) >= 0)
    {
        printf("Incorrect a and b");
        return;
    }
 
    c = a;
 
    while ((b-a) >= e)
    {
        c = (a+b)/2;
        if (func(c) == 0.0){
            printf("Root = %lf\n",c);
            break;
        }
        else if (func(c)*func(a) < 0){
                printf("Root = %lf\n",c);
                b = c;
        }
        else{
                printf("Root = %lf\n",c);
                a = c;
        }
    }
}
