#include<stdio.h>

int commissionCalculate(int);
int main(){
	int salesAmount;
	
	printf("\n Enter your Sales Amount ::");
		scanf("%d",&salesAmount);
	
	printf("\n your Commission is = %d Rupees",commissionCalculate(salesAmount));
}

int commissionCalculate(int amount){
	
	if(amount<5000){
		return (amount/100)*5;
	}else if(amount >=5000 && amount <10000){
		return (amount/100)*8;
	}else{
		return (amount/100)*10;
	}
}
