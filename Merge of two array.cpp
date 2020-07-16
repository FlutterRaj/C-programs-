#include <stdio.h>
void merge(int a[], int m, int b[], int n, int sorted[]);
int main() 
{
int a[100], b[100], m, n, c, sorted[200];

/* a[100] and b[100] are the two given arrays and m and n are the their respective sizes. c is a counter and sorted[200] is the final sorted array */

scanf("%d", &m); //Number of elements in the first array

  for (c = 0; c < m; c++) 
    {
    scanf("%d", &a[c]); //Elements of first array is read
    }

  scanf("%d", &n); //Number of elements in second array

  for (c = 0; c < n; c++) 
  {
    scanf("%d", &b[c]); //Elements of second array is read
  }

 merge(a, m, b, n, sorted); 

//The merged function is called where the two arrays are merged and sorted.

  printf("Sorted array:\n");

  for (c = 0; c < m + n; c++) {
    printf("%d\n", sorted[c]);
  }
  
  return 0;
}
void merge(int a[], int m, int b[], int n, int sorted[])
{
  
 int i = 0;
 int j = 0;
 int k = 0;
 int res[100];
 
 // Merging starts
 while (i < m && j < n) {
 if (a[i] <= b[j]) {
 res[k] = a[i];
 i++;
 k++;
 } else {
 res[k] = b[j];
 k++;
 j++;
 }
 }
 
 /* Some elements in array 'arr1' are still remaining
 where as the array 'arr2' is exhausted */
 
 while (i < m) {
 res[k] = a[i];
 i++;
 k++;
 }
 
 /* Some elements in array 'arr2' are still remaining
 where as the array 'arr1' is exhausted */
 
 while (j < n) {
 res[k] = b[j];
 k++;
 j++;
 }
}


