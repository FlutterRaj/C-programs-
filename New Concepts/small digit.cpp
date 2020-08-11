#include<stdio.h>
 
int main()
{
    int num, temp = 0, small;
    printf("\nEnter A Number for find the min Digit:\t");
    scanf("%d", &num);
    
    small = num % 10;
    
    while(num > 0)
    {
        temp = num%10;
        
        if(temp < small)
        {
            small = temp;   
        }   
        num = num / 10;       
    }       
    
    printf("\nSmallest Digit in the Integer: \t%d\n", small);
    return 0;
}
