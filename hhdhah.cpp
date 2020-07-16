#include<stdio.h>
 
int main() {
   int arr[20], i, n;
 
   scanf("%d", &n); /* Accepts the number of elements in the array */

  for (i = 0; i < n; i++) 
     scanf("%d", &arr[i]); /*Accepts the elements of the array */
      int arrIndex, revIndex;
    int temp; // Used for swapping 

revIndex = 0;
    arrIndex = n - 1;
    while(revIndex < arrIndex)
    {
        /* Copy value from original array to reverse array */
        temp = arr[revIndex];
        arr[revIndex] = arr[arrIndex];
        arr[arrIndex] = temp;
        
        revIndex++;
        arrIndex--;
    }
    
    for (i = 0; i < n; i++) {
      printf("%d\n", arr[i]); // For printing the array elements 
   }
 
   return (0);
}
