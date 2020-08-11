#include<stdio.h>

int totalAmount(int);

int main(){
	int taxiNumber,totalKm;
	char userName[30];
	
	printf("\n Enter Your Name ::");
		fgets(userName,sizeof(userName),stdin);
	printf("\n Enter Taxi number:: ");
		scanf("%d",&taxiNumber);
	printf("\n Enter Kilometer travelled by you :: ");
		scanf("%d",&totalKm);
	
	totalAmount(totalKm);
}

int totalAmount(int km){
	
	int remainKm = km;
	int finalAmount = 0;
	int billPerKm = 0 ;
	
	if(km>0){
		if(km < 10){
			billPerKm = km*25;
			printf("\n Total amount on first %d km = %d",km,billPerKm);
			remainKm -= km;
		}else{
			billPerKm = 10*25;
			printf("\n Total amount on first 10 km = %d",billPerKm);
			remainKm -= 10;
		}
		finalAmount += billPerKm ;
		printf("\n Remain= %d",remainKm);
	}
	if(remainKm > 0){
		if(remainKm < 20){
			billPerKm = remainKm*10;
			printf("\n\n Total amount on next %d km = %d",remainKm,billPerKm);
			remainKm -=remainKm;
		}else{
			billPerKm = 20*10;
			printf("\n\n Total amount on next 20 km= %d",billPerKm);
			remainKm -=20;
		}
		finalAmount += billPerKm ;
		printf("\n Remain= %d",remainKm);
	}
	if(remainKm > 0){
		if(remainKm < 40){
			billPerKm = remainKm*15;
			printf("\n\n Total amount on next %d km= %d",remainKm,billPerKm);
			remainKm -=remainKm;
		}else{
			billPerKm = 40*15;
			printf("\n\n Total amount on next 40 km= %d",billPerKm);
			remainKm -=40;
		}
		finalAmount += billPerKm ;
		printf("\n Remain= %d",remainKm);
	}
	if(remainKm>0){
		billPerKm = remainKm * 12;
		printf("\n\n Total amount on above 70 km= %d",billPerKm);
		finalAmount += billPerKm ;
	}
	printf("\n\n\n Final amount = %d",finalAmount);
}
