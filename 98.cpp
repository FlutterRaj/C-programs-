#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *left;
	struct node *right;
}node;
node *root=NULL,*parent,*tmp,*curr;

void create();
struct node *display(struct node *root);

int main()
{
	int ch;
		while(1)
		{
			printf("\n ----- MENU -------");
			printf("\n 1. For Create :: ");
			printf("\n 2. For Traversing :: ");
			printf("\n 3. For Quit ::");
				printf("\n Enter a choice::");	
					scanf("%d",&ch);
			switch(ch)
			{
				case 1: create();
				break;
				
				case 2: display(root);
				break;
				
				case 3: exit(0);
					default: printf("\n wrong choice..! Enter between 1 to 3 ..!");
			}
		}
}

void create()
{
	
	tmp=(node*)malloc(sizeof(node));
		printf("\n Enter a data::");
			scanf("%d",&tmp->data);
		tmp->left=NULL;
			tmp->right=NULL;
			
		if(root==NULL)
		{
			root=tmp;
		}
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

struct node *display(struct node *tmp)
{
	if(tmp->left)
		display(tmp->left);
	
	printf("%d-->",tmp->data);
	
	if(tmp->right)
		display(tmp->right);
}
