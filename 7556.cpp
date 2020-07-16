#include<stdio.h>
#include<math.h>
float fun (float x); //Function fun returns the function value of f(x)
void bisection (float *x, float a, float b, int *itr); // This function computes the root of f(x) using bisection method

int main ()
{
    int itr = 0, maxmitr=10;
    float x, a=1.0, b=2.0, allerr, x1; // x is the value of root in each iteration, x1 is the final value of the root 
   // a and b are the initial range for calculating the root using bisection method
      
scanf("%f", &allerr);  // allerr is the allowable error taken from test case data 
    bisection (&x, a, b, &itr);
    do
    {
        if (fun(a)*fun(x) < 0)
            b=x;
        else
            a=x;
        bisection (&x1, a, b, &itr);
        if (fabs(x1-x) < allerr)
        {
            printf("After %d iterations, root = %6.4f\n", itr, x1);
            return 0;
        }
        x=x1;
    }
    while (itr < maxmitr);
    printf("The solution does not converge or iterations are not sufficient");
    return 1;
}

float fun (float x)
{
    return (2*x*x*x - 3*x - 5);
}

void bisection (float *x, float a, float b, int *itr)
/* this function performs and prints the result of one iteration */
{
    *x=(a+b)/2;
    ++(*itr);
    printf("Iteration no. %3d X = %7.5f\n", *itr, *x);
}
