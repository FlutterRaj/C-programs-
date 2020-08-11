#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct product{
	int id;
	char name[20];
	int quantity;
	float costPrice;
	float sellPrice;
}proArr[10];


int menuItems();
int findProductById(int);
int addProduct(int);
int filterProduct;
int addQuantity();
int deletProduct();
int findProfitLoss();
int searchByName();
int allProducts();
int outOfStock();


static int productCount;
static int totalItems;
int ID,i,n;
float profit,loss;
char productName[20];  // for search a product by product name

int main(){

	printf("\n Enter How many product you want to insert::");
		scanf("%d",&n);
	
	totalItems += n;	
	addProduct(n);
	
	menuItems();
}

// MENU 

int menuItems(){
	int ch,found=0;
	while(1){
		printf("\n\n ***********MENU**************");
		printf("\n\n 1. Enter 1 for search product Details::");
		printf("\n 2. Enter 2 for Add new Product::");
		printf("\n 3. Enter 3 for Update product Quantity ::");
		printf("\n 4. Enter 4 for Delet a product ::");
		printf("\n 5. Enter 5 for Total Profit/Loss percentage ::");
		printf("\n 6. Enter 6 for Search By Product Name ::");
		printf("\n 7. Enter 7 for Show All products ::");
		printf("\n 8. Enter 8 for Show only \"OUT OF STOCK\" products ::");
		printf("\n 9. For Quit");
		printf("\n Enter Choice ::");
			scanf("%d",&ch);
		switch(ch){
			case 1: printf("\n Enter ID::"); scanf("%d",&ID); 
					found=findProductById(ID);
					if(found != true){
						printf("\n Product ID not Found ..!");
					}
			break;
			
			case 2:	printf("\n Enter how many product you want to insert::");
						scanf("%d",&n);
						totalItems += n;
						addProduct(n); 
			break;
			
			case 3: found=addQuantity();
					if(found == true){
						printf("\n Product Quantity Update Sucessfull ..!");
					}else{
						printf("\n Stock Update Failed ..!");
					}
			break;
			
			case 4: found=deletProduct();
					if(found == false){
						printf("\n Product ID not FOUND..!");
					}else{
						printf("\n ID No %d product Deleted ...!",found);
					}
			break;
			
			case 5: findProfitLoss();
			break;
			
			case 6: printf("\n Enter Product Name::"); scanf("%s",productName); 
					found=searchByName();
					if(found != true){
						printf("\n Product ID not Found ..!");
					}
			break;
			
			case 7: allProducts();
			break;
			
			case 8: outOfStock();
			break;
			
			case 9: exit(0);
			break;
			
			default: printf("\n No match Found ..!");
		}
	}
}

//Find product by ID

int findProductById(int ID){
	int i;
	for(i=0;i<totalItems;i++){
		if(proArr[i].id == ID){
			printf("\n Id=%d",proArr[i].id);
			printf("\n Name=%s",proArr[i].name);
				if(proArr[i].quantity>0){
					printf("\n Quantity=%d",proArr[i].quantity);
				}else{
					printf("\n Quantity = Out of Stock");
				}
			printf("\n Cost price=%.1f",proArr[i].costPrice);
			printf("\n Sell price=%.1f",proArr[i].sellPrice);
				if(proArr[i].sellPrice > proArr[i].costPrice){
					profit= proArr[i].sellPrice-proArr[i].costPrice;
					printf("\n Profit = %2.f percentage",(profit/proArr[i].costPrice)*100);
				}else{
					loss= proArr[i].costPrice-proArr[i].sellPrice;
					printf("\n Loss = %2.f percentage",(loss/proArr[i].sellPrice)*100);
			}
			return true;
		}
	}
	return false;
}

// Add a new Product on List

int addProduct(int num){
	
	for(i=productCount;i<totalItems;i++){
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
		productCount++;
	}
}

// Increse or decrese quantity

int addQuantity(){
	int newStock=0,ch;
	
	printf("\n Enter Product ID for Update Quantity ::");
		scanf("%d",&ID);
	
	for(i=0;i<totalItems;i++){
		if(proArr[i].id == ID){
			printf("\n Enter 1 For Add new Stock ::");
			printf("\n Enter 2 For Delet old Stock ::");
			printf("\n Enter yor Choice ::");
				scanf("%d",&ch);
			if(ch==1){
				printf("\n Enter new Stock Quantity ::");
					scanf("%d",&newStock);
					proArr[i].quantity+=newStock;		
			}else if(ch == 2){
				printf("\n Enter how many Quantity you want to delet ::");
					scanf("%d",&newStock);
					if(newStock > proArr[i].quantity){
						printf("\n Out of Range ...! \n Only %d Stocks are avaliable");
					}else{
					proArr[i].quantity-=newStock;	
					return true;	
					}
			}else{
				printf("\n Wrong Input ..! Choose between 1 and 2");
			}
		}
	}
	return false;
}

// Delet a product From list by ID

int deletProduct(){
	
	printf("\n Enter a Product ID for Delet ::");
		scanf("%d",&ID);
	for(i=0;i<totalItems;i++){
		if(proArr[i].id == ID){
			proArr[i] = proArr[i+1];
			productCount--;
			totalItems--;
			return ID;
		}
	}
	return false;
}

// Calculate the Total loss or Profit 

int findProfitLoss(){
	float totalProfit,totalLoss,totalSP,totalCP;
		
	for(i=0;i<totalItems;i++){
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
}

// Search any product By Name 

int searchByName(){
	
	for(i=0;i<totalItems;i++){
		if(strcmp(proArr[i].name,productName) == 0){
			printf("\n Id=%d",proArr[i].id);
			printf("\n Name=%s",proArr[i].name);
				if(proArr[i].quantity>0){
					printf("\n Quantity=%d",proArr[i].quantity);
				}else{
					printf("\n Quantity = Out of Stock");
				}
			printf("\n Cost price=%.1f",proArr[i].costPrice);
			printf("\n Sell price=%.1f",proArr[i].sellPrice);
				if(proArr[i].sellPrice > proArr[i].costPrice){
					profit= proArr[i].sellPrice-proArr[i].costPrice;
					printf("\n Profit = %2.f percentage",(profit/proArr[i].costPrice)*100);
				}else{
					loss= proArr[i].costPrice-proArr[i].sellPrice;
					printf("\n Loss = %2.f percentage",(loss/proArr[i].sellPrice)*100);
			}
			return true;
		}
	}
	return false;
}

// Show all products

int allProducts(){
	
	for(i=0;i<totalItems;i++){
		printf("\n\n Id=%d",proArr[i].id);
			printf("\n Name=%s",proArr[i].name);
				if(proArr[i].quantity>0){
					printf("\n Quantity=%d",proArr[i].quantity);
				}else{
					printf("\n Quantity = Out of Stock");
				}
			printf("\n Cost price=%.1f",proArr[i].costPrice);
			printf("\n Sell price=%.1f",proArr[i].sellPrice);
				if(proArr[i].sellPrice > proArr[i].costPrice){
					profit= proArr[i].sellPrice-proArr[i].costPrice;
					printf("\n Profit = %2.f percentage",(profit/proArr[i].costPrice)*100);
				}else{
					loss= proArr[i].costPrice-proArr[i].sellPrice;
					printf("\n Loss = %2.f percentage",(loss/proArr[i].sellPrice)*100);
				}
	}
}

// If any product is OUT OF STOCK

int outOfStock(){
	for(i=0;i<totalItems;i++){
		if(proArr[i].quantity <= 0){
			printf("\n\n Id=%d",proArr[i].id);
			printf("\n Name=%s",proArr[i].name);
		}
	}
}
