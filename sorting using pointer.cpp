 #include <stdio.h>
int main()
{
    int a[100],i, n;
    scanf("%d",&n);  //Number of elements of the array is taken from the test case data 
   
   for (i=0; i<n; i++)
    {
        scanf("%d",a+i); // Input the array elements
    }
    int j,t;
int* ptr=a;


 for (i = 0; i < n; i++) { 
  
        for (j = i + 1; j < n; j++) { 
  
            if (*(ptr + j) < *(ptr + i)) { 
  
                t = *(ptr + i); 
                *(ptr + i) = *(ptr + j); 
                *(ptr + j) = t; 
            } 
        } 
    } 
//   Printing sorted array in ascending order 
    for (i=0; i<n; i++)
    {
        printf("%d\n",*(a+i));
    }
    return 0;
   }

