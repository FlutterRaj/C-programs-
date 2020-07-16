#include<stdio.h>
#include<stdlib.h>

typedef struct node 
{
	int info;
	struct node *link;
}node;
node *root=NULL;
void insert();
void display();

int main()
{
	int choice;
	while(1)
	{
	printf("\n\n ---------Menu----------");
	printf("\n 1. insert::");
	printf("\n 2. DISPLAY::");
	printf("\n 3. Exit::");
		printf("\n Enter a choice::");
			scanf("%d",&choice);
			
		switch(choice)
		{
			case 1: insert();
			break;
			
			case 2: display();
			break;
			
			case 3: exit(1);
			
			default: printf("\n wrong choice..");
		}
}
}

void insert()
{
	node *tmp,*p;
	tmp=(node*)malloc(sizeof(node));
	printf("\n Enter a value::");
		scanf("%d",&tmp->info);
	p=root;
		
	if(root==NULL)
	{
			root=tmp;
		tmp->link=tmp;
	}
	else
	{
		while(p->link!=root)
				p=p->link;
			
			tmp->link=root;
			root->link=tmp;
	}
}

void display()
{
	node *p;
	p=root;
	
	if(root==NULL)
		printf("\n Empty list..");
	else
	{
	while(p->link!=root)
	{
		printf("%d->",p->info);
		p=p->link;
	}
}}
