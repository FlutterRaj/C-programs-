#include<stdio.h>
#include<stdlib.h>

typedef struct node 
{
	int data;
	struct node *left;
	struct node *right;
}node;
node *root=NULL,*tmp,*parent,*curr;

void create();
void display();

int main()
{
	int ch;
	while(1)
	{
		printf("\n ---- MENU -----");
		printf("\n 1. Create BST ::");  /* Binary search tree */
		printf("\n 2. Display::");
		printf("\n 3. For Quit::");
			printf("\n Enter a choice::");
				scanf("%d",&ch);
		switch(ch)
		{
			case 1: create();
			break;
			
			case 2: display();
			break;
			
			case 3: exit(1);
				default: printf("\n Wrong choice.. Please choose between 1 to 3 __");
		}
	}
}

void create()
{
	int data;
		printf("\n Enter a data::");
			scanf("%d",&data);
		tmp=(node*)malloc(sizeof(node));
			tmp->data=data;
			tmp->left=NULL; tmp->right=NULL;
		parent=root;
			if(root==NULL)
				root=tmp;
			else
			{
				curr=root;
				while(curr)
				{
					parent=curr;
					if(tmp->data > curr->data)
						curr=curr->right;
					else
						curr=curr->left;
				}
				if(tmp->data > parent->data)
					parent->right=tmp;
				else
					parent->left=tmp;
			}
}

void display()
{
	
}
