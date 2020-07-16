/*
 * C Program to find the Sum of Series 1 + 1/2 + 1/3 + 1/4 + ... + 1/N
 */
#include <stdio.h>
 
int main()
{
    double N,i;
    float sum=0.0;
 
    printf("\n enter the number ");
    scanf("%lf", &N);
    for (i = 1; i <= N; i++)
    {
        sum = sum + (1 / i);
        if (i == 1)
        	continue;
//            printf("\n 1 +");
        else if (i == N)
        	continue;
//            printf(" (1 / %lf)", i);
        else
        	continue;
//            printf(" (1 / %lf) + ", i);
    }
    printf("\n The sum of the given series is %.2f", sum);
}

