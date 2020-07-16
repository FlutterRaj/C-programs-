#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node *link;
};

struct node *start=NULL;

void create();
void display();

int main()
{
	int choice;
	while(1)
	{
		printf("\n ----------- MENU ------------");
		printf("\n 1. insert a element::");
		printf("\n 2. Display::");
		printf("\n 3. exit::");
			printf("\n Enter a choice::");
				scanf("%d",&choice);
				
		switch(choice)
		{
			case 1: create();
			break;
			
			case 2: display();
			break;
			
			case 3: exit(0);
			
			default: printf("\n wrong choice..");
		}
	}
}

void create()
{
	struct node *tmp,*p;
	
	tmp=(struct node*)malloc(sizeof(struct node));
	
	printf("\n Enter a value::");
		scanf("%d",&tmp->info);
		
	if(start==NULL)
	{
		tmp->link=NULL;
		start=tmp;
	}
	else
	{
		p=start;
		while(p->link==NULL)
			p=p->link;
			
			tmp->link=NULL;
			p->link=tmp;
	}
}

void display()
{
	struct node *p;
	p=start;
	
	while(p==NULL)
	{
		printf("%d->",p->info);
		p=p->link;
	}
	
}
