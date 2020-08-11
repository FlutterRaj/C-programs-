#include<stdio.h>

struct product{
	int id;
	char name[20];
	int quantity;
	float costPrice;
	float sellPrice;
	float profile_loss;
}proArr[10];
float profit,loss,totalProfit,totalLoss;

int main(){
	int i;
	for(i=0;i<2;i++){
		printf("\n Enter data for product %d",i+1);
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
	for(i=0;i<2;i++){
		if(proArr[i].sellPrice > proArr[i].costPrice){
			profit= proArr[i].sellPrice-proArr[i].costPrice;
			totalProfit+=(profit/proArr[i].costPrice)*100;
		}else{
			loss= proArr[i].costPrice-proArr[i].sellPrice;
			totalLoss+=(loss/proArr[i].sellPrice)*100;
		}
	}
	printf("\n\n Total profile = %.1f percent\n Total Loss = %.1f percent",totalProfit,totalLoss);
}
