#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *left;
	struct node *right;
}node;
node *root=NULL,*parent,*tmp;

void create();
struct node *display(struct node *root);

int main()
{
	int ch;
		while(1)
		{
			printf("\n ----- MENU -------");
			printf("\n 1. Enter a node:: ");
			printf("\n 2. Traversing :: ");
			printf("\n 3. For Quit::");
				printf("\n Enter a choice::");	
					scanf("%d",&ch);
			switch(ch)
			{
				case 1: create();
				break;
				
				case 2: display(root);
				break;
				
				case 3: exit(0);
					default: printf("\n wrong choice.. Enter between 1 to 3 ..!");
			}
		}
}

void create()
{
	
}

struct node *display(struct node *tmp)
{
	
}
