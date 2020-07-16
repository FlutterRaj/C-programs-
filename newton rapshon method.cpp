#include<stdio.h>
#include<math.h>
float f(float x)
{
    return x*log10(x) - 1.2;
}
float df (float x)
{
    return log10(x) + 0.43429;
}
int main()
{
    int h,itr=100, maxmitr=100,allerr=10; // itr is the iteration number and maxitr is the maximum allowable iteration 
    float x0=1.0, x1; // x0 is the initial value and x1 is result 
    scanf("%d", &maxmitr);
    
    for (itr=1; itr<=maxmitr; itr++)
    {
        h=f(x0)/df(x0);
        x1=x0-h;
        printf(" At Iteration no. %3d, x = %9.6f\n", itr, x1);
        if (fabs(h) < allerr)
        {
            printf("After %3d iterations, root = %8.6f\n", itr, x1);
            return 0;
        }
        x0=x1;
    }
    printf(" The required solution does not converge or iterations are insufficient\n");
    return 1;
}
