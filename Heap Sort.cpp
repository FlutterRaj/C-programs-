#include<stdio.h>


int swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

void maxHeapify(int arr[], int n, int i) {
    // Find largest among root, left child and right child
    int largest = i;
    int left = 2 * i ;
    int right = 2 * i + 1;
  
    if (left < n && arr[left] > arr[largest])
      largest = left;
  
    if (right < n && arr[right] > arr[largest])
      largest = right;
  
    // Swap and continue heapifying if root is not largest
    if (largest != i) {
      swap(&arr[i], &arr[largest]);
      maxHeapify(arr, n, largest);
    }
  }

  // Main function to do heap sort
  void heapSort(int arr[], int n) {
    // Build max heap
    for (int i = n / 2 ; i >= 1; i--)
      maxHeapify(arr, n, i);
  
    // Heap sort
    for (int i = n ; i >= 1; i--) {
      swap(&arr[1], &arr[i]);
  
      // Heapify root element to get highest element at root again
      maxHeapify(arr, i, 1);
    }
  }


int main() {
      int arr[20],n;
      
      scanf("%d",&n);
      
      for(int i=1;i<=n;i++){
      	scanf("%d",&arr[i]);
	  }
    
    heapSort(arr, n);
  
    printf("Sorted array is \n");
    for (int i = 1; i <= n; ++i)
      printf("%d ", arr[i]);
    printf("\n");
  }

