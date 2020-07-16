#include <stdio.h>
 int main()
{
    int N,p; 
    scanf("%d",&N);
    
    int count=0,tNum;
    p=N;
 
    while(N>0)
    {
    	N=N/10;
    		count++;
	}
 
    printf("Total numbers of digits are: %d in number: %d.",count,p);
}
