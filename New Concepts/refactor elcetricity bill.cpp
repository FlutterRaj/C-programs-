#include<stdio.h>

int billCalculator(int unit);
int main(){
	
	int userUnit;
	float userBill =0 ;
	
	printf("\n Enter your Unit ::");
		scanf("%d",&userUnit);
		
	userBill += billCalculator(userUnit);
	printf("\n Your Final Bill is :: %.2f Rupees",userBill);
	printf("\n Your Net Bill amount include charged of 250.00 Rupees is = %2.f Rupees",userBill+250.00);
}

int billCalculator(int unit){
	
	int reaminBill = unit;
	double bill = 0,finalBill=0;
	
	if(unit > 0){
		if(reaminBill <= 100){
			bill = (unit * 40) / 100;
		}else{
			bill = (100 * 40) /100;
		}
		finalBill += bill;
		reaminBill = reaminBill-100;
	}
	if(reaminBill >0){
		if(reaminBill > 199){
			bill = (200 * 60) /100;
		}else{
			bill = (reaminBill * 60) / 100;
		}
		finalBill += bill;		
		reaminBill = reaminBill-200;
	}
	if(reaminBill > 0){
		bill = (reaminBill * 1);
		finalBill += bill;	
	}	
	return finalBill;
}
