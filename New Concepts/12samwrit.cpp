/*write a program to design a database of product table of the following fields:
product id, product name, quantity, cost price, sale price, profit or loss, percentage of profit/loss
insert 10 records*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct databse
{
 int product_id, quantity;
 char product_name[50];
 float cost_price, sale_price;
}pr[10];

int findProduct();
int ProductData(int);
int main()
{
 	int i, n, profit, loss;
 	float totalProfit,totalLoss,totalSP,totalCP;
 	
 /*product 1*/
 strcpy(pr[1].product_name, "Product 1");
 pr[1].product_id = 1;
 pr[1].quantity = 10;
 pr[1].cost_price = 100.0;
 pr[1].sale_price = 120.50;
 /*product 2*/
 strcpy(pr[2].product_name, "Product 2");
 pr[2].product_id = 2;
 pr[2].quantity = 20;
 pr[2].cost_price = 200.0;
 pr[2].sale_price = 150.0;
 /*product 3*/
 strcpy(pr[3].product_name, "Product 3");
 pr[3].product_id = 3;
 pr[3].quantity = 100;
 pr[3].cost_price = 500;
 pr[3].sale_price = 200;
 /*product 4*/
 strcpy(pr[4].product_name, "Product 4");
 pr[4].product_id = 4;
 pr[4].quantity = 400;
 pr[4].cost_price = 300;
 pr[4].sale_price = 400;
 /*product 5*/
 strcpy(pr[5].product_name, "Product 5");
 pr[5].product_id = 5;
 pr[5].quantity = 50;
 pr[5].cost_price = 200;
 pr[5].sale_price = 800;
 /*product 6*/
 strcpy(pr[6].product_name, "Product 6");
 pr[6].product_id = 6;
 pr[6].quantity = 50;
 pr[6].cost_price = 600;
 pr[6].sale_price = 500;
 /*product 7*/
 strcpy(pr[7].product_name, "Product 7");
 pr[7].product_id = 7;
 pr[7].quantity = 500;
 pr[7].cost_price = 200;
 pr[7].sale_price = 600;
 /*product 8*/
 strcpy(pr[8].product_name, "Product 8");
 pr[8].product_id = 8;
 pr[8].quantity = 600;
 pr[8].cost_price = 400;
 pr[8].sale_price = 500;
 /*product 9*/
 strcpy(pr[9].product_name, "Product 9");
 pr[9].product_id = 9;
 pr[9].quantity = 500;
 pr[9].cost_price = 500;
 pr[9].sale_price = 600;
 /*product 10*/
 strcpy(pr[10].product_name, "Product 10");
 pr[10].product_id = 10;
 pr[10].quantity = 400;
 pr[10].cost_price = 800;
 pr[10].sale_price = 500;
 
for(i=1;i<=10;i++){
		totalSP+=pr[i].sale_price;
		totalCP+=pr[i].cost_price;
	}
	printf("\n total Sell Price= %.1f",totalSP);
	printf("\n Total Cost Price= %.1f",totalCP);
	if(totalSP > totalCP){
			profit= totalSP-totalCP;
			totalProfit=(profit/totalCP);
			totalProfit+=(profit/totalCP)*100;
			printf("\n Total profit = %.2f percent",totalProfit);
	}else{
			loss= totalCP-totalSP;
			totalLoss+=(loss/totalSP)*100;
			printf("\n Total loss = %.2f percent",totalLoss);
	}

  findProduct();
}

int findProduct(){
	int ID,ch;
	while(1){
		printf("\n\n 1. Enter 1 for search product::");
		printf("\n 2. For Quit");
		printf("\n Enter Choice ::");
			scanf("%d",&ch);
		switch(ch){
			case 1: printf("\n Enter ID::"); scanf("%d",&ID); ProductData(ID);
			break;
			
			case 2: exit(0);
			break;
			
			default: printf("\n No match Found ..!");
		}
	}
}

int ProductData(int ID){
	int i,flag=0;
	float profit,loss;
	
	for(i=1;i<=10;i++){
		if(pr[i].product_id == ID){
			flag=1;
		}
	}
	if(flag == 0){
		printf("\n Sorry..!! No product Match Found\n");
	}else{
		printf("\n\n Data of product %d",ID);
		printf("\n Id=%d",pr[ID].product_id);
		printf("\n Name=%s",pr[ID].product_name);
		printf("\n Quantity=%d",pr[ID].quantity);
		printf("\n Cost price=%.1f",pr[ID].cost_price);
		printf("\n Sell price=%.1f",pr[ID].sale_price);
		if(pr[ID].sale_price > pr[ID].cost_price){
			profit= pr[ID].sale_price-pr[ID].cost_price;
			printf("\n Profit = %2.f percentage",(profit/pr[ID].cost_price)*100);
		}else{
			loss= pr[ID].cost_price-pr[ID].sale_price;
			printf("\n Loss = %2.f percentage",(loss/pr[ID].sale_price)*100);
		}
	}
}
 
