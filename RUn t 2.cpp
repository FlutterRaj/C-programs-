#include<stdio.h>
int main()
{
int N;
float sum = 0.0;
scanf("%d",&N);

double i;

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
