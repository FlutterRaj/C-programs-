#include<stdio.h>
#include<stdlib.h>
struct database
{
 	int product_id, quantity;
 	char product_name[50];
 	float cost_price, sale_price;
}*ptr;

int i, n, add, delet, choice,ID;
float totalProfit, totalLoss, totalSP, totalCP;

static int totalCount;

int searchProductById();
int main()
{
 printf("=================== Welcome to database =============================\n\n\n");
 while(1)
 {
 printf("\n\n===================================\n\n");
 printf("\n 1. Enter Products");
 printf("\n 2. Search Product By ID ::");
 printf("\n	3. Delete Products");
 printf("\n	4. Exit");
 printf("\n\nEnter your choice: ");
 scanf("%d", &choice);
 switch(choice)
 {
 case 1:
 printf("\nEnter number of records you want to enter: ");
 scanf("%d", &n);
 totalCount+=n;
 ptr = (struct database *)malloc(n * sizeof(struct database));
 for(i = 0; i < n; i++)
 {
 printf("\nEnter Product name: ");
 scanf("%s", (ptr + i) -> product_name);
 printf("\nEnter Product ID: ");
 scanf("%d", &(ptr + i) -> product_id);
 printf("\nEnter Quantity: ");
 scanf("%d", &(ptr + i) -> quantity);
 printf("\nEnter Product Cost: ");
 scanf("%f", &(ptr + i) -> cost_price);
 printf("\nEnter Sell Price: ");
 scanf("%f", &(ptr + i) -> sale_price);
 }
 printf("\n\n============= Displaying Information =============\n");
 for(i = 0; i < n; i++)
 {
 printf("\nProduct Name: %s", (ptr + i) -> product_name);
 printf("\nProduct Id: %d", (ptr + i) -> product_id);
 printf("\nProduct Quantity: %d", (ptr + i) -> quantity);
 printf("\nCost Price: %.2f", (ptr + i) -> cost_price);
 printf("\nSell Price: %.2f\n\n\n", (ptr + i) -> sale_price);
 }
 break;
 case 2: searchProductById();
 break;
 case 4:
 printf("Thanks for using our service!!!\n\n\n");
 exit(0);
 
 default : printf("\n Wrong Choice ..!");
 }
 }
}

int searchProductById(){
	printf("\n Enter ID ::");
		scanf("%d",&ID);
	
	
	
	for(i=0;i<n;i++){
		printf("\n Loop run %d times",i+1);
	}
}
