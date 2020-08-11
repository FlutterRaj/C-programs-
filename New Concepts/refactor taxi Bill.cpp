#include<stdio.h>
#include<string.h>
int totalAmount(int);

int main(){
	int taxiNumber,totalKm,finalAmount;
	char userName[30];
	
	printf("\n Enter Your Name ::");
//		fgets(userName,sizeof(userName),stdin);
		gets(userName);
	printf("\n Enter Taxi number:: ");
		scanf("%d",&taxiNumber);
	printf("\n Enter Kilometer travelled by you :: ");
		scanf("%d",&totalKm);
	
	finalAmount=totalAmount(totalKm);
	printf("\n Hey %s \n your Taxi Number is %d,\n you travled %d km,\n And your final Bill = %d",userName,taxiNumber,totalKm,finalAmount);
}

int totalAmount(int km){
	
	int remainKm = km;
	int finalAmount = 0;
	int billPerKm = 0 ;
	
	if(km>0){
		if(km < 10){
			billPerKm = km*25;
			remainKm -= km;
		}else{
			billPerKm = 10*25;
			remainKm -= 10;
		}
		finalAmount += billPerKm ;
	}
	if(remainKm > 0){
		if(remainKm < 20){
			billPerKm = remainKm*10;
			remainKm -=remainKm;
		}else{
			billPerKm = 20*10;
			remainKm -=20;
		}
		finalAmount += billPerKm ;
	}
	if(remainKm > 0){
		if(remainKm < 40){
			billPerKm = remainKm*15;
			remainKm -=remainKm;
		}else{
			billPerKm = 40*15;
			remainKm -=40;
		}
		finalAmount += billPerKm ;
	}
	if(remainKm>0){
		billPerKm = remainKm * 12;
		finalAmount += billPerKm ;
	}
	return finalAmount;
}

