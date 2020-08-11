#include<stdio.h>
#include<stdlib.h>

struct product{
	int id;
	char name[20];
	int quantity;
	float costPrice;
	float sellPrice;
	float profile_loss;
}proArr[10];

float profit,loss;
int filterProduct;

int findProduct(int);
int ProductData(int,int);

int main(){
	int i,n;
	float totalProfit,totalLoss,totalSP,totalCP;
	
	printf("\n Enter how many product you want to insert::");
		scanf("%d",&n);
		
	for(i=1;i<=n;i++){
		printf("\n Enter data for product %d",i);
		printf("\n Enter product id::");
			scanf("%d",&proArr[i].id);
		printf("\n Enter product name::");
			scanf("%s",proArr[i].name);
		printf("\n Enter product quantity::");
			scanf("%d",&proArr[i].quantity);
		printf("\n Enter product cost price::");
			scanf("%f",&proArr[i].costPrice);
		printf("\n Enter product sell price::");
			scanf("%f",&proArr[i].sellPrice);
	}
	for(i=1;i<=n;i++){
		totalSP+=proArr[i].sellPrice;
		totalCP+=proArr[i].costPrice;
	}
	if(totalSP > totalCP){
			profit= totalSP-totalCP;
			totalProfit+=(profit/totalCP)*100;
			printf("\n Total profit = %.2f percent",totalProfit);
	}else{
			loss= totalCP-totalSP;
			totalLoss+=(loss/totalSP)*100;
			printf("\n Total loss = %.2f percent",totalLoss);
	}
	
	findProduct(n);
}

int findProduct(int number){
	int ID,ch;
	while(1){
		printf("\n\n 1. Enter 1 for search product::");
		printf("\n 2. For Quit");
		printf("\n Enter Choice ::");
			scanf("%d",&ch);
		switch(ch){
			case 1: printf("\n Enter ID::"); scanf("%d",&ID); ProductData(number,ID);
			break;
			
			case 2: exit(0);
			break;
			
			default: printf("\n No match Found ..!");
		}
	}
}

int ProductData(int number,int ID){
	int i,flag=0;
	
	for(i=1;i<=number;i++){
		if(proArr[i].id == ID){
			flag=1;
		}
	}
	if(flag == 0){
		printf("\n Sorry..!! No product Match Found\n");
	}else{
		printf("\n\n Data of product %d",ID);
		printf("\n Id=%d",proArr[ID].id);
		printf("\n Name=%s",proArr[ID].name);
		printf("\n Quantity=%d",proArr[ID].quantity);
		printf("\n Cost price=%.1f",proArr[ID].costPrice);
		printf("\n Sell price=%.1f",proArr[ID].sellPrice);
		if(proArr[ID].sellPrice > proArr[ID].costPrice){
			profit= proArr[ID].sellPrice-proArr[ID].costPrice;
			printf("\n Profit = %2.f percentage",(profit/proArr[ID].costPrice)*100);
		}else{
			loss= proArr[ID].costPrice-proArr[ID].sellPrice;
			printf("\n Loss = %2.f percentage",(loss/proArr[ID].sellPrice)*100);
		}
	}
}
