#include<stdio.h>

int main()
{
	int a[]={1,2,3},n=3;
	int i,j=n-1;

		int temp;
		while( i < j){
 
        //swap
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
 
        //Update i and j
        i++;  
        j--;  
    }
	for(i=0; i<n; i++){
        printf("%d ",a[i]);}
}
