
#include<stdio.h>
void display(int array[], int length);
int main(){
 
    //You can take input in array using loop and scanf
    //Here I have pre-initialized array for simplicity
    int array[] = {1, 2, 3};
    int temp, length = 3;
 
    int i=0;           //For pointing 1st element of the array
    int j=length - 1;  //For pointing last element of the array
 
    //Displaying Original array
    printf("Original array:   ");
    display(array,length);
 
 
    while( i < j){
 
        //swap
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
 
        //Update i and j
        i++;  
        j--;  
    }
 
    printf("Reverse of array: ");
    display(array,length);
}
 
//To Output array
void display(int array[], int length){
    int i;
    for(i=0; i<length; i++){
        printf("%d ",array[i]);
    }
    printf("\n"); 
}
