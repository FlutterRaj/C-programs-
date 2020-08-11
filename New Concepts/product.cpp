//wap a to desine a structre or database of the product entity of the following fields,
//product_id
//product name
//quantity
//cost price,
//sell price,
//profit of lose,
//percentage of profit,
//.. Insert 10 records within this tabel and display it ..!
#include<stdio.h>

struct product{
	int id;
	char name[20];
	int quantity;
	float costPrice;
	float sellPrice;
	float profile_loss;
};

int main(){
	int i,n;
	struct product proArr[10];
	float profit,loss,totalProfit,totalLoss,totalSP,totalCP;
	
	printf("\n Enter product Number ::");
		scanf("%d",&n);
	
	for(i=0;i<n;i++){
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
	for(i=0;i<n;i++){
//		printf("\n\n Data of product %d",i+1);
//		printf("\n Id=%d",proArr[i].id);
//		printf("\n Name=%s",proArr[i].name);
//		printf("\n Quantity=%d",proArr[i].quantity);
//		printf("\n Cost price=%f",proArr[i].costPrice);
//		printf("\n Sell price=%f",proArr[i].sellPrice);
		totalSP+=proArr[i].sellPrice;
		totalCP+=proArr[i].costPrice;
	}
	printf("\n TOtal sp = %.1f",totalSP);
	printf("\n TOtal cp = %.1f",totalCP);
	
	if(totalSP > totalCP){
			profit= totalSP-totalCP;
			totalProfit+=(profit/totalCP)*100;
			printf("\n Total profit = %.2f percent",totalProfit);
	}else{
			loss= totalCP-totalSP;
			totalLoss+=(loss/totalSP)*100;
			printf("\n Total loss = %.2f percent",totalLoss);
	}

}





