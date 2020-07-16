#include<stdio.h>
 
int main() {
   int arr[20], i, n;
 
   scanf("%d", &n); /* Accepts the number of elements in the array */

  for (i = 0; i < n; i++) 
     scanf("%d", &arr[i]); /*Accepts the elements of the array */

int revIndex = 0;
   int arrIndex = n - 1;
   int reverse;
    while(arrIndex >= 0)
    {
        /* Copy value from original array to reverse array */
        reverse[revIndex] = arr[arrIndex];
        
        revIndex++;
        arrIndex--;
    }
    for (i = 0; i < n; i++) {
      printf("%d\n", arr[i]); // For printing the array elements 
   }
 
   return (0);
}


