/*write a program to design a database of product table of the following fields:
product id, product name, quantity, cost price, sale price, profit or loss, percentage of profit/loss
insert 10 records*/
#include<stdio.h>
#include<string.h>
struct databse
{
 int product_id, quantity;
 char product_name[50];
 float cost_price, sale_price, profit, loss, percent;
};
int main()
{
 int i, n, profit, loss, total;
 struct databse pr1;
 struct databse pr2;
 struct databse pr3;
 struct databse pr4;
 struct databse pr5;
 struct databse pr6;
 struct databse pr7;
 struct databse pr8;
 struct databse pr9;
 struct databse pr10;
 /*product 1*/
 strcpy(pr1.product_name, "Product 1");
 pr1.product_id = 1;
 pr1.quantity = 10;
 pr1.cost_price = 100.0;
 pr1.sale_price = 120.50;
 /*product 2*/
 strcpy(pr2.product_name, "Product 2");
 pr2.product_id = 2;
 pr2.quantity = 20;
 pr2.cost_price = 200.0;
 pr2.sale_price = 150.0;
 /*product 3*/
 strcpy(pr3.product_name, "Product 3");
 pr3.product_id = 3;
 pr3.quantity = 100;
 pr3.cost_price = 500;
 pr3.sale_price = 200;
 /*product 4*/
 strcpy(pr4.product_name, "Product 4");
 pr4.product_id = 4;
 pr4.quantity = 400;
 pr4.cost_price = 300;
 pr4.sale_price = 400;
 /*product 5*/
 strcpy(pr5.product_name, "Product 5");
 pr5.product_id = 5;
 pr5.quantity = 50;
 pr5.cost_price = 200;
 pr5.sale_price = 800;
 /*product 6*/
 strcpy(pr6.product_name, "Product 6");
 pr6.product_id = 6;
 pr6.quantity = 50;
 pr6.cost_price = 600;
 pr6.sale_price = 500;
 /*product 7*/
 strcpy(pr7.product_name, "Product 7");
 pr7.product_id = 7;
 pr7.quantity = 500;
 pr7.cost_price = 200;
 pr7.sale_price = 600;
 /*product 8*/
 strcpy(pr8.product_name, "Product 8");
 pr8.product_id = 8;
 pr8.quantity = 600;
 pr8.cost_price = 400;
 pr8.sale_price = 500;
 /*product 9*/
 strcpy(pr9.product_name, "Product 9");
 pr9.product_id = 9;
 pr9.quantity = 500;
 pr9.cost_price = 500;
 pr9.sale_price = 600;
 /*product 10*/
 strcpy(pr10.product_name, "Product 10");
 pr10.product_id = 10;
 pr10.quantity = 400;
 pr10.cost_price = 800;
 pr10.sale_price = 500;
 /*print product 1*/
 printf("Product name: %s\n",pr1.product_name);
 printf("Product id: %d\n", pr1.product_id);
 printf("Product quantity: %d\n", pr1.quantity);
 printf("Product cost price: %.2f\n",pr1.cost_price);
 printf("Product sale price: %.2f\n\n", pr1.sale_price);
 /*print product 2*/
 printf("Product name: %s\n",pr2.product_name);
 printf("Product id: %d\n", pr2.product_id);
 printf("Product quantity: %d\n", pr2.quantity);
 printf("Product cost price: %.2f\n",pr2.cost_price);
 printf("Product sale price: %.2f\n\n", pr2.sale_price);
 /*print product 3*/
 printf("Product name: %s\n",pr3.product_name);
 printf("Product id: %d\n", pr3.product_id);
 printf("Product quantity: %d\n", pr3.quantity);
 printf("Product cost price: %.2f\n",pr3.cost_price);
 printf("Product sale price: %.2f\n\n", pr3.sale_price);
 /*print product 4*/
 printf("Product name: %s\n",pr4.product_name);
 printf("Product id: %d\n", pr4.product_id);
 printf("Product quantity: %d\n", pr4.quantity);
 printf("Product cost price: %.2f\n",pr4.cost_price);
 printf("Product sale price: %.2f\n\n", pr4.sale_price);
 /*print product 5*/
 printf("Product name: %s\n",pr5.product_name);
 printf("Product id: %d\n", pr5.product_id);
 printf("Product quantity: %d\n", pr5.quantity);
 printf("Product cost price: %.2f\n",pr5.cost_price);
 printf("Product sale price: %.2f\n\n", pr5.sale_price);
 /*print product 6*/
 printf("Product name: %s\n",pr6.product_name);
 printf("Product id: %d\n", pr6.product_id);
 printf("Product quantity: %d\n", pr6.quantity);
 printf("Product cost price: %.2f\n",pr6.cost_price);
 printf("Product sale price: %.2f\n\n", pr6.sale_price);
 /*print product 7*/
 printf("Product name: %s\n",pr7.product_name);
 printf("Product id: %d\n", pr7.product_id);
 printf("Product quantity: %d\n", pr7.quantity);
 printf("Product cost price: %.2f\n",pr7.cost_price);
 printf("Product sale price: %.2f\n\n", pr7.sale_price);
 /*print product 8*/
 printf("Product name: %s\n",pr8.product_name);
 printf("Product id: %d\n", pr8.product_id);
 printf("Product quantity: %d\n", pr8.quantity);
 printf("Product cost price: %.2f\n",pr8.cost_price);
 printf("Product sale price: %.2f\n\n", pr8.sale_price);
 /*print product 9*/
 printf("Product name: %s\n",pr9.product_name);
 printf("Product id: %d\n", pr9.product_id);
 printf("Product quantity: %d\n", pr9.quantity);
 printf("Product cost price: %.2f\n",pr9.cost_price);
 printf("Product sale price: %.2f\n\n", pr9.sale_price);
 /*print product 10*/
 printf("Product name: %s\n",pr10.product_name);
 printf("Product id: %d\n", pr10.product_id);
 printf("Product quantity: %d\n", pr10.quantity);
 printf("Product cost price: %.2f\n",pr10.cost_price);
 printf("Product sale price: %.2f\n\n", pr10.sale_price);
 total = pr1.cost_price + pr2.cost_price + pr3.cost_price + pr4.cost_price + pr5.cost_price +
pr6.cost_price + pr7.cost_price + pr8.cost_price + pr9.cost_price + pr10.cost_price;
  printf("Total Price: %d",total);
}
 
