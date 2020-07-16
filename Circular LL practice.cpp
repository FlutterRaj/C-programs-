#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *left;
	struct node *right;
}node;
node *head=NULL,*tmp,*p;
int len,item;

void create();
void display();
void delet();
void delatpos();
void delatbegin();
void delatend();
void addatbegin();
void addatend();
void addatpos();
int search();
void reverse();
int count();

int main()
{
	int ch;
	 while(1)
	 {
	 	printf("\n\n ---- MENU -----");
	 	printf("\n 1. Create ::");
	 	printf("\n 2. Display ::");
	 	/*printf("\n 3. Delet ::");
	 	printf("\n 4. Delet from a pos ::");
	 	printf("\n 5. Count ::");
	 	printf("\n 6. Add at Beginning :: ");
	 	printf("\n 7. Add at end ::");
	 	printf("\n 8. Add at postion ::");
	 	printf("\n 9. Search :: ");
	 	printf("\n 10. Reverse ::");*/
	 	printf("\n 11. For Quit ::");
	 		printf("\n\t Enter a choice ::");
	 			scanf("%d",&ch);
	 	switch(ch)
	 	{
	 		case 1: create();
	 		break;
	 		
	 		case 2: display();
	 		break;
	 		
	 		/*case 3: delet();
	 		break;
	 		
	 		case 4: delatpos();
	 		break;
	 		
	 		case 5: len=count();
	 				printf("\n Lenght = %d",len);
	 		break;
	 		
	 		case 6: addatbegin();
	 		break;
	 		
	 		case 7: addatend();
	 		break;
	 		
	 		case 8: addatpos();
	 		break;
	 		
	 		case 9: len=search();
	 				if(len>=1)
	 					printf("\n %d item found on %d position .",item,len);
	 				else
	 					printf("\n %d not found on the list.. ",item);
	 		break;
	 		
	 		case 10 : reverse();
	 		break;*/
	 		
	 		case 11: exit(0);
	 		default: printf("\n Wrong choice...");
		}
	 }
}

void create()
{
	
}

void display()
{
	
}
