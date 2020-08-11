#include<stdio.h>
int billGenarate(int unit);
int main(){
	billGenarate(20);
}

int billGenarate(int unit){
	
	int totalBill = 1;	
	int second300 = unit - 300;
	printf("\n%d",second300);
	int first100 = second300 - 100;
	printf("\n%d\n",first100);
	
	if(unit <=100){
		printf("40p per unit");
		totalBill *= unit*40;
		printf("\nYour Final Bill = %d p ",totalBill);
		printf("\n In Rupees : %d",totalBill / 100);
	}else if(unit>100 && unit<=300){
		printf("60p per unit");
		totalBill *= unit*60;
		printf("\nYour Final Bill = %d p ",totalBill);
		printf("\n In Rupees : Re.%d",totalBill / 100);
	}else{
		printf(" Re.1 per unit");
		totalBill *= unit*1;
		printf("\nYour Final Bill = Rs. %d ",totalBill);
	}
}
