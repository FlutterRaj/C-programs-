#include<stdio.h>
int main()
{
int N;
float sum = 0.0;
scanf("%d",&N);

int i;

for (i = 1; i <= N; i++)
    {
        sum = sum + (1 / i);
        if (i == 1)
            printf("\n 1 +");
        else if (i == N)
            printf(" (1 / %lf)", i);
        else
            printf(" (1 / %lf) + ", i);
    }
   	 printf("Sum of the series is: %.2f",sum);
}
