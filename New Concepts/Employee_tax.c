#include<stdio.h>

int taxCalculate(int);

int main(){
	int userAnualIncome;
	
	printf("\n Enter your anual income ::");
		scanf("%d",&userAnualIncome);
	
	taxCalculate(userAnualIncome);
}

int taxCalculate(int userAmount){
	
	if(userAmount <= 100000){
		printf("\nyour final tax is = %d rupees",0);
	}else if(userAmount > 100000 && userAmount<=500000){
		printf("\nyour final tax is = %d rupees",1000+((userAmount/100)*10));
	}else if(userAmount > 500000 && userAmount <= 800000){
			printf("\nyour final tax is = %d rupees",5000+((userAmount/100)*20));
	}else{
		printf("\nyour final tax is = %d rupees",10000+((userAmount/100)*30));
	}
}
