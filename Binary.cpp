#include <stdio.h>
int binary_conversion(int); //function to convert binary to decimal number
int main()
  {
  int num, bin;  //num is the decimal number and bin is the binary equivalent for the number

  scanf("%d", &num); //The decimal number is taken from the test case data
  bin = binary_conversion(num); //binary number is stored in variable bin
  printf("The binary equivalent of %d is %d\n", num, bin);
  return 0;
  }
  
  int binary_conversion(int num)
  {
  	int x=num;
  	
  	while(x!=0)
  	{
  	 if(num%2==0)
  	 	return 0;
  		else
  			return 1;
  		
  		x=num/2;
  	}
  }
