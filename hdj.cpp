#include<stdio.h>

int fact(int);
int main(){
	
 int i,n,sum=0;
 int finalSum = 0;

   printf("Input number of terms : ");
   scanf("%d",&n);
   printf("\nThe odd numbers are :");
   for(i=1;i<=n;i++)
   {
   	int oddNum = 2*i-1;
     printf("%d ",oddNum);
     sum += oddNum;
     finalSum=fact(oddNum);
   }
   printf("\nThe Sum of odd Natural Number upto %d terms : %d \n",n,sum);
   printf("\n Fact of odd Numbers upto %d terms = %d",n,finalSum);
}

int fact(int num){
	int fact=1,i;
	static int factSum = 0;
	
	for(i=1;i<=num;i++){
		fact = fact * i;
	}
	factSum += fact;
	return factSum;
}
